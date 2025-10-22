#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3003

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from functools import lru_cache

class Solution:
      def maxPartitionsAfterOperations(self, s: str, k: int) -> int:
            n = len(s)

            # DFS with memoization
            @lru_cache(None)
            def dfs(index: int, bitmask: int, can_change: int) -> int:
                  # Base case — reached end of string
                  if index == n:
                        return 1  # last partition always counts as one

                  # Bit representing the current character
                  char_bit = 1 << (ord(s[index]) - ord('a'))

                  # Continue without changing the character
                  next_mask = bitmask | char_bit
                  if bin(next_mask).count('1') > k:
                        # Too many distinct chars → start new partition
                        ans = dfs(index + 1, char_bit, can_change) + 1
                  else:
                        # Continue with current partition
                        ans = dfs(index + 1, next_mask, can_change)

                  # Try changing the current character (if allowed)
                  if can_change:
                        for c in range(26):
                              new_bit = 1 << c
                              next_mask = bitmask | new_bit
                              if bin(next_mask).count('1') > k:
                                    ans = max(ans, dfs(index + 1, new_bit, 0) + 1)
                              else:
                                    ans = max(ans, dfs(index + 1, next_mask, 0))
                  return ans

            # Start recursion from first character, empty mask, one change allowed
            return dfs(0, 0, 1)
