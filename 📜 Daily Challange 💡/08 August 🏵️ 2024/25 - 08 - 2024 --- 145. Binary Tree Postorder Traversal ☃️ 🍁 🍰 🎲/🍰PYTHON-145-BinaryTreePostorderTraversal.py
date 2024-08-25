#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 145

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def postOrderTraversal(self, root, postArr):
            #  (`root`) is `None`. If it is, the function returns immediately
            if root == None:
                  return 

            # `postOrderTraversal` on the left children of the current node.
            self.postOrderTraversal(root.left, postArr)
            # `postOrderTraversal` on the right children of the current node.
            self.postOrderTraversal(root.right, postArr)
            # current node's value is appended to the `postArr`
            postArr.append(root.val)

      def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
            # An empty list `postOrderArr` is created to store the result of the traversa
            postOrderArr = []

            #  calls the helper method `postOrderTraversal`
            self.postOrderTraversal(root, postOrderArr)

            # returns the `postOrderArr` which contains the values of the nodes in post-order
            return postOrderArr

