#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 700

#? ⌚ Time complexity ➺ O(h) 👉🏻  h = Height Of Tree

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
            cur = root

            while cur:
                  if cur.val == val:  # If the value matches, return the current node
                        return cur

                  elif cur.val > val:  # If the value is smaller, move to the left subtree
                        cur = cur.left

                  else:  # If the value is greater, move to the right subtree
                        cur = cur.right

            return None  # If the value is not found, return None