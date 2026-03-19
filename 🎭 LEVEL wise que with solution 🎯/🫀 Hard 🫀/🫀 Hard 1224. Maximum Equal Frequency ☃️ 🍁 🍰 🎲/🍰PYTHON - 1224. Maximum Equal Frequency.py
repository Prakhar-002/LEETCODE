#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1224

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
import collections

class Solution:
      def maxEqualFreq(self, nums: List[int]) -> int:
            # cnt[num]  = how many times num has appeared so far
            cnt  = collections.defaultdict(int)
            # freq[f]   = how many distinct numbers currently have frequency f
            freq = collections.defaultdict(int)

            maxF = 0    # Highest frequency seen so far
            res  = 0    # Longest valid prefix length

            for i, num in enumerate(nums):

                  # ---------- Update count for current number ----------
                  cnt[num] += 1

                  # ---------- Update frequency map ----------
                  # Remove old frequency bucket
                  freq[cnt[num] - 1] -= 1
                  # Add to new frequency bucket
                  freq[cnt[num]] += 1

                  # ---------- Track max frequency ----------
                  maxF = max(maxF, cnt[num])

                  # ---------- Check 3 validity conditions ----------
                  # Condition 1: every number appears exactly maxF times
                  #              and removing one still leaves equal freqs
                  cond1 = maxF * freq[maxF] == i

                  # Condition 2: all but one number appear maxF-1 times,
                  #              and that one number appears maxF times (remove it once)
                  cond2 = (maxF - 1) * (freq[maxF - 1] + 1) == i

                  # Condition 3: every number appears exactly once (maxF == 1)
                  #              removing any one element keeps the rest valid
                  cond3 = maxF == 1

                  if cond1 or cond2 or cond3:
                        res = i + 1

            return res