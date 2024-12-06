#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 151

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def reverseWords(self, s: str) -> str:
            # Add a space at the beginning of the string to simplify boundary handling
            s = ' ' + s 

            # Initialize pointers for tracking words in the string
            i = j = len(s) - 1

            # Initialize an empty string to store the result
            res = ''

            # Iterate through the string to extract words in reverse order
            while (i > 0 and j > 0):
                  # Move the pointer `i` to skip trailing spaces
                  while i > 0 and s[i] == ' ':
                        i -= 1

                  # Set `j` to the current position of `i` (end of a word)
                  j = i

                  # Move the pointer `i` to find the start of the word
                  while i > 0 and s[i] != ' ':
                        i -= 1

                  # Add the word to the result, followed by a space
                  res += s[i + 1 : j + 1] + ' '

            # Remove the trailing space and return the result
            return res.strip()