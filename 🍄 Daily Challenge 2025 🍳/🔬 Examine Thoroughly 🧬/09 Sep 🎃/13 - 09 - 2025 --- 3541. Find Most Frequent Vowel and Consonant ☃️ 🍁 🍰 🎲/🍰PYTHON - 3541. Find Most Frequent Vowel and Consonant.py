#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3541

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

from collections import Counter 

class Solution:
      def maxFreqSum(self, s: str) -> int:
            freq = Counter(s)                  # Count frequency of each character in s

            # Find the maximum frequency among all vowels
            vowels = max(freq["a"], freq["e"], freq["i"], freq["o"], freq["u"])

            # Remove vowel counts since we've already selected max among them
            freq["a"] = freq["e"] = freq["i"] = freq["o"] = freq["u"] = 0

            # Find the max frequency among the remaining characters (consonants and others)
            # Add it to the previously computed max-vowel frequency for the total sum
            return max(freq.values()) + vowels
