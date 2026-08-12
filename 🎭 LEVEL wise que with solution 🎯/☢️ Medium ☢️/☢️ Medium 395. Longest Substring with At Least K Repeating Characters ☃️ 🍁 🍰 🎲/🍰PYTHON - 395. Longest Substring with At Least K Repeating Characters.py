#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 395

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestSubstring(self, s: str, k: int) -> int:
            ans = 0

            # Iterate over target number of unique characters allowed in the substring (1 to 26)
            for unique in range(1, 27):
                  freq = [0] * 26
                  l = 0
                  uniqueCount = 0
                  validCount = 0

                  for r in range(len(s)):
                        idx = ord(s[r]) - ord('a')

                        # Track unique characters in current window
                        if freq[idx] == 0:
                              uniqueCount += 1

                        freq[idx] += 1

                        # Track characters meeting frequency threshold k
                        if freq[idx] == k:
                              validCount += 1

                        # Shrink window from left if unique character count exceeds target
                        while uniqueCount > unique:
                              left_idx = ord(s[l]) - ord('a')

                              if freq[left_idx] == k:
                                    validCount -= 1

                              freq[left_idx] -= 1

                              if freq[left_idx] == 0:
                                    uniqueCount -= 1

                              l += 1

                        # Update answer if all unique characters in window appear at least k times
                        if uniqueCount == unique and validCount == unique:
                              ans = max(ans, r - l + 1)

            return ans