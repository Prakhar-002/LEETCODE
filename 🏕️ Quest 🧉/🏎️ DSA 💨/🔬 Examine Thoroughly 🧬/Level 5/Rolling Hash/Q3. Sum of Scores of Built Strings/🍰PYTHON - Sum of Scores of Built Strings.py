#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2223

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def sumScores(self, s: str) -> int:
            n = len(s)

            # Z-array: z[i] = length of longest common prefix of s and s[i:]
            z = [0] * n

            # Current Z-box [l, r] where s[l:r+1] == s[0:r-l+1]
            l = 0
            r = 0

            # Compute Z values for all positions i > 0
            for i in range(1, n):
                  # Case 1: i lies inside current Z-box, reuse prefix information
                  if i <= r:
                        # Mirror index i-l inside prefix; cap by remaining length in box
                        z[i] = min(r - i + 1, z[i - l])

                  # Case 2: extend match starting from i beyond current Z-box
                  while i + z[i] < n and s[z[i]] == s[i + z[i]]:
                        z[i] += 1

                  # If we extended past r, update Z-box
                  if i + z[i] - 1 > r:
                        l = i
                        r = i + z[i] - 1

            # Total score:
            # - full string contributes n (it matches itself)
            # - every z[i] is the score of substring starting at i
            total = n
            for i in range(1, n):
                  total += z[i]

            return total
