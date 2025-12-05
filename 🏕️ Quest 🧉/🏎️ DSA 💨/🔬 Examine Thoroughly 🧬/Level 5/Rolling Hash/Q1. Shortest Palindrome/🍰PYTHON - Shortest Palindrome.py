#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 214

#? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def shortestPalindrome(self, s: str) -> str:
            i = 0
            n = len(s)

            # Find the longest palindrome starting from the beginning of the string
            for j in range(n):
                  if s[i] == s[n - j - 1]:
                        i += 1

            # If the entire string is a palindrome, return it
            if i == n:
                  return s

            # Reverse the non-palindrome part of the string
            p = s[i:][::-1]

            # Recursively find the shortest palindrome for the remaining part
            # and concatenate with the reversed part and the original string
            return p + self.shortestPalindrome(s[:i]) + s[i:]