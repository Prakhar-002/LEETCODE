#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1207

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import Counter

class Solution:
      def uniqueOccurrences(self, arr: List[int]) -> bool:
            # Count the frequency of each element in the array
            arrCount = Counter(arr)  # Example: arr = [1, 2, 2, 1, 1, 3] -> Counter({1: 3, 2: 2, 3: 1})

            # Check if the number of unique keys (elements) matches the number of unique frequencies
            # len(arrCount.keys()) gives the number of unique elements in the array
            # len(set(arrCount.values())) gives the number of unique frequencies in the array
            return len(arrCount.keys()) == len(set(arrCount.values()))
