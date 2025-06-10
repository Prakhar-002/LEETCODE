#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 47

#? ⌚ Time complexity ➺ O(n × n!) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n × n!)

from collections import Counter
from typing import List

class Solution:
      def permuteUnique(self, nums: List[int]) -> List[List[int]]:
            res = []                        # Final list to store all unique permutations
            perm = []                       # Current permutation being built
            count = Counter(nums)           # Dictionary to store count of each number

            def dfs():
                  if len(perm) == len(nums):  # If permutation is complete
                        res.append(perm[:])   # Add a copy to result
                        return

                  for n in count:             # Iterate over all unique numbers
                        if count[n] > 0:      # If we still have occurrences left
                              perm.append(n)  # Choose the number
                              count[n] -= 1   # Decrement its count

                              dfs()           # Recurse

                              count[n] += 1   # Backtrack: restore the count
                              perm.pop()      # Remove the last number added

            dfs()
            return res
