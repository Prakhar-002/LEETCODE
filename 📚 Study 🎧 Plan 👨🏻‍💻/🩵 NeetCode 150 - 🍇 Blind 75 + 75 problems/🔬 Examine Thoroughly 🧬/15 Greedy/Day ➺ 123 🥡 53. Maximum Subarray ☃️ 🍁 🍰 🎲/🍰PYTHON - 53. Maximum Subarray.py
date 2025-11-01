#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 53

#? ⌚ Time complexity -> O(n) 👉 For length 

#? 🧺 Space complexity -> O(1) 

class Solution:
      def maxSubArray(self, nums: List[int]) -> int:
            cur_sum = 0
            max_sum = float('-inf') 

            for num in nums:
                  # if less than 0 make it's own train
                  # else it will a part of existing train
                  cur_sum = num if cur_sum < 0 else cur_sum + num

                  # take the max
                  max_sum = max(max_sum, cur_sum)

            return max_sum