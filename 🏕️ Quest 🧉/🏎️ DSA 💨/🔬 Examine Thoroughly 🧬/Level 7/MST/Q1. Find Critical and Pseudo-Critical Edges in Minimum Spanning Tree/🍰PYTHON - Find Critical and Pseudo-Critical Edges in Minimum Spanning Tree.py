#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.5 Q1

#? ⌚ Time complexity ➺ O(E ^ 2 * α(V)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(E + V)

class UnionFind:
      def __init__(self, n: int):
            # Initialize parent array: each node is its own parent initially
            self.parent = list(range(n))

      def find(self, p: int) -> int:
            # Find root of p with path compression
            if self.parent[p] != p:
                  self.parent[p] = self.find(self.parent[p])
            return self.parent[p]

      def union(self, u: int, v: int):
            # Union two nodes u and v
            pu = self.find(u)
            pv = self.find(v)
            self.parent[pu] = pv


class Solution:
      def findCriticalAndPseudoCriticalEdges(
            self, n: int, edges: List[List[int]]
      ) -> List[List[int]]:
            # Lists to store critical and pseudo-critical edge indices
            critical = []
            pseudo_critical = []

            # Append original index to each edge: [u, v, w] → [u, v, w, idx]
            for i in range(len(edges)):
                  edges[i].append(i)

            # Sort edges by weight (Kruskal's MST)
            edges.sort(key=lambda x: x[2])

            # Compute MST weight of the original graph
            mstwt = self.findMST(n, edges, block=-1, force=-1)

            # For each edge, check if it is critical or pseudo-critical
            for i in range(len(edges)):
                  # If removing this edge increases MST weight → critical
                  if mstwt < self.findMST(n, edges, block=i, force=-1):
                        critical.append(edges[i][3])
                  # Else if forcing this edge still gives same MST weight → pseudo-critical
                  elif mstwt == self.findMST(n, edges, block=-1, force=i):
                        pseudo_critical.append(edges[i][3])

            # Return [critical, pseudoCritical]
            return [critical, pseudo_critical]

      def findMST(self, n: int, edges: List[List[int]], block: int, force: int) -> int:
            # Union-Find to manage connected components
            uf = UnionFind(n)
            weight = 0

            # If force != -1, force-include edge `force` first
            if force != -1:
                  u, v, w = edges[force][0], edges[force][1], edges[force][2]
                  weight += w
                  uf.union(u, v)

            # Build MST with Kruskal: iterate over sorted edges
            for i in range(len(edges)):
                  if i == block:
                        continue  # skip blocked edge

                  u, v, w = edges[i][0], edges[i][1], edges[i][2]
                  if uf.find(u) == uf.find(v):
                        continue  # already connected, skip to avoid cycle

                  uf.union(u, v)
                  weight += w

            # Check if MST connects all nodes (connected component of 0 contains all)
            for i in range(n):
                  if uf.find(i) != uf.find(0):
                        return float('inf')  # disconnected → invalid MST

            return weight
