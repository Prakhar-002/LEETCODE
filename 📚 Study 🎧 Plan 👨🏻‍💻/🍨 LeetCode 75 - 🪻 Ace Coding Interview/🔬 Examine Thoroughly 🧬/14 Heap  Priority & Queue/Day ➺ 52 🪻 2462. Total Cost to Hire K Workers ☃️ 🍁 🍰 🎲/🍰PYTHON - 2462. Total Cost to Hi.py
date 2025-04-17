#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2462

#? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

import heapq

class Solution:
      def totalCost(self, costs: list[int], k: int, candidates: int) -> int:
            n = len(costs)

            # Min-heaps for both sides
            left_heap = []
            right_heap = []

            # Initialize total cost
            total_cost = 0

            left = 0                             # Start index for left side
            right = n - 1                        # Start index for right side

            # Push up to `candidates` elements from the left into left_heap
            while left <= right and len(left_heap) < candidates:
                  heapq.heappush(left_heap, costs[left])
                  left += 1

            # Push up to `candidates` elements from the right into right_heap
            while right >= left and len(right_heap) < candidates:
                  heapq.heappush(right_heap, costs[right])
                  right -= 1

            # Perform k selections
            for _ in range(k):
                  # Choose from left_heap if it's smaller or right_heap is empty
                  if not right_heap or (left_heap and left_heap[0] <= right_heap[0]):
                        total_cost += heapq.heappop(left_heap)
                        # Add next candidate from the left if any
                        if left <= right:
                              heapq.heappush(left_heap, costs[left])
                              left += 1
                  else:
                        total_cost += heapq.heappop(right_heap)
                        # Add next candidate from the right if any
                        if right >= left:
                              heapq.heappush(right_heap, costs[right])
                              right -= 1

            return total_cost  # Return the total minimum cost
