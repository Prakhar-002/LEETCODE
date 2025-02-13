#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1962

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq
import math

class Solution:
      def minStoneSum(self, piles, k):
            # Max-Heap using negative values to simulate a max-heap
            maxHeap = [-pile for pile in piles]
            heapq.heapify(maxHeap)  # Convert the list into a heap

            # Perform the operation k times: halving the largest pile
            for _ in range(k):
                  largest = -heapq.heappop(maxHeap)  # Pop the largest pile (negated back to positive)
                  heapq.heappush(maxHeap, -math.ceil(largest / 2))  # Halve the largest pile and push back (negate again)

            # Sum the remaining stones in the piles
            stones = -sum(maxHeap)  # Negate the sum since the values are negative in the heap
            return stones  # Return the total number of remaining stones
