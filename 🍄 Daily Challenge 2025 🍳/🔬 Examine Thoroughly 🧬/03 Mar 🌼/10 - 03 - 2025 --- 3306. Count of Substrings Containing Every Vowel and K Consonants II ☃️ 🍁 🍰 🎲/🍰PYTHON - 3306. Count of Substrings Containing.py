#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3306

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1) 

from collections import defaultdict

class Solution:
      def countOfSubstrings(self, word: str, k: int) -> int:
            # Helper function to count substrings that contain all 5 vowels 
            # and at least `k` non-vowel characters
            def atLeastK(k):
                  vowels = defaultdict(int)  # Dictionary to count vowel occurrences
                  non_vowels = 0  # Counter for non-vowel characters
                  subStr = 0  # Counter for valid substrings
                  l = 0  # Left pointer for sliding window

                  # Iterate over the string with right pointer `r`
                  for r in range(len(word)):
                        # If current character is a vowel, increase its count
                        if word[r] in "aeiou":
                              vowels[word[r]] += 1
                        else:
                              non_vowels += 1  # Otherwise, increase non-vowel count

                        # Adjust the window to ensure we have all 5 vowels and at least `k` non-vowel chars
                        while len(vowels) == 5 and non_vowels >= k:
                              # Add substrings starting from `l` to the end of `word`
                              subStr += (len(word) - r)

                              # Shrink window from the left
                              if word[l] in "aeiou":
                                    vowels[word[l]] -= 1  # Reduce vowel count
                              else:
                                    non_vowels -= 1  # Reduce non-vowel count

                              # Remove vowel from dictionary if its count becomes zero
                              if vowels[word[l]] == 0:
                                    vowels.pop(word[l])

                              l += 1  # Move left pointer forward

                  return subStr

            # The number of substrings with exactly `k` non-vowels is:
            # Substrings with at least `k` non-vowels - Substrings with at least `k+1` non-vowels
            return atLeastK(k) - atLeastK(k + 1)
