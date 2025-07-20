#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2163

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

import heapq
from typing import List 

class Solution:
      def minimumDifference(self, nums: List[int]) -> int:
            total_len = len(nums)              # Total length of the input list
            n = total_len // 3                 # One-third of the list

            # ---- LEFT PART PROCESSING ----
            # Initialize an array to store minimum sums of n smallest elements from the left
            left_sum = [0] * (n + 1)

            # Create a max heap using negative values to simulate max behavior
            left_heap = [-x for x in nums[:n]]
            heapq.heapify(left_heap)           # Max heap (via negative values)
            left_total = sum(nums[:n])         # Initial sum of the first n elements
            left_sum[0] = left_total           # Store in left_sum[0]

            # Process the middle n elements
            for i in range(n, 2 * n):
                  left_total += nums[i]                                # Add new number
                  heapq.heappush(left_heap, -nums[i])                  # Push negative value
                  left_total -= -heapq.heappop(left_heap)              # Remove the largest
                  left_sum[i - n + 1] = left_total                     # Store updated total

            # ---- RIGHT PART PROCESSING ----
            # Initialize part2 as the sum of the last n elements
            right_total = sum(nums[2 * n:])
            right_heap = nums[2 * n:]
            heapq.heapify(right_heap)          # Min heap by default
            answer = left_sum[n] - right_total # Initial answer

            # Process the middle n elements in reverse
            for i in range(2 * n - 1, n - 1, -1):
                  right_total += nums[i]                           # Add number
                  heapq.heappush(right_heap, nums[i])              # Push to min heap
                  right_total -= heapq.heappop(right_heap)         # Remove smallest
                  answer = min(answer, left_sum[i - n] - right_total)

            return answer
