#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2563

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
            # Helper function for binary search to find the right boundary
            def bin_search(l, r, target):
                  # Binary search to find the index where nums[index] >= target
                  while l <= r:
                        m = l + (r - l) // 2
                        if nums[m] >= target:
                              r = m - 1
                        else:
                              l = m + 1
                  return r  # Return the index where nums[index] < target

            # Sort the list to enable binary search for range
            nums.sort()

            pairs = 0  # Initialize pair count

            # Iterate through each element to find pairs within [lower, upper]
            for i in range(len(nums)):
                  low = lower - nums[i]  # Minimum value for a fair pair with nums[i]
                  up = upper - nums[i]   # Maximum value for a fair pair with nums[i]

                  # Count valid pairs in range by binary search for up+1 and low boundaries
                  pairs += bin_search(i + 1, len(nums) - 1, up + 1) - bin_search(i + 1, len(nums) - 1, low)

            # Return the total count of fair pairs
            return pairs  
