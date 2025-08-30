#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 647

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countSubstrings(self, s: str) -> int:
            res = 0  # Initialize count of palindromic substrings

            # Iterate over each character in the string, treating it as a center
            for i in range(len(s)):
                  # Check for odd-length palindromes centered at i
                  l, r = i, i
                  while l >= 0 and r < len(s) and s[l] == s[r]:
                        res += 1  # Found a palindrome substring, increment count
                        l -= 1    # Expand left pointer outward
                        r += 1    # Expand right pointer outward

                  # Check for even-length palindromes centered between i and i+1
                  l, r = i, i + 1
                  while l >= 0 and r < len(s) and s[l] == s[r]:
                        res += 1  # Found a palindrome substring of even length
                        l -= 1    # Expand left pointer outward
                        r += 1    # Expand right pointer outward

            return res  # Return total count of palindromic substrings
