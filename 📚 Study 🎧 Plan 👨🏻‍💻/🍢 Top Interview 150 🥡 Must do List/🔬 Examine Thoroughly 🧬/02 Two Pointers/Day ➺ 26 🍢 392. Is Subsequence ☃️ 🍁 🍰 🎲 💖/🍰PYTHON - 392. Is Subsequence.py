#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 392 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(t)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isSubsequence(self, s: str, t: str) -> bool:
            # Initialize pointers for both strings, s and t
            i = j = 0

            # Iterate through the characters in s
            while i < len(s):
                  # Get the current character of s
                  ch = s[i]

                  # Move pointer j in t to find the matching character
                  while j < len(t) and ch != t[j]:
                        j += 1

                  # If j reaches the end of t without finding the character, break the loop
                  if j >= len(t):
                        break

                  # Move to the next character in s and increment j in t
                  i += 1
                  j += 1

            # If all characters of s are found in t in order, return True
            return i == len(s)
