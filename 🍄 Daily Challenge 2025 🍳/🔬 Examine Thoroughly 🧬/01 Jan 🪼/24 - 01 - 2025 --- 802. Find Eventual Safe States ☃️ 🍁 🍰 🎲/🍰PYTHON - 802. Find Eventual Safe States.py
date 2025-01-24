#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 802

#? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = Vertex Of Graph

#? 🧺 Space complexity ➺ O(V)      ->  E = Edges Of Graph

class Solution:
      def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
            # Get the number of nodes in the graph
            n = len(graph)

            # A dictionary to store whether a node is "safe" or not
            # True means the node is safe, False means it's not safe
            safe = {}

            # Depth-First Search (DFS) function to check if a node is safe
            def dfs(i):
                  # If the result for this node is already computed, return it
                  if i in safe:
                        return safe[i]

                  # Assume the current node is not safe (to detect cycles)
                  safe[i] = False

                  # Explore all neighbors of the current node
                  for nei in graph[i]:
                        # If any neighbor is not safe, the current node is also not safe
                        if not dfs(nei):
                              return False

                  # If all neighbors are safe, the current node is safe
                  safe[i] = True
                  return True

            # List to store the result of all safe nodes
            res = []

            # Iterate through all nodes in the graph
            for i in range(n):
                  # If the node is safe, add it to the result list
                  if dfs(i):
                        res.append(i)

            # Return the list of all safe nodes
            return res
