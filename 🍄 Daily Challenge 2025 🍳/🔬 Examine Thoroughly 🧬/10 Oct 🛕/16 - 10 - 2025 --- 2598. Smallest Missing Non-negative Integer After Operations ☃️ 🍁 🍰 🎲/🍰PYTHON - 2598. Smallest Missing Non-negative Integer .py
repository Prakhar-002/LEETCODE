#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2598

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m)  ->  m = values

from typing import List

class Solution:
      def findSmallestInteger(self, nums: List[int], value: int) -> int:
            # mp[i] stores how many numbers yield remainder i when divided by value
            mp = [0] * value

            # Count frequency of remainders (handling negatives)
            for x in nums:
                  v = ((x % value) + value) % value
                  mp[v] += 1

            mex = 0  # smallest missing integer candidate

            # Keep increasing mex while we can still form it using available remainders
            while mp[mex % value] > 0:
                  mp[mex % value] -= 1  # use one occurrence from that remainder bucket
                  mex += 1

            # When remainder group empty → mex cannot be formed
            return mex
