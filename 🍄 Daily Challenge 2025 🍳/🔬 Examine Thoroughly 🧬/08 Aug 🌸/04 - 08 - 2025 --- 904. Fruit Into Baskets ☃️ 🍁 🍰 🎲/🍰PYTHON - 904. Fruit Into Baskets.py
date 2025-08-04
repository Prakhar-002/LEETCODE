#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 904

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(fruits)

#? 🧺 Space complexity ➺ O(1)

from collections import defaultdict
from typing import List

class Solution:
      def totalFruit(self, fruits: List[int]) -> int:
            bucket = defaultdict(int)         # Dictionary to store count of fruits in the current window
            l = 0                             # Left pointer of the sliding window
            max_fruits = 0                       # To track the maximum number of fruits collected

            for r in range(len(fruits)):      # Right pointer of the window
                  bucket[fruits[r]] += 1       # Add current fruit to the bucket

                  # If more than 2 types of fruits, shrink window from left
                  while len(bucket) > 2:
                        bucket[fruits[l]] -= 1
                        if bucket[fruits[l]] == 0:
                              del bucket[fruits[l]]  # Remove fruit type if count is 0
                        l += 1

                  # Update the result with the current window size
                  max_fruits = max(max_fruits, r - l + 1)

            return max_fruits
