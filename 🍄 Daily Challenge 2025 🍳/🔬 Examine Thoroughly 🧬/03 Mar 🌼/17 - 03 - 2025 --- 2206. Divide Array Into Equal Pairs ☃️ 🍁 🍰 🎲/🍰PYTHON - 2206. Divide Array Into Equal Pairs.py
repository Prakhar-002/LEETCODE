#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2206

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import Counter

class Solution:
      def divideArray(self, nums: List[int]) -> bool:
            # Create a frequency counter to count occurrences of each number
            frequency_map = Counter(nums)

            # Check if every number appears an even number of times
            for num in frequency_map:
                  if frequency_map[num] % 2:  # If count is odd, return False
                        return False

            return True  # If all counts are even, return True
