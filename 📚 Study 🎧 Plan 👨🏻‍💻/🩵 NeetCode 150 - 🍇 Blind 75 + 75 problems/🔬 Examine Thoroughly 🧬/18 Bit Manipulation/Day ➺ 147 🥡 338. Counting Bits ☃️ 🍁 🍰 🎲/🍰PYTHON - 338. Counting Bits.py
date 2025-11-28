#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 338

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def countBits(self, n: int) -> List[int]:
            # dp[i] will store number of 1s in binary representation of i
            dp = [0] * (n + 1)

            # offset tracks highest power of 2 <= current i (e.g., 1,2,4,8,...)
            offset = 1

            # Fill dp array for indices 1 to n
            for i in range(1, n + 1):
                  # When i reaches next power of 2, update offset
                  # e.g., i=2 (10), offset=2; i=4 (100), offset=4
                  if offset * 2 == i:
                        offset = i 

                  # Key insight: bits in i = bits in (i - offset) + 1
                  # i - offset removes highest bit, dp[i-offset] has its bit count
                  # +1 accounts for the highest bit we just removed
                  dp[i] = 1 + dp[i - offset]

            return dp
