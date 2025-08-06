#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 98

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def isValidBST(self, root: Optional[TreeNode]) -> bool:
            # Helper function to check validity of BST with range constraints
            def valid(node, left, right):
                  # If we reach a null node, it's valid
                  if not node:
                        return True

                  # Current node's value must be strictly between left and right bounds
                  if not (left < node.val < right):
                        return False

                  # Recursively check left and right subtrees with updated bounds
                  return valid(node.left, left, node.val) and valid(node.right, node.val, right)

            # Initial call with infinite bounds
            return valid(root, float("-inf"), float("inf"))
