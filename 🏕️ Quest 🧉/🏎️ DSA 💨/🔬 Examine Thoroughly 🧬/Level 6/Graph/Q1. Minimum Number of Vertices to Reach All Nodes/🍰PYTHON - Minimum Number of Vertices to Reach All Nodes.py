#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q1

#? ⌚ Time complexity ➺ O(E + V) 

#? 🧺 Space complexity ➺ O(E + V) 

class Solution:
      def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
            # Build reverse adjacency list: dest -> list of sources pointing to it
            # In-degree representation: adj[i] contains nodes with edge TO i
            adj = defaultdict(list)

            # Populate reverse graph from edges
            for src, dest in edges:
                  # Edge src -> dest means src has out-edge, dest has in-edge
                  adj[dest].append(src)

            res = []

            # Find nodes with NO incoming edges (in-degree = 0)
            # These are starting points that must be included in answer
            for i in range(n):
                  if not adj[i]:  # Empty list = in-degree 0
                        res.append(i)

            return res
