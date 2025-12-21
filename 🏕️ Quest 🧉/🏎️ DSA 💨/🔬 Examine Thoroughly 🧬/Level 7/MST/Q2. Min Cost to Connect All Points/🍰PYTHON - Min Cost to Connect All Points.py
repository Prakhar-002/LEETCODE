#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1584

#? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

import heapq
from collections import defaultdict
from typing import List 

class Solution:
      def minCostConnectPoints(self, points: List[List[int]]) -> int:
            # ----------------------------------------------------------
            # Step 1: Build the Adjacency List (Graph Construction)
            # ----------------------------------------------------------
            # N is the number of points, which will also be the number of nodes in our graph.
            N = len(points)
            # `adj` is an adjacency list representing the graph.
            # Keys are node indices (0 to N-1), and values are lists of
            # [distance, neighbor_node_index] pairs.
            # `defaultdict(list)` ensures that if a key doesn't exist, it creates an empty list.
            adj = defaultdict(list)

            # Iterate through all unique pairs of points to calculate Manhattan distance
            # and add edges to the adjacency list.
            # Manhattan distance between (x1, y1) and (x2, y2) is |x1-x2| + |y1-y2|.
            for i in range(N):
                  x1, y1 = points[i]
                  # Iterate from `i + 1` to avoid duplicate pairs and connecting a point to itself.
                  for j in range(i + 1, N):
                        x2, y2 = points[j]
                        # Calculate the Manhattan distance.
                        dist = abs(x2 - x1) + abs(y2 - y1)
                        # Add an edge from `i` to `j` with `dist` as weight.
                        adj[i].append([dist, j])
                        # Add an edge from `j` to `i` with `dist` as weight (undirected graph).
                        adj[j].append([dist, i])

            # ----------------------------------------------------------
            # Step 2: Implement Prim's Algorithm for Minimum Spanning Tree (MST)
            # ----------------------------------------------------------
            # `res` will store the total minimum cost to connect all points.
            res = 0
            # `visit` is a set to keep track of nodes already included in the MST.
            visit = set()
            # `minH` is a min-heap (priority queue) to store edges.
            # Elements are [cost, node_index], where `cost` is the weight of the edge
            # connecting `node_index` to the current MST.
            # Start the MST from node 0 with a cost of 0.
            minH = [[0, 0]] # [cost_to_add_node, node_index]

            # The loop continues until all `N` nodes are included in the MST.
            while len(visit) < N:
                  # Extract the edge with the minimum cost from the heap.
                  # `cost` is the weight of the edge, `node` is the node to add to MST.
                  cost, node = heapq.heappop(minH)

                  # If this `node` has already been visited (i.e., already in the MST),
                  # skip it. This handles redundant entries in the heap.
                  if node in visit:
                        continue

                  # Add the `cost` of this edge to the total result.
                  res += cost
                  # Add `node` to the set of visited nodes (now part of the MST).
                  visit.add(node)

                  # Explore all neighbors of the newly added `node`.
                  # `neiCost` is the edge weight to the neighbor, `nei` is the neighbor node index.
                  for neiCost, nei in adj[node]:
                        # If the neighbor `nei` is not yet in the MST,
                        # add the edge connecting `node` to `nei` into the min-heap.
                        # This edge becomes a candidate for future inclusion in the MST.
                        if nei not in visit:
                              heapq.heappush(minH, [neiCost, nei])

            # ----------------------------------------------------------
            # Step 3: Return the Total Minimum Cost
            # ----------------------------------------------------------
            # Once all nodes are visited, `res` holds the minimum cost to connect them all.
            return res