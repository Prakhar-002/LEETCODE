#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

from typing import List
from heapq import heappush, heappop
from collections import defaultdict
import sys

class Solution:
      def minimumWeight(self, n: int, edges: List[List[int]], src1: int, src2: int, dest: int) -> int:
            """
            Find minimum weight path: src1 → X → src2 → X → dest (X can be same)
            Using 3 Dijkstras: src1→all, src2→all, dest→all (reversed graph)
            """
            # Build forward graph: node → [(neighbor, weight), ...]
            graph = defaultdict(list)
            # Build reversed graph for dest→all shortest paths
            reversed_graph = defaultdict(list)

            for u, v, w in edges:
                  graph[u].append((v, w))      # Forward: u → v (weight w)
                  reversed_graph[v].append((u, w))  # Reverse: v → u (weight w)

            # Dijkstra 1: shortest paths from src1 to all nodes
            dist1 = self.dijkstra(n, graph, src1)

            # Dijkstra 2: shortest paths from src2 to all nodes  
            dist2 = self.dijkstra(n, graph, src2)

            # Dijkstra 3: shortest paths from dest to all nodes (using reversed graph)
            dist3 = self.dijkstra(n, reversed_graph, dest)

            # Find minimum: dist1[X] + dist2[X] + dist3[X] for all valid X
            result = float("inf")

            for x in range(n):
                  if x in dist1 and x in dist2 and x in dist3:
                        # Total path weight through intermediate node X
                        result = min(result, dist1[x] + dist2[x] + dist3[x])

            return result if result != float("inf") else -1

      def dijkstra(self, n: int, graph: defaultdict, src: int) -> dict:
            """
            Dijkstra's algorithm: shortest paths from src to all reachable nodes
            Returns: {node: shortest_distance}
            """
            # Min-heap: (distance, node)
            pq = []
            heappush(pq, (0, src))  # Start from source with distance 0

            # dist[node] = shortest distance from src (visited + distance combined)
            dist = {}

            while pq:
                  cur_distance, cur_node = heappop(pq)

                  # Skip if already processed with better distance
                  if cur_node in dist:
                        continue

                  # Record shortest distance to current node
                  dist[cur_node] = cur_distance

                  # Explore neighbors
                  for nei, weight in graph[cur_node]:
                        if nei not in dist:  # Not visited yet
                              # Relax edge: cur_node → nei
                              new_distance = cur_distance + weight
                              heappush(pq, (new_distance, nei))

            return dist
