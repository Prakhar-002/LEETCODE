#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2654

#? ⌚ Time complexity ➺ O(n^2 log m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from math import gcd

class Solution:
      def minOperations(self, nums: List[int]) -> int:
            n = len(nums)
            one_cnt = 0      # Count of elements equal to 1
            total_gcd = 0    # GCD of all elements

            # Iterate through nums to count how many ones there are and find overall gcd
            for x in nums:
                  if x == 1:
                        one_cnt += 1
                  total_gcd = gcd(total_gcd, x)

            # If there's at least one '1', minimal operations are n - count of ones
            if one_cnt > 0:
                  return n - one_cnt

            # If the gcd of all numbers is greater than 1, it's impossible to reduce to gcd 1
            if total_gcd > 1:
                  return -1

            # Minimum length of subarray with gcd 1 (initialized to max)
            min_len_gcd = n

            # Check all subarrays for gcd 1
            for l in range(n):
                  cur_gcd = 0
                  for r in range(l, n):
                        cur_gcd = gcd(cur_gcd, nums[r])
                        # Once gcd 1 found, update min length and stop for this l
                        if cur_gcd == 1:
                              min_len_gcd = min(min_len_gcd, r - l + 1)
                              break

            # Compute total operations needed:
            # min_len_gcd - 1 (to reduce subarray to 1) + n - 1 (reduce rest)
            return min_len_gcd - 1 + n - 1
