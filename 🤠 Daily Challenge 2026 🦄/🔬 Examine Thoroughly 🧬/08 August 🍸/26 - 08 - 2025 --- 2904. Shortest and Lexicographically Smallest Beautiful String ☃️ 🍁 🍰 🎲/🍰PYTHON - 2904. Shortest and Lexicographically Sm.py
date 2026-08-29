#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2904

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def shortestBeautifulSubstring(self, s: str, k: int) -> str:
            n = len(s)
            l = 0
            ones = 0
            res = ""

            for r in range(n):
                  # Count '1's in the current sliding window
                  if s[r] == '1':
                        ones += 1

                  # Shrink from the left if:
                  # 1. We exceed k '1's
                  # 2. Leading character is '0' (stripping unnecessary zeros)
                  while l <= r and (ones > k or s[l] == '0'):
                        if s[l] == '1':
                              ones -= 1
                        l += 1

                  # When the window contains exactly k '1's, evaluate candidate substring
                  if ones == k:
                        temp = s[l:r + 1]

                        # Update result if:
                        # 1. No result found yet
                        # 2. Candidate is shorter
                        # 3. Candidate has the same length but is lexicographically smaller
                        if (not res or
                              len(temp) < len(res) or
                              (len(temp) == len(res) and temp < res)):
                              res = temp

            return res