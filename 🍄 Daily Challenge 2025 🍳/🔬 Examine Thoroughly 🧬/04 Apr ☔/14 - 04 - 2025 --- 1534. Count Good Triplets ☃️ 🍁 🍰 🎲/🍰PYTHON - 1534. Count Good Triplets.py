#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1534

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(1) 

from typing import List
from itertools import combinations

class Solution:
      def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
            # Return the count of triplets (v, u, w) from all possible 3-element combinations of arr
            return sum(
                  abs(v - u) <= a and abs(u - w) <= b and abs(v - w) <= c  # Check all 3 conditions
                  for v, u, w in combinations(arr, 3)  # Iterate through all unique triplets from arr
            )
