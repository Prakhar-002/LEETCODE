#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 238

#? ⌚ Time complexity -> O(n) 👉 length of nums 

#? 🧺 Space complexity -> O(1) 👉 according to followUp

class Solution:
      def productExceptSelf(self, nums: List[int]) -> List[int]:
            # making a output array for storing result
            res = [1] * len(nums)

            # for prefix multiply 
            prefix = 1

            for i in range(len(nums)):
                  res[i] = prefix
                  prefix *= nums[i]

            # for postfix multiply
            postfix = 1

            for i in reversed(range(len(nums))):
                  res[i] *= postfix
                  postfix *= nums[i]  

            return res