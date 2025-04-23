#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1399

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def countLargestGroup(self, n):
            # Array to count how many numbers have each possible digit sum (1 to 36)
            digit_sum_count = [0] * 37       # We ignore index 0, max digit sum is 36 (for 9999 → 9+9+9+9)

            # Array to store precomputed digit sums for numbers from 0 to n
            digit_sum_cache = [0] * (n + 1)

            max_group_size = 0

            # Loop through each number from 1 to n
            for num in range(1, n + 1):
                  # Compute digit sum using previously stored result:
                  # last digit + digit sum of the rest
                  digit_sum = num % 10 + digit_sum_cache[num // 10]

                  # Store the digit sum for current number
                  digit_sum_cache[num] = digit_sum

                  # Increase count of this digit sum group
                  digit_sum_count[digit_sum] += 1

                  # Find the maximum group size (largest number of elements with same digit sum)
                  max_group_size = max(max_group_size, digit_sum_count[digit_sum])

            # Count how many groups have the maximum size
            largest_groups = digit_sum_count.count(max_group_size)

            return largest_groups
