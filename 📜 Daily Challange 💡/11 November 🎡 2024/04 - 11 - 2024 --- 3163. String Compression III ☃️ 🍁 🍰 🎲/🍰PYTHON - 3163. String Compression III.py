#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3163

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def compressedString(self, word):
            n = len(word)  # Length of the input string
            start = 0      # Starting index of the current sequence
            comp = []      # List for efficient string building

            for i in range(1, n + 1):
                  # Check if we've reached the end, found a different character, or max sequence length of 9
                  if i == n or word[i] != word[start] or (i - start) == 9:
                        comp.append(str(i - start))  # Append length of the current sequence
                        comp.append(word[start])     # Append the character itself
                        start = i                    # Update start for the next sequence

            return ''.join(comp)  # Join list elements to form the final compressed string
