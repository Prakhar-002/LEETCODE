
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 108

#? ⌚ Time complexity -> O(n) 👉 length of nums array 

#? 🧺 Space complexity -> O(1) 


class Solution:
      def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:

            def treeMaker(left, right):
                  # base case
                  if left > right:
                        return None

                  # finding mid
                  mid = left + (right - left) // 2
                  # making root
                  root = TreeNode(nums[mid])
                  # call for left tree
                  root.left = treeMaker(left, mid - 1)
                  # call for right tree
                  root.right = treeMaker(mid + 1, right)
                  return root

            return treeMaker(0, len(nums) - 1)