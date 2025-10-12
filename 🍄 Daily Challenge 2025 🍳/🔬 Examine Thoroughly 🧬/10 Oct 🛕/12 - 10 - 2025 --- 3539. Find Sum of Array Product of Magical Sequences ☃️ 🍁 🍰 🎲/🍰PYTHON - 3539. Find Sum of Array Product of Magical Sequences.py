#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3539

#? ⌚ Time complexity ➺ O(N ^ 2 * K * L *logN) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(N⋅K⋅L⋅logN)

MOD = 10 ** 9 + 7  # Modulo value for answers to prevent overflow, as required by the problem
from functools import lru_cache  # Least-recently-used cache to memoize recursive calls
import math
from typing import List

class Solution:
      def magicalSum(self, total_count: int, target_odd: int, numbers: List[int]) -> int:

            @lru_cache(None)  # Memoize the dfs state for efficiency
            def dfs(remaining, odd_needed, index, carry):
                  # If too many items taken, or negative odds needed, no valid way
                  # The extra carry from previous steps (bit count) can't fulfill the odd requirements
                  if remaining < 0 or odd_needed < 0 or remaining + carry.bit_count() < odd_needed:
                        return 0

                  # If we've used exactly all items, check whether the number of odds matches
                  if remaining == 0:
                        return 1 if odd_needed == carry.bit_count() else 0

                  # If we've gone through all numbers and still have items to choose, fail
                  if index >= len(numbers):
                        return 0

                  ans = 0  # Accumulate total ways for this state
                  for take in range(remaining + 1):
                        # Number of ways to choose 'take' items from 'remaining', times the power of the selected number
                        # math.comb(n, k) returns number of combinations to choose k items from n[1][2][3][4][5][6]
                        ways = math.comb(remaining, take) * pow(numbers[index], take, MOD) % MOD
                        # Update cumulative carry (number of bits that are set after including 'take')
                        new_carry = carry + take
                        # Recursively process rest: remove 'take', adjust required odds, move to next number, update carry
                        ans += ways * dfs(remaining - take, odd_needed - (new_carry % 2), index + 1, new_carry // 2)
                        ans %= MOD  # Keep result within bounds
                  return ans

            # Launch DFS with all items to pick, required number of odds, at first number, no carry
            return dfs(total_count, target_odd, 0, 0)
