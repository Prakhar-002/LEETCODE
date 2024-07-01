#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 701

#? ⌚ Time complexity -> O(n) 👉 given

#? 🧺 Space complexity -> O(1)

class Solution:
      def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
            if not root:
                  root = TreeNode(val)
                  return root

            if root.val > val:
                  # Insert in left sub tree...
                  root.left = self.insertIntoBST(root.left, val)

            else:
                  # insert in right sub tree...
                  root.right = self.insertIntoBST(root.right, val)

            return root
