#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3442

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

from collections import Counter

class Solution:
      def maxDifference(self, s: str) -> int:
            cnt = Counter(s)                    # Count frequency of each character in the string

            evenFreq = float("inf")             # Initialize minimum even frequency to +infinity
            oddFreq = float("-inf")             # Initialize maximum odd frequency to -infinity

            for value in cnt.values():          # Loop through all character frequencies
                  if value % 2 == 0:            # If frequency is even
                        evenFreq = min(evenFreq, value)  # Track minimum even frequency
                  else:                         # If frequency is odd
                        oddFreq = max(oddFreq, value)    # Track maximum odd frequency

            # Return the difference (max odd - min even) as integer
            return int(oddFreq - evenFreq)
