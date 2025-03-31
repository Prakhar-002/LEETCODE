#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2551

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def putMarbles(self, weights: List[int], k: int) -> int:
            n = len(weights)
            
            # Step 1: Compute pair weights (sum of adjacent weights)
            pairWeights = [weights[i] + weights[i + 1] for i in range(n - 1)]

            # Step 2: Sort the pair weights in ascending order
            pairWeights.sort()

            score = 0  # Variable to store the final result

            # Step 3: Compute the difference between the largest (k-1) sums and smallest (k-1) sums
            for i in range(k - 1):
                  score += pairWeights[n - 2 - i] - pairWeights[i]

            return score
