#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2872

#? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = vertex

#? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = edges

from collections import defaultdict

class Solution: 
      def maxKDivisibleComponents(self, n: int, edges: List[List[int]], node_values: List[int], k: int) -> int:
            # Create an adjacency list to represent the graph
            graph = defaultdict(list)

            # Build the adjacency list from the edges
            for node1, node2 in edges:
                  graph[node1].append(node2)
                  graph[node2].append(node1)

            # Initialize the count of k-divisible components
            k_divisible_count = 0

            # Depth-first search (DFS) function to traverse the graph
            def dfs(current_node, parent_node):
                  # Start with the value of the current node
                  subtree_sum = node_values[current_node]

                  # Traverse all children (connected nodes)
                  for neighbor in graph[current_node]:
                        # Avoid revisiting the parent node
                        if neighbor != parent_node:
                              # Add the contribution of the subtree rooted at this child
                              subtree_sum += dfs(neighbor, current_node)

                  # Check if the total sum of this subtree is divisible by k
                  if subtree_sum % k == 0:
                        nonlocal k_divisible_count
                        k_divisible_count += 1

                  # Return the total sum of this subtree to the parent call
                  return subtree_sum

            # Start DFS from node 0 (assumed as the root), with no parent (-1)
            dfs(0, -1)

            # Return the count of k-divisible components
            return k_divisible_count
