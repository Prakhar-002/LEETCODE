#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 125

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Function to check if a given string is a palindrome
      def isPalindrome(self, s: str) -> bool:
            # Initialize two pointers: left (l) at the start, right (r) at the end of the string
            l, r = 0, len(s) - 1

            # Iterate until the two pointers meet
            while l < r:
                  # Move the left pointer forward if it's not an alphanumeric character
                  while l < r and not self.alphaNum(s[l]):
                        l += 1
                  # Move the right pointer backward if it's not an alphanumeric character
                  while r > l and not self.alphaNum(s[r]):
                        r -= 1
                  # Compare the characters (ignoring case); return False if they don't match
                  if s[l].lower() != s[r].lower():
                        return False
                  # Move both pointers towards the center
                  l, r = l + 1, r - 1

            # If all checks pass, return True
            return True

      # Function to check if a character is alphanumeric (letter or digit)
      def alphaNum(self, ch):
            # Check if character is an uppercase letter, lowercase letter, or digit
            return (ord('A') <= ord(ch) <= ord('Z') or
                  ord('a') <= ord(ch) <= ord('z') or
                  ord('0') <= ord(ch) <= ord('9')
                  )
