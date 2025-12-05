#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3432

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countPartitions(self, nums: List[int]) -> int:
            total_sum = sum(nums)  # Total sum of entire array

            # If total sum is odd, cannot partition into two equal sums
            if total_sum % 2:
                  return 0

            left_sum = 0      # Running sum of left partition (prefix)
            count = 0         # Count of valid partition points

            # Check each possible prefix as left partition
            for n in nums:
                  left_sum += n                    # Add to left partition
                  right_sum = total_sum - left_sum # Right partition sum (suffix)
                  
                  # Condition checks if |left - right| is even
                  # This is ALWAYS TRUE for integers since total_sum is even!
                  # (left - right = 2*left - total_sum, total_sum even → always even)
                  if abs(right_sum - left_sum) % 2 == 0:
                        count += 1

            # Subtract 1 to exclude the full array case
            # Full array: left_sum = total_sum, right_sum = 0 → invalid partition
            return count - 1
