#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 26

#? ⌚ Time complexity -> O(n) 👉 length of given nums array

#? 🧺 Space complexity -> O(1) 

class Solution:
      def removeDuplicates(self, nums: List[int]) -> int:
            i = 0
            for j in range(1, len(nums)):
                  if nums[i] != nums[j]:
                        i += 1
                  nums[i] = nums[j]
            return i + 1
