#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2558

#? ⌚ Time complexity ➺ O((n + k) Log n) 👉🏻  n = len(gifts)

#? 🧺 Space complexity ➺ O(n)

import heapq
import math

class Solution:
      def pickGifts(self, gifts, k):
            # Create a max-heap (invert values for max-heap simulation)
            pq = [-gift for gift in gifts]
            heapq.heapify(pq)

            # Perform k operations where the largest gift is replaced with its square root
            for _ in range(k):
                  largest = -heapq.heappop(pq)  # Get the largest value
                  heapq.heappush(pq, -math.floor(math.sqrt(largest)))

            # Calculate the sum of remaining gifts
            return -sum(pq)
