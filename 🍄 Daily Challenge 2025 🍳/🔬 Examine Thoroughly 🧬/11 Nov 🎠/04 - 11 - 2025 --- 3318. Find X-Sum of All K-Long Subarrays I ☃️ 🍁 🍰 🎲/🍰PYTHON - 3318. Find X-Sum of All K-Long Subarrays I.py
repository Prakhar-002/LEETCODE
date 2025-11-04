#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3318

#? ⌚ Time complexity ➺ O(k log k * (n - k + 1)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n - k + 1)

from typing import List
from collections import Counter

class Solution:
      def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
            res = []  # Result list to store sums for each subarray window of size k

            # Iterate over all contiguous subarrays of size k
            for i in range(len(nums) - k + 1):
                  # Count frequency of each number in the current window
                  count = Counter(nums[i:i + k])

                  # If number of distinct elements <= x, sum all elements in the window
                  if len(count) <= x:
                        res.append(sum(nums[i: i + k]))
                  else:
                        # Else, select the top x elements by their frequency (and number if tie)
                        pairs = list(count.items())
                        # Sort descending by frequency, then by value for tie-breaking
                        pairs.sort(key=lambda p: (p[1], p[0]), reverse=True)

                        cur_sum = 0
                        # Sum the values multiplied by their count for top x elements
                        for num, cnt in pairs[:x]:
                              cur_sum += num * cnt
                        res.append(cur_sum)

            return res
