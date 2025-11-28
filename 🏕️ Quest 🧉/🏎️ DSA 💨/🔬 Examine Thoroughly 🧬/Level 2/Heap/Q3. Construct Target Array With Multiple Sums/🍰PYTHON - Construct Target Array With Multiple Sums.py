#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q3

# ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def isPossible(self, target):
            total = sum(target)                    # Calculate total sum of all target values initially

            heap = [-val for val in target]        # Negate values to create max-heap effect with min-heap
            heapq.heapify(heap)                    # Transform list into heap structure (O(n) time)

            while True:                            # Continue processing until success/failure determined
                  num = -heapq.heappop(heap)       # Extract largest by popping smallest negative
                  total -= num                     # Update sum of all other remaining values

                  if num == 1 or total == 1:       # Base case: can form valid groups with 1s
                        return True

                  if (num < total or               # Largest can't be smaller than sum of rest
                        total == 0 or              # No remaining values to work with
                        num % total == 0):         # No remainder possible (exact multiple)
                        return False

                  remainder = num % total           # Compute remainder after division by rest sum
                  total += remainder                # Add remainder back to total remaining sum
                  heapq.heappush(heap, -remainder)  # Push negated remainder back to heap

            return False