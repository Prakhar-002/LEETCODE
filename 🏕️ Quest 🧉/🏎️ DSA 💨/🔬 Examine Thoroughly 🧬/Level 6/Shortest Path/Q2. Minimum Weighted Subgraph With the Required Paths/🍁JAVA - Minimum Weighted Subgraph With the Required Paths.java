//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // Helper class for Dijkstra priority queue: (distance, node)
      private static class Point {
            long distance;
            int node;

            public Point(long distance, int node) {
                  this.distance = distance;
                  this.node = node;
            }
      }

      public long minimumWeight(int n, int[][] edges, int src1, int src2, int dest) {
            /**
             * Find minimum weight path: src1 → X → src2 → X → dest (X can be same node)
             * Strategy: 3 Dijkstras compute shortest paths:
             * 1. dist1: src1 → all nodes X
             * 2. dist2: src2 → all nodes X
             * 3. dist3: all nodes X → dest (using reversed graph)
             * Answer: min(dist1[X] + dist2[X] + dist3[X]) for all reachable X
             */

            // Forward graph: node → List<(neighbor, weight)>
            Map<Integer, List<int[]>> graph = new HashMap<>();

            // Reversed graph for computing dest→all paths (equivalent to all→dest)
            Map<Integer, List<int[]>> reversedGraph = new HashMap<>();

            // Build both graphs from edges
            for (int[] edge : edges) {
                  int u = edge[0]; // Source node
                  int v = edge[1]; // Destination node
                  int w = edge[2]; // Edge weight

                  // Forward graph: u → v (weight w)
                  graph.computeIfAbsent(u, x -> new ArrayList<>())
                              .add(new int[] { v, w });

                  // Reversed graph: v → u (weight w) for dest→all computation
                  reversedGraph.computeIfAbsent(v, x -> new ArrayList<>())
                              .add(new int[] { u, w });
            }

            // Dijkstra 1: Shortest paths from src1 to all reachable nodes
            Map<Integer, Long> dist1 = dijkstra(n, graph, src1);

            // Dijkstra 2: Shortest paths from src2 to all reachable nodes
            Map<Integer, Long> dist2 = dijkstra(n, graph, src2);

            // Dijkstra 3: Shortest paths from dest to all nodes (reversed = all→dest)
            Map<Integer, Long> dist3 = dijkstra(n, reversedGraph, dest);

            // Find minimum total path weight through any intermediate node X
            long res = Long.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                  // Check if node i is reachable from all 3 sources
                  if (dist1.containsKey(i) &&
                              dist2.containsKey(i) &&
                              dist3.containsKey(i)) {
                        // Total path: src1→i + src2→i + i→dest
                        res = Math.min(res, dist1.get(i) + dist2.get(i) + dist3.get(i));
                  }
            }

            // Return -1 if no valid path exists
            return res == Long.MAX_VALUE ? -1 : res;
      }

      public Map<Integer, Long> dijkstra(int n, Map<Integer, List<int[]>> graph, int src) {
            /**
             * Dijkstra's algorithm: Compute shortest paths from src to all reachable nodes
             * Uses priority queue for greedy selection of minimum distance node
             * dist map serves dual purpose: distance storage + visited tracking
             */

            // Min-heap priority queue: smaller distance first
            PriorityQueue<Point> pq = new PriorityQueue<>(
                        (a, b) -> a.distance == b.distance ? 0 : (a.distance < b.distance ? -1 : 1));

            // Initialize source node with distance 0
            pq.offer(new Point(0, src)); // <distance, node>

            // dist[node] = shortest distance from src (also tracks visited nodes)
            Map<Integer, Long> dist = new HashMap<>();

            // Unused array (can be removed for optimization)
            int[] pre = new int[n];
            Point onePoint = new Point(0, 0);

            while (!pq.isEmpty()) {
                  // Extract node with minimum distance
                  Point cur = pq.poll();
                  long curDistance = cur.distance;
                  int curNode = cur.node;

                  // Pruning: Skip if already processed with better distance
                  if (dist.containsKey(curNode)) {
                        continue;
                  }

                  // Record shortest distance to current node
                  dist.put(curNode, curDistance);

                  // Relax all outgoing edges from current node
                  for (int[] edge : graph.getOrDefault(curNode, new ArrayList<>())) {
                        int nei = edge[0]; // Neighbor node
                        int cost = edge[1]; // Edge weight

                        // Only relax if neighbor not yet processed
                        if (!dist.containsKey(nei)) {
                              // Potential shorter path through current node
                              Point insert = new Point(curDistance + cost, nei);
                              pq.offer(insert);
                        }
                  }
            }

            return dist; // Return distances to all reachable nodes
      }
}
