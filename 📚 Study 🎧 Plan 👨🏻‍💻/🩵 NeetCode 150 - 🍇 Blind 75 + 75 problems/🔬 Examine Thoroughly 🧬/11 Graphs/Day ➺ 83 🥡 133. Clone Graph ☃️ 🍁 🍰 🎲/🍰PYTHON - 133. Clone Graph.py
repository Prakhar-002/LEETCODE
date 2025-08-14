#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 133

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Edge + Vertex

#? 🧺 Space complexity ➺ O(n)

from typing import Optional 

class Solution:
      def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
            # Map to store mapping: original node → cloned node
            oldToNew = {}

            # ----------------------------------------------------------
            # DFS function to clone nodes and their neighbors recursively
            # ----------------------------------------------------------
            def clone(node):
                  # If node is already cloned → return the clone
                  if node in oldToNew:
                        return oldToNew[node] 

                  # Create a copy of the current node (no neighbors yet)
                  copy = Node(node.val)
                  oldToNew[node] = copy

                  # Recursively clone all neighbors and add to copy.neighbors
                  for nei in node.neighbors:
                        copy.neighbors.append(clone(nei))

                  return copy

            # ----------------------------------------------------------
            # Start cloning from the given node (if not None)
            # ----------------------------------------------------------
            return clone(node) if node else None