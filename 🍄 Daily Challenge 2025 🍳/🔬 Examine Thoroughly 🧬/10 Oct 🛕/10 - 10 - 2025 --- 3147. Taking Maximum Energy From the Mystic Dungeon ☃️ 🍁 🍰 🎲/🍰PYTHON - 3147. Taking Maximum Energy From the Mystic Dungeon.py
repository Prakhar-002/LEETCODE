#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3147

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(energy)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maximumEnergy(self, energy: List[int], k: int) -> int:
            # Initialize answer to negative infinity so any sum will be larger initially
            ans = float('-inf')
            n = len(energy)

            # Start from each of the last k indices as possible end points for collecting energy
            for i in range(n - k, n):
                  total = 0
                  j = i

                  # Move backwards from index j by steps of size k,
                  # accumulate energy sum for this sequence, and update the max
                  while j >= 0:
                        total += energy[j]
                        ans = max(ans, total)
                        j -= k  # jump back by k in each iteration

            # Return the maximum sum found over all these backward jumps
            return ans
