#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1957

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def makeFancyString(self, s: str) -> str:
            # Initialize 'fancy' with the first two characters of 's' since we need at least
            # two characters to check for three consecutive duplicates.
            fancy = s[:2]

            # Start iterating from the third character in the string.
            for i in range(2, len(s)):
                  ch = s[i] 

                  # Check if the last two characters in 'fancy' are the same as the current character.
                  # If they are, it means we would have three consecutive identical characters, 
                  # so we skip adding 'ch' to 'fancy'.
                  if fancy[-1] == ch and fancy[-2] == ch:
                        continue
                  else:
                        # Otherwise, add 'ch' to 'fancy' since it won't create three consecutive duplicates.
                        fancy += ch

            # Return the modified string that avoids three consecutive identical characters.
            return fancy