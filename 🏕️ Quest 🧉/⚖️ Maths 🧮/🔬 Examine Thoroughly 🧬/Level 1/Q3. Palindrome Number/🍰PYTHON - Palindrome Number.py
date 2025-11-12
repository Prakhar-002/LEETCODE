#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L1 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Integer

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def isPalindrome(self, x: int) -> bool:
            s = str(x)  # Convert integer to string to easily check characters

            l, r = 0, len(s) - 1  # Initialize two pointers: left and right ends of string

            # Iterate while left pointer is less than right pointer
            while l < r:
                  if s[l] != s[r]:
                        return False  # If mismatch found, not a palindrome

                  l += 1  # Move left pointer rightwards
                  r -= 1  # Move right pointer leftwards

            return True  # All characters matched, so it is a palindrome
