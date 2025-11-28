#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q1

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def lastStoneWeight(self, stones: List[int]) -> int:
            # Initialize empty min-heap to simulate max-heap for stone weights
            # Using negative values since Python's heapq is min-heap by default
            heap = []

            # Push all stones into heap as negative values (largest stone = smallest negative)
            for stone in stones:
                  heapq.heappush(heap, -stone)

            # Continue smashing while at least 2 stones remain
            while len(heap) > 1:
                  # Extract heaviest stone (smallest negative = largest actual weight)
                  first = -heapq.heappop(heap)
                  
                  # Extract second heaviest stone
                  sec = -heapq.heappop(heap)

                  # If weights differ, new stone = |first - sec| gets pushed back
                  # (first >= sec always due to max-heap property)
                  if first != sec:
                        heapq.heappush(heap, -(first - sec))

            # Return 0 if heap empty, else weight of last remaining stone
            return 0 if not heap else -heap[0]
