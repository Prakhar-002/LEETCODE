#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 383

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(ransomNote)

#? 🧺 Space complexity ➺ O(1)

from collections import Counter

class Solution:
      def canConstruct(self, ransomNote: str, magazine: str) -> bool:
            ransomCounter = Counter(ransomNote)    # Count letters in ransom note
            magazineCounter = Counter(magazine)    # Count letters in magazine

            # Check if magazine has enough of every character in ransom note
            return not ransomCounter - magazineCounter
