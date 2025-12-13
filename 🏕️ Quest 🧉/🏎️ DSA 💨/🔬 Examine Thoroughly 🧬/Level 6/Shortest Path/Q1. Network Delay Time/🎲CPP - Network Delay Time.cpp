//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 743

//? ⌚ Time complexity ➺ O(E * log V) 

//? 🧺 Space complexity ➺ O(E + V)

#include <vector>
#include <queue>
#include <map>
#include <set>
#include <limits> // Required for numeric_limits

class Solution {
public:
      int networkDelayTime(vector<vector<int>>& times, int n, int k) {
            // ----------------------------------------------------------
            // Step 1: Build the adjacency list (graph representation)
            // ----------------------------------------------------------
            // The adjacency list 'adj' maps each node (u) to a list of its neighbors.
            // Each neighbor is a pair {v, w}, where 'v' is the destination node
            // and 'w' is the weight (time) of the edge.
            map<int, vector<pair<int, int>>> adj;

            // Initialize the adjacency list for all nodes from 1 to n.
            // This ensures that even isolated nodes are present in the map.
            for (int i = 1; i <= n; ++i) {
                  adj[i] = vector<pair<int, int>>();
            }

            // Populate the adjacency list using the given 'times' vector.
            // Each 'time' entry is [u, v, w], meaning a directed edge from u to v
            // with a weight of w.
            for (const auto& time : times) {
                  int u = time[0]; // Source node
                  int v = time[1]; // Destination node
                  int w = time[2]; // Weight (time) of the edge
                  adj[u].push_back({v, w});
            }

            // ----------------------------------------------------------
            // Step 2: Initialize Dijkstra's Algorithm components
            // ----------------------------------------------------------
            // Min-priority queue: stores {distance_from_source, node}.
            // It automatically sorts elements based on the distance (first element).
            // `greater` makes it a min-heap.
            priority_queue<pair<int, int>,
                                    vector<pair<int, int>>,
                                    greater<pair<int, int>>> minHeap;

            // Initialize the min-heap with the starting node 'k' and a distance of 0.
            // The format is {distance, node}.
            minHeap.push({0, k});

            // Set to keep track of visited nodes.
            // Nodes are added to this set once their shortest path from the source
            // has been finalized. This prevents reprocessing nodes.
            set<int> visit;

            // `max_time` will store the maximum time taken for a signal to reach any node.
            // This variable will eventually hold the network delay time.
            int max_time = 0;

            // ----------------------------------------------------------
            // Step 3: Execute Dijkstra's Algorithm
            // ----------------------------------------------------------
            // The loop continues as long as there are nodes to process in the min-heap.
            while (!minHeap.empty()) {
                  // Retrieve and remove the node with the smallest distance from the source
                  // from the priority queue. This is the core of Dijkstra's greedy approach.
                  pair<int, int> current = minHeap.top();
                  minHeap.pop();

                  int t = current.first;  // Current accumulated time to reach this node
                  int node = current.second; // The current node

                  // If this node has already been visited (meaning its shortest path
                  // has already been finalized), skip it. This handles redundant entries
                  // in the min-heap.
                  if (visit.count(node)) {
                        continue;
                  }

                  // Mark the current node as visited. Its shortest path is now finalized.
                  visit.insert(node);

                  // Update `max_time`. We are interested in the maximum of all shortest
                  // path times to ensure all reachable nodes have received the signal.
                  max_time = max(max_time, t);

                  // If all 'n' nodes have been visited, it means the signal has reached
                  // every node in the network. We can return the `max_time`.
                  if (visit.size() == n) {
                        return max_time;
                  }

                  // Explore all neighbors of the current node.
                  // Use `adj.at(node)` to get the vector, which throws if key not found (though initialized).
                  // Or `adj[node]` which creates if not found. Since we initialized, both are fine.
                  for (const auto& neighbor : adj.at(node)) {
                        int nei = neighbor.first;   // Neighboring node
                        int weight = neighbor.second; // Weight (time) to reach the neighbor from the current node

                        // If the neighbor has not been visited yet,
                        // consider adding it to the priority queue.
                        if (visit.find(nei) == visit.end()) { // Check if 'nei' is NOT in 'visit' set
                              // Add the neighbor to the min-heap with the new accumulated distance.
                              // The new distance is the current node's distance plus the edge weight.
                              minHeap.push({t + weight, nei});
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
};