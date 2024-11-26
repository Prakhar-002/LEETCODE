#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2924

#? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = vertex

#? 🧺 Space complexity ➺ O(V) 👉🏻 E = Edges

class Solution:
      def findChampion(self, n: int, edges: List[List[int]]) -> int:
            # Initialize an array to track the incoming edges count for each node
            incoming = [0] * n

            # Iterate through the edges and increment the incoming count for the destination node
            for src, dest in edges:
                  incoming[dest] += 1

            # List to store potential champions (nodes with no incoming edges)
            champions = []

            # Check each node's incoming edge count
            for i, incoming_cnt in enumerate(incoming):
                  # If a node has no incoming edges, add it to the champions list
                  if not incoming_cnt:
                        champions.append(i)

            # If there is more than one node with no incoming edges, return -1
            if len(champions) > 1:
                  return -1

            # Return the champion (node with no incoming edges) if exactly one exists
            return champions[0]
