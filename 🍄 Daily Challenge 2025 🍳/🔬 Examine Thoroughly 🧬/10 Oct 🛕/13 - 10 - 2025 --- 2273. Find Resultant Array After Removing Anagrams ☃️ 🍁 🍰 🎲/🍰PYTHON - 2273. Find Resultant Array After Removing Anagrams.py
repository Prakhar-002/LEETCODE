#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2273

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(words)

#? 🧺 Space complexity ➺ O(n)

from typing import List 

class Solution:
      def removeAnagrams(self, words: List[str]) -> List[str]:
            # Start the result list with the first word (guaranteed to be kept)
            result = [words[0]]

            # Iterate from the second word to the end
            for i in range(1, len(words)):
                  # Compare current word and previous kept word by their sorted character lists
                  # (Anagrams have the same sorted character list)
                  if sorted(words[i - 1]) != sorted(words[i]):
                        # Not anagrams; add current word to result
                        result.append(words[i])

            # Return the filtered list with consecutive anagrams removed
            return result
