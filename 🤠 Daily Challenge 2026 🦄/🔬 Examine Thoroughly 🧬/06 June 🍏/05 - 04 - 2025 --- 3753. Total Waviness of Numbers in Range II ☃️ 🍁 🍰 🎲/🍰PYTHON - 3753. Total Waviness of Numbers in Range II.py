#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3753

#? ⌚ Time complexity ➺ O(D^3 log(num2)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(D^2 log(num2)) 

class Solution:
      def totalWaviness(self, num1: int, num2: int) -> int:

            # Sum of waviness values for all numbers in [0, num]
            def solve(num: int) -> int:
                  if num < 100:
                        return 0

                  s = str(num)
                  n = len(s)

                  from functools import lru_cache

                  @lru_cache(None)
                  def dfs(pos: int, prev: int, curr: int, isLimit: bool, isLeading: bool):
                        # No more digits to place — valid number formed
                        if pos == n:
                              return 1, 0

                        cnt      = 0
                        waviness = 0
                        up       = int(s[pos]) if isLimit else 9

                        for digit in range(up + 1):
                              newLeading = isLeading and (digit == 0)
                              newPrev    = curr
                              # Use -1 as sentinel for leading zero positions
                              newCurr    = -1 if newLeading else digit

                              subCnt, subSum = dfs(
                                    pos + 1, newPrev, newCurr,
                                    isLimit and (digit == up), newLeading
                              )

                              # Only count waviness when both prev and curr are real digits
                              if not newLeading and prev >= 0 and curr >= 0:
                                    peak   = prev < curr and curr > digit
                                    valley = prev > curr and curr < digit
                                    # Each number passing through this state contributes +1 waviness at curr
                                    if peak or valley:
                                          waviness += subCnt

                              cnt      += subCnt
                              waviness += subSum

                        return cnt, waviness

                  _, totalSum = dfs(0, -1, -1, True, True)
                  return totalSum

            # Prefix difference to get sum over [num1, num2]
            return solve(num2) - solve(num1 - 1)