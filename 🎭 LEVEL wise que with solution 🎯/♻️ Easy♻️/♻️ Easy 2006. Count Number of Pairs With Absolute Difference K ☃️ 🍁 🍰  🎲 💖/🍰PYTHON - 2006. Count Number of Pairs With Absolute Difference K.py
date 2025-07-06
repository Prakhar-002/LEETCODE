#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2006

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m)  ->  m = Unique(nums) 

from typing import Counter

class Solution:
      def countKDifference(self, nums: List[int], k: int) -> int:
            countMap = Counter(nums)    # Count frequency of each number in nums

            pairs = 0                   # Initialize number of valid pairs

            for num in countMap:
                  # Check if there's a number with value (num + k)
                  if countMap[num + k]:
                        # Add the product of frequencies to the pair count
                        pairs += countMap[num] * countMap[num + k]

            return pairs
