#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 701

#? ⌚ Time complexity -> O(n) 👉 given

#? 🧺 Space complexity -> O(1)

class Solution:
      def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
            """
            Insert value into BST while maintaining BST property.
            Recursive approach: traverse like BST search, insert at leaf.
            """
            # Base case: empty tree → create new node
            if not root:
                  root = TreeNode(val)
                  return root

            # BST property: left < root < right
            if root.val > val:
                  # val belongs in left subtree (smaller than root)
                  root.left = self.insertIntoBST(root.left, val)
            else:
                  # val belongs in right subtree (larger/equal to root)
                  root.right = self.insertIntoBST(root.right, val)

            # Return current node (with potentially updated child)
            return root
