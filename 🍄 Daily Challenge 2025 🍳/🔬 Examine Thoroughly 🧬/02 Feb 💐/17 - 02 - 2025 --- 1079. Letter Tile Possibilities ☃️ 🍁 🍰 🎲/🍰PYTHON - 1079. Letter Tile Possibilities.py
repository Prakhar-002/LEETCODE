#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1079

#? ⌚ Time complexity ➺ O(n ^ n) 👉🏻  n = Unique char in s

#? 🧺 Space complexity ➺ O(n)

from collections import Counter

class Solution:
      def numTilePossibilities(self, tiles: str) -> int:
            # Count occurrences of each character in the string
            char_count = Counter(tiles)

            def backtrack():
                  letters = 0  # Tracks the number of unique sequences

                  # Iterate through all characters in the counted dictionary
                  for ch in char_count:
                        if char_count[ch] > 0:  # If there are tiles left of this type
                              char_count[ch] -= 1  # Use one tile
                              letters += 1  # Count the current sequence
                              letters += backtrack()  # Recursively explore further
                              char_count[ch] += 1  # Backtrack (restore the tile count)

                  return letters  # Return total sequences found

            return backtrack()  # Start backtracking and return final result
