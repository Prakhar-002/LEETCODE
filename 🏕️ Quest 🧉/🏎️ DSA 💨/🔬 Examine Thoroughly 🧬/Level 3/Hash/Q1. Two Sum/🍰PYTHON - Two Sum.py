
#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1

#? ⌚ Time complexity -> O(n^2) 👉 array length

#? 🧺 Space complexity -> O(1) 

class Solution:
      def twoSum(self, nums: List[int], target: int) -> List[int]:
            for i in range(len(nums)):
                  for j in range(i + 1, len(nums)):
                        if nums[i] + nums[j] == target:
                              return [i, j]
            return nums

# ---------------------------------------------

#? ⌚ Time complexity -> O(n) 👉 array length

#? 🧺 Space complexity -> O(n) 👉 map length

class Solution:
      def twoSum(self, nums: List[int], target: int) -> List[int]:
            mp = {}

            for i, num in enumerate(nums):
                  diff = target - num

                  if diff in mp:
                        return [i, mp[diff]]

                  mp[num] = i