#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2561

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket1 + bucket2)

#? 🧺 Space complexity ➺ O(n) 

from collections import Counter

class Solution:
      def minCost(self, basket1: List[int], basket2: List[int]) -> int:
            # Dictionary to count the difference in frequency of each item
            freq = Counter()

            # Initialize minimum element across both baskets
            m = float("inf")

            # Count items in basket1 and track the minimum item
            for b1 in basket1:
                  freq[b1] += 1
                  m = min(m, b1)

            # Subtract items in basket2 from the counter and update minimum item
            for b2 in basket2:
                  freq[b2] -= 1
                  m = min(m, b2)

            # List to store items that need to be swapped
            merge = []

            # Iterate through frequency differences
            for k, c in freq.items():
                  # If frequency is odd, it's impossible to make both baskets equal
                  if c % 2 != 0:
                        return -1

                  # Add half of the absolute difference of each item to the merge list
                  merge.extend([k] * (abs(c) // 2))

            # If no swaps needed, return 0
            if not merge:
                  return 0

            # Sort the merge list to process smallest items first (minimize cost)
            merge.sort()

            # Compute the minimum cost using either the item itself or two times the smallest element
            return sum(min(2 * m, x) for x in merge[: len(merge) // 2])
