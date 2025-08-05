#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 226

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            # Base case: if the current node is None, return None
            if not root:
                  return None

            # Swap the left and right child of the current node
            root.left, root.right = root.right, root.left

            # Recursively invert the left subtree
            self.invertTree(root.left)

            # Recursively invert the right subtree
            self.invertTree(root.right)

            # Return the root node after inversion
            return root
