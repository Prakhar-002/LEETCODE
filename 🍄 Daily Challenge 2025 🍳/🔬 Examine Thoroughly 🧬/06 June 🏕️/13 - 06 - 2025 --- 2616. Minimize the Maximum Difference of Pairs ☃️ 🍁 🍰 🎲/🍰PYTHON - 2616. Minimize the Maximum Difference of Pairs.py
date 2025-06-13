#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2616

#? ⌚ Time complexity ➺ O(n*logV+ n*log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minimizeMax(self, nums: List[int], p: int) -> int:
            nums.sort()  # Sort the input array to easily find the smallest pair differences
            n = len(nums)

            # Helper function to count how many valid pairs can be formed
            # where the difference between pair elements is <= threshold
            def countValidPairs(threshold):
                  index, count = 0, 0
                  while index < n - 1:
                        # If a valid pair is found (difference is small enough)
                        if nums[index + 1] - nums[index] <= threshold:
                              count += 1      # Count this pair
                              index += 1      # Skip the paired element
                        index += 1           # Move to the next element
                  return count

            # Initialize binary search boundaries
            left, right = 0, nums[-1] - nums[0]  # The maximum possible difference

            # Binary search to find the minimum threshold
            while left < right:
                  mid = left + (right - left) // 2  # Mid-point as the threshold to test

                  # If we can form at least p valid pairs with this threshold
                  if countValidPairs(mid) >= p:
                        right = mid  # Try a smaller threshold
                  else:
                        left = mid + 1  # Need a bigger threshold to form enough pairs

            return left  # The minimum possible maximum difference among pairs
