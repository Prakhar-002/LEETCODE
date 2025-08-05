#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 701

#? ⌚ Time complexity -> O(n) 👉 Number of nodes

#? 🧺 Space complexity -> O(1) 

class Solution:
      def isBalanced(self, root: Optional[TreeNode]) -> bool:

            def checkBalance(root):
                  # if null return tree for balance and height of tree till that
                  if not root:
                        return [True, 0]

                  left, right = checkBalance(root.left), checkBalance(root.right)
                  # what ever we get from our left and right tree T\F 
                  balanced = (left[0] and 
                              right[0] and 
                              # checking the condition of binary search tree
                              abs(left[1] - right[1]) <= 1 ) 

                  # height of our tree will be self + max of left and right
                  return [balanced, 1 + max(left[1], right[1])]

            return checkBalance(root)[0]