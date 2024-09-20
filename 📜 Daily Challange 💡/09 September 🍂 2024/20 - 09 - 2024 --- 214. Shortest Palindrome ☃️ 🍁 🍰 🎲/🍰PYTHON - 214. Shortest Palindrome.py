#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 214

#? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def shortestPalindrome(self, s: str) -> str:
            i = 0
            n = len(s)
            for j in range(n):
                  if s[i] == s[n-j-1]:
                        i += 1
            if i==n:
                  return s
            p = s[i:n][::-1]
            return p + self.shortestPalindrome(s[:i]) + s[i:]