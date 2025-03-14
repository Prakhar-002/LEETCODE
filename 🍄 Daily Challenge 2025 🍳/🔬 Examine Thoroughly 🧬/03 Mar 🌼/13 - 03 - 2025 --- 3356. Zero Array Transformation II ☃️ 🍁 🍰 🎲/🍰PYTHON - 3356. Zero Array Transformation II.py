#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3356

# ? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)    👉🏻  m = len(queries)

from typing import List

class Solution:
      def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:
            n = len(nums)  # Length of the nums array

            total_sum = 0  # Tracks the cumulative sum of differences applied

            k = 0  # Number of operations needed

            diff_arr = [0] * (n + 1)  # Difference array to efficiently apply operations

            # Iterate through the nums array
            for i in range(n):
                  # Ensure that after applying operations, total_sum + diff_arr[i] reaches nums[i]
                  while total_sum + diff_arr[i] < nums[i]:
                        k += 1  # Increment operation count

                        # If more queries are required than available, return -1 (not possible)
                        if k > len(queries):
                              return -1

                        left, right, val = queries[k - 1]  # Get the next query operation

                        # If the range [left, right] covers index `i`, apply the difference array update
                        if right >= i:
                              diff_arr[max(left, i)] += val  # Increase values from max(left, i)
                              diff_arr[right + 1] -= val  # Decrease after right + 1

                  # Update total sum after applying the difference array
                  total_sum += diff_arr[i]

            return k  # Return the minimum number of queries required

