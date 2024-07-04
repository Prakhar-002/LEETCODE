#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 35

#? ⌚ Time complexity -> O(LogN) 

#? 🧺 Space complexity -> O(1)

class Solution:
      def searchInsert(self, nums: List[int], target: int) -> int:
            low = 0
            high = len(nums) - 1

            if target > nums[high]:
                  return len(nums)

            while low <= high:
                  mid = low + (high - low) // 2
                  if nums[mid] == target:
                        return mid

                  if target < nums[mid]:
                        high = mid - 1
                  else:
                        low = mid + 1

            return low
