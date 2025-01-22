#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1372

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      # Main function to find the longest ZigZag path
      def longestZigZag(self, root: Optional[TreeNode]) -> int:
            # Initialize the variable to keep track of the longest ZigZag path
            self.pathLength = 0

            # Start the depth-first search (DFS) from the root node
            self.dfs(root, True, 0)  # Start going left from root with 0 steps
            return self.pathLength   # Return the longest ZigZag path length found

      # Helper function to perform DFS and calculate ZigZag path length
      def dfs(self, node, goLeft, steps):
            # Base condition: if the current node is not None
            if node:
                  # Update the maximum ZigZag path length encountered
                  self.pathLength = max(self.pathLength, steps)

                  # If we are going left, we continue the left path with steps incremented
                  # and reset the right path to 1 (start a new path)
                  if goLeft:
                        self.dfs(node.left, False, steps + 1)  # Go left, increment steps
                        self.dfs(node.right, True, 1)          # Go right, reset steps to 1
                  else:
                        # If we are going right, we continue the right path with steps incremented
                        # and reset the left path to 1 (start a new path)
                        self.dfs(node.left, False, 1)         # Go left, reset steps to 1
                        self.dfs(node.right, True, steps + 1) # Go right, increment steps

