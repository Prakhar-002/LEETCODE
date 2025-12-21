//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1584

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int minCostConnectPoints(int[][] points) {
            // ----------------------------------------------------------
            // Step 1: Build the Adjacency List (Graph Construction)
            // ----------------------------------------------------------
            int N = points.length; // N is the number of points.
            // `adj` is an adjacency list. Map<Integer, List<int[]>>
            // Keys are node indices, values are lists of int[]{distance,
            // neighbor_node_index}.
            Map<Integer, List<int[]>> adj = new HashMap<>();
            // Initialize adjacency lists for all nodes.
            for (int i = 0; i < N; i++) {
                  adj.put(i, new ArrayList<>());
            }

            // Iterate through all unique pairs of points to calculate Manhattan distance
            // and add edges to the adjacency list.
            for (int i = 0; i < N; i++) {
                  int x1 = points[i][0];
                  int y1 = points[i][1];
                  // Iterate from `i + 1` to avoid duplicate pairs and self-loops.
                  for (int j = i + 1; j < N; j++) {
                        int x2 = points[j][0];
                        int y2 = points[j][1];
                        // Calculate the Manhattan distance.
                        int dist = Math.abs(x2 - x1) + Math.abs(y2 - y1);
                        // Add an edge from `i` to `j` with `dist` as weight.
                        adj.get(i).add(new int[] { dist, j });
                        // Add an edge from `j` to `i` with `dist` as weight (undirected graph).
                        adj.get(j).add(new int[] { dist, i });
                  }
            }

            // ----------------------------------------------------------
            // Step 2: Implement Prim's Algorithm for Minimum Spanning Tree (MST)
            // ----------------------------------------------------------
            int res = 0; // `res` will store the total minimum cost.
            // `visit` is a set to keep track of nodes already included in the MST.
            Set<Integer> visit = new HashSet<>();
            // `minH` is a min-priority queue (min-heap).
            // Stores int[]{cost, node_index}, ordered by `cost`.
            // `cost` is the weight of the edge connecting `node_index` to the current MST.
            PriorityQueue<int[]> minH = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));
            // Start the MST from node 0 with a cost of 0.
            minH.offer(new int[] { 0, 0 }); // {cost_to_add_node, node_index}

            // The loop continues until all `N` nodes are included in the MST.
            while (visit.size() < N) {
                  // Extract the edge with the minimum cost from the heap.
                  int[] current = minH.poll();
                  int cost = current[0];
                  int node = current[1];

                  // If this `node` has already been visited (already in MST), skip it.
                  if (visit.contains(node)) {
                        continue;
                  }

                  // Add the `cost` of this edge to the total result.
                  res += cost;
                  // Add `node` to the set of visited nodes (now part of the MST).
                  visit.add(node);

                  // Explore all neighbors of the newly added `node`.
                  // `neiCost` is the edge weight to the neighbor, `nei` is the neighbor node
                  // index.
                  // `adj.get(node)` retrieves the list of neighbors for `node`.
                  for (int[] neighbor : adj.get(node)) {
                        int neiCost = neighbor[0];
                        int nei = neighbor[1];
                        // If the neighbor `nei` is not yet in the MST,
                        // add the edge connecting `node` to `nei` into the min-heap.
                        if (!visit.contains(nei)) {
                              minH.offer(new int[] { neiCost, nei });
                        }
                  }
            }

            // ----------------------------------------------------------
            // Step 3: Return the Total Minimum Cost
            // ----------------------------------------------------------
            // Once all nodes are visited, `res` holds the minimum cost to connect them all.
            return res;
      }
}