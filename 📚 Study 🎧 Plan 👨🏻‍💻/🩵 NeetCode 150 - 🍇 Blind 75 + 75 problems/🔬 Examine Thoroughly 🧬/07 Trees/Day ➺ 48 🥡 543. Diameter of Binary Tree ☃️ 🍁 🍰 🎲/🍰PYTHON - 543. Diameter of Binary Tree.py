#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 543

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
            res = 0      # Initialize a variable to store the maximum diameter found

            def dfs(cur):
                  nonlocal res       # Allow us to modify 'res' defined outside this nested function

                  if not cur:
                        return 0     # If the current node is None, return 0 (no height)

                  # Recursively find the height of the left subtree
                  left = dfs(cur.left)

                  # Recursively find the height of the right subtree
                  right = dfs(cur.right)

                  # Update the result if the path through this node is larger than current max
                  res = max(res, left + right)

                  # Return height of current node = 1 + max height of left or right subtree
                  return 1 + max(left, right)

            dfs(root)     # Start the DFS traversal from the root node
            return res    # The final result is the maximum diameter found
