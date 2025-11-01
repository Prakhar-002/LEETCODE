#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1899

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(triplets)

#? 🧺 Space complexity ➺ O(n) 

from typing import List

class Solution:
      def mergeTriplets(self, triplets: List[List[int]], target: List[int]) -> bool:
            # Set to track which positions in target have been matched by valid triplets
            good = set()

            # Iterate through each triplet in the input
            for t in triplets:
                  # Ignore triplets that have a number larger than the target at any position
                  if t[0] > target[0] or t[1] > target[1] or t[2] > target[2]:
                        continue

                  # For each position, if the triplet's value matches target's, mark the position as matched
                  for i, v in enumerate(target):
                        if v == t[i]:
                              good.add(i)

            # If all three positions matched (0,1,2), target can be formed by merging triplets
            return len(good) == 3
