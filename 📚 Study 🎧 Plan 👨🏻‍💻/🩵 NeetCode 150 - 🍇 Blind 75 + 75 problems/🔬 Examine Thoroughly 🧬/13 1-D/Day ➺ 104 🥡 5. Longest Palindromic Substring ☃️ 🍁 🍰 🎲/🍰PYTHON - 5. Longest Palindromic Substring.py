#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 5

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestPalindrome(self, s: str) -> str:
            # Variable to record the starting index of the longest palindrome found
            resIdx = 0
            # Variable to record the length of the longest palindrome found
            resLen = 0

            # Iterate over each character in the string as a potential palindrome center
            for i in range(len(s)):
                  # Check for odd-length palindromes with single center at i
                  l, r = i, i

                  # Expand outwards while the characters match and indices are valid
                  while l >= 0 and r < len(s) and s[l] == s[r]:
                        # If current palindrome length larger than stored max, update result
                        if (r - l + 1) > resLen:
                              resIdx = l
                              resLen = r - l + 1
                        l -= 1  # Move left pointer outward
                        r += 1  # Move right pointer outward

                  # Check for even-length palindromes with center between i and i+1
                  l, r = i, i + 1

                  # Expand outwards while characters match and indices valid
                  while l >= 0 and r < len(s) and s[l] == s[r]:
                        # Update longest palindrome if current one is longer
                        if (r - l + 1) > resLen:
                              resIdx = l
                              resLen = r - l + 1
                        l -= 1  # Expand to the left
                        r += 1  # Expand to the right

            # Return the longest palindromic substring found using starting index and length
            return s[resIdx : resIdx + resLen]
