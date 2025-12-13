//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 743

//? ⌚ Time complexity ➺ O(E * log V) 

//? 🧺 Space complexity ➺ O(E + V)

import java.util.*;

class Solution {
      public int networkDelayTime(int[][] times, int n, int k) {
            // ----------------------------------------------------------
            // Step 1: Build the adjacency list (graph representation)
            // ----------------------------------------------------------
            // The adjacency list 'adj' maps each node (u) to a list of its neighbors.
            // Each neighbor is represented as an array int[]{v, w}, where 'v' is the
            // destination node and 'w' is the weight (time) of the edge.
            Map<Integer, List<int[]>> adj = new HashMap<>();

            // Initialize the adjacency list for all nodes from 1 to n.
            // This ensures that even isolated nodes are present in the map.
            for (int i = 1; i <= n; i++) {
                  adj.put(i, new ArrayList<>());
            }

            // Populate the adjacency list using the given 'times' array.
            // Each 'time' entry is [u, v, w], meaning a directed edge from u to v
            // with a weight of w.
            for (int[] time : times) {
                  int u = time[0]; // Source node
                  int v = time[1]; // Destination node
                  int w = time[2]; // Weight (time) of the edge
                  adj.get(u).add(new int[] { v, w });
            }

            // ----------------------------------------------------------
            // Step 2: Initialize Dijkstra's Algorithm components
            // ----------------------------------------------------------
            // Min-priority queue: stores int[]{distance_from_source, node}.
            // It automatically sorts elements based on the distance (first element).
            PriorityQueue<int[]> minHeap = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));

            // Initialize the min-heap with the starting node 'k' and a distance of 0.
            // The format is {distance, node}.
            minHeap.offer(new int[] { 0, k });

            // Set to keep track of visited nodes.
            // Nodes are added to this set once their shortest path from the source
            // has been finalized. This prevents reprocessing nodes.
            Set<Integer> visit = new HashSet<>();

            // `max_time` will store the maximum time taken for a signal to reach any node.
            // This variable will eventually hold the network delay time.
            int max_time = 0;

            // ----------------------------------------------------------
            // Step 3: Execute Dijkstra's Algorithm
            // ----------------------------------------------------------
            // The loop continues as long as there are nodes to process in the min-heap.
            while (!minHeap.isEmpty()) {
                  // Retrieve and remove the node with the smallest distance from the source
                  // from the priority queue. This is the core of Dijkstra's greedy approach.
                  int[] current = minHeap.poll();
                  int t = current[0]; // Current accumulated time to reach this node
                  int node = current[1]; // The current node

                  // If this node has already been visited (meaning its shortest path
                  // has already been finalized), skip it. This handles redundant entries
                  // in the min-heap.
                  if (visit.contains(node)) {
                        continue;
                  }

                  // Mark the current node as visited. Its shortest path is now finalized.
                  visit.add(node);

                  // Update `max_time`. We are interested in the maximum of all shortest
                  // path times to ensure all reachable nodes have received the signal.
                  max_time = Math.max(max_time, t);

                  // If all 'n' nodes have been visited, it means the signal has reached
                  // every node in the network. We can return the `max_time`.
                  if (visit.size() == n) {
                        return max_time;
                  }

                  // Explore all neighbors of the current node.
                  for (int[] neighbor : adj.get(node)) {
                        int nei = neighbor[0]; // Neighboring node
                        int weight = neighbor[1]; // Weight (time) to reach the neighbor from the current node

                        // If the neighbor has not been visited yet,
                        // consider adding it to the priority queue.
                        if (!visit.contains(nei)) {
                              // Add the neighbor to the min-heap with the new accumulated distance.
                              // The new distance is the current node's distance plus the edge weight.
                              minHeap.offer(new int[] { t + weight, nei });
                        }
                  }
            }

            // ----------------------------------------------------------
            // Step 4: Check for unreachable nodes
            // ----------------------------------------------------------
            // If the loop finishes but not all 'n' nodes have been visited,
            // it means some nodes are unreachable from the source node 'k'.
            // In such a case, the problem statement implies it's impossible to
            // send a signal to all nodes, so we should return -1.
            // If all nodes are reached, max_time is returned within the loop.
            return visit.size() == n ? max_time : -1;
      }
}