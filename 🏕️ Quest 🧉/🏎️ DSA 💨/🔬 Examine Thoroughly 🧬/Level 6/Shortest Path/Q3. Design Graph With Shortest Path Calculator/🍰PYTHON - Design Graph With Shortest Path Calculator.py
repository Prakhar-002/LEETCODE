#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

#? ⌚ Time complexity ➺ O((V + E) log V) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(v)

from heapq import heappush, heappop 
from typing import List
inf = float('inf')

class Graph:
      def __init__(self, n: int, edges: List[List[int]]):
            """
            Initialize directed weighted graph with n nodes.
            adj[i] = list of (neighbor, weight) pairs from node i
            """
            self.adj = [[] for _ in range(n)]  # Adjacency list: node → [(nei, weight), ...]

            # Build graph from initial edges
            for u, v, w in edges:
                  self.adj[u].append((v, w))  # Directed edge: u → v (weight w)

      def addEdge(self, edge: List[int]) -> None:
            """
            Add single directed edge to graph.
            edge = [u, v, w] → add edge u → v with weight w
            """
            u, v, w = edge
            self.adj[u].append((v, w))  # Add to adjacency list

      def shortestPath(self, node1: int, node2: int) -> int:
            """
            Dijkstra's algorithm: shortest path from node1 to node2.
            Returns minimum distance or -1 if no path exists.
            """
            n = len(self.adj)  # Number of nodes

            # Min-heap priority queue: (distance, node)
            pq = []
            heappush(pq, (0, node1))  # Start from node1 with distance 0

            # costs[i] = shortest known distance from node1 to i
            costs = [inf] * n 
            costs[node1] = 0  # Source distance = 0

            while pq:
                  cost, node = heappop(pq)  # Extract min-distance node

                  # Pruning: skip if better path already found
                  if cost > costs[node]:
                        continue

                  # Early termination: found destination
                  if node == node2:
                        return cost 

                  # Relax all outgoing edges from current node
                  for nei, nei_cost in self.adj[node]:
                        new_cost = cost + nei_cost  # Potential shorter path

                        # If shorter path found to neighbor
                        if new_cost < costs[nei]:
                              costs[nei] = new_cost      # Update distance
                              heappush(pq, (new_cost, nei))  # Add to PQ

            # No path exists to node2
            return -1
