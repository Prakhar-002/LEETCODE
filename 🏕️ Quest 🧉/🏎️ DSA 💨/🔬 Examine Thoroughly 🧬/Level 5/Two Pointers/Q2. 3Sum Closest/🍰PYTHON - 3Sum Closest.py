#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q2

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def threeSumClosest(self, nums: List[int], target: int) -> int:
            nums.sort()                           # Sort the array to use two-pointer approach
            closest_sum = float("inf")            # Initialize closest sum as infinity

            # Iterate through each number, treat as first in triplet
            for i in range(len(nums) - 2):
                  l, r = i + 1, len(nums) - 1    # Two pointers starting after i and at end

                  while l < r:
                        current_sum = nums[i] + nums[l] + nums[r]

                        # Update closest_sum if current_sum is closer to target
                        if abs(current_sum - target) < abs(closest_sum - target):
                              closest_sum = current_sum

                        # Move pointers to approach target
                        if current_sum < target:
                              l += 1             # Need larger sum, move left pointer right
                        elif current_sum > target:
                              r -= 1             # Need smaller sum, move right pointer left
                        else:
                              # Exact match found; return immediately
                              return current_sum

            return closest_sum
