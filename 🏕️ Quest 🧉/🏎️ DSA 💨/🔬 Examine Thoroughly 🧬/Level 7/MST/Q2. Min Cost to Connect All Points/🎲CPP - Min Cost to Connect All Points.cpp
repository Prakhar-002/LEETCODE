//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1584

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>         // For priority_queue
#include <unordered_map> // For unordered_map (adjacency list)
#include <unordered_set> // For unordered_set (visited nodes)
#include <cmath>         // For abs

class Solution {
public:
      int minCostConnectPoints(vector<vector<int>> &points) {
            // ----------------------------------------------------------
            // Step 1: Build the Adjacency List (Graph Construction)
            // ----------------------------------------------------------
            int N = points.size(); // N is the number of points.
            // `adj` is an adjacency list. `unordered_map<int, vector<pair<int, int>>>`
            // Keys are node indices, values are vectors of `pair<distance, neighbor_node_index>`.
            // `unordered_map` is used for potentially faster average-case access than `map`.
            unordered_map<int, vector<pair<int, int>>> adj;

            // Iterate through all unique pairs of points to calculate Manhattan distance
            // and add edges to the adjacency list.
            for (int i = 0; i < N; i++) {
                  int x1 = points[i][0];
                  int y1 = points[i][1];
                  // Iterate from `i + 1` to avoid duplicate pairs and self-loops.
                  for (int j = i + 1; j < N; j++) {
                        int x2 = points[j][0];
                        int y2 = points[j][1];
                        // Calculate the Manhattan distance: |x1 - x2| + |y1 - y2|.
                        int dist = abs(x1 - x2) + abs(y1 - y2);
                        // Add an edge from `i` to `j` with `dist` as weight.
                        // This creates the entry in `adj` for `i` if it doesn't exist.
                        adj[i].push_back({dist, j});
                        // Add an edge from `j` to `i` with `dist` as weight (for an undirected graph).
                        adj[j].push_back({dist, i});
                  }
            }

            // ----------------------------------------------------------
            // Step 2: Implement Prim's Algorithm for Minimum Spanning Tree (MST)
            // ----------------------------------------------------------
            int res = 0; // `res` will store the total minimum cost to connect all points.
            // `visit` is an `unordered_set` to keep track of nodes already included in the MST.
            // `unordered_set` provides fast average-case insertion and lookup.
            unordered_set<int> visit;
            // `minH` is a min-priority queue.
            // It stores `pair<int, int>` as {cost, node_index}.
            // `greater<pair<int, int>>` makes it a min-heap based on the first element (`cost`).
            // `cost` represents the weight of the edge connecting `node_index` to the current MST.
            priority_queue<pair<int, int>, vector<pair<int, int>>,
                                greater<pair<int, int>>>
                minH;

            // Start Prim's algorithm from node 0. The cost to "add" the first node is 0.
            minH.push({0, 0}); // {cost_to_add_node, node_index}

            // The loop continues until all `N` nodes are included in the MST.
            // The size of `visit` set indicates how many nodes are in the MST.
            while (visit.size() < N)
            {
                  // Extract the edge with the minimum cost from the heap.
                  pair<int, int> curr = minH.top();
                  minH.pop();

                  int cost = curr.first; // The weight of the edge.
                  int i = curr.second;   // The node to potentially add to the MST.

                  // If this node `i` has already been visited (i.e., already part of the MST),
                  // skip it. This handles redundant entries in the priority queue.
                  if (visit.count(i))
                  { // `count(i)` returns 1 if `i` is in the set, 0 otherwise.
                        continue;
                  }

                  // Add the `cost` of this edge to the total result, as this edge is part of the MST.
                  res += cost;
                  // Add `i` to the set of visited nodes, marking it as part of the MST.
                  visit.insert(i);

                  // Explore all neighbors of the newly added node `i`.
                  // `adj[i]` gives the vector of neighbors for node `i`.
                  for (const auto &nei : adj[i])
                  {
                        int neiCost = nei.first;   // Cost of the edge to the neighbor.
                        int neiIndex = nei.second; // Index of the neighbor node.

                        // If the neighbor `neiIndex` is not yet in the MST (not visited),
                        // push the edge connecting `i` to `neiIndex` into the min-heap.
                        // This edge becomes a candidate for future inclusion in the MST.
                        if (!visit.count(neiIndex))
                        {
                              minH.push({neiCost, neiIndex});
                        }
                  }
            }

            // ----------------------------------------------------------
            // Step 3: Return the Total Minimum Cost
            // ----------------------------------------------------------
            // Once the loop finishes (all `N` nodes are in the MST), `res` holds the
            // minimum total cost required to connect all points.
            return res;
      }
};