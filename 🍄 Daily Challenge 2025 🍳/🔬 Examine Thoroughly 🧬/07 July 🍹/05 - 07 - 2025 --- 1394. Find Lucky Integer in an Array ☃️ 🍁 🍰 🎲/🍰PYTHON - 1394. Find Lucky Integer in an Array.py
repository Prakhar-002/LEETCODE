#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1394

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(n)

from typing import Counter

class Solution:
      def findLucky(self, arr: List[int]) -> int:
            # Count frequency of each number in the array
            freq = Counter(arr)

            res = -1  # Initialize result to -1 (default if no lucky number)

            # Iterate through the frequency map
            for key, val in freq.items():
                  # A lucky number appears 'key' times and has value == frequency
                  if key == val:
                        res = max(res, key)  # Track the largest lucky number

            return res  # Return the maximum lucky number or -1 if none
