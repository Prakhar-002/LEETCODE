#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3085

#? ⌚ Time complexity ➺ O(m ^ 2) 👉🏻  m = unique alphabet

#? 🧺 Space complexity ➺ O(m)

from collections import Counter 

class Solution:
      def minimumDeletions(self, word: str, k: int) -> int:
            # Step 1: Count frequency of each character in the word
            freq = Counter(word)   # Example: "aabbccc" -> {'a':2, 'b':2, 'c':3}

            res = len(word)        # Initialize the result with the maximum possible deletions

            # Step 2: Try keeping every possible frequency as a reference (target frequency)
            for target in freq.values():
                  deleted = 0      # Track number of deletions for this target frequency

                  for f in freq.values():
                        if f < target:
                              # If frequency is less than target, we must delete all of it
                              # since we cannot "add" characters, only remove
                              deleted += f
                        elif f > target + k:
                              # If frequency is more than allowed (target + k), reduce it
                              deleted += f - (target + k)

                  # Update result with the minimum deletions across all target frequencies
                  res = min(res, deleted)

            return res
