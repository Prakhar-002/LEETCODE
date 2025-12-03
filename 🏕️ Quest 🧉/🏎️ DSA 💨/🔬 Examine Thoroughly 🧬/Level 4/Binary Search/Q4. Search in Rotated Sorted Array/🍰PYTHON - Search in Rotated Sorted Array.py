#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 33

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def search(self, nums: List[int], target: int) -> int:
            l = 0                                       # Initialize left pointer
            r = len(nums) - 1                           # Initialize right pointer

            while l <= r:                               # Perform binary search
                  m = l + (r - l) // 2                  # Calculate middle index

                  if nums[m] == target:                 # If target is found at mid
                        return m

                  elif nums[m] >= nums[l]:              # Left half is sorted
                        if nums[l] <= target <= nums[m]:     # Target lies in left half
                              r = m - 1
                        else:                                # Target lies in right half
                              l = m + 1

                  else:                                 # Right half is sorted
                        if nums[m] <= target <= nums[r]:     # Target lies in right half
                              l = m + 1
                        else:                                # Target lies in left half
                              r = m - 1

            return -1                                   # Target not found