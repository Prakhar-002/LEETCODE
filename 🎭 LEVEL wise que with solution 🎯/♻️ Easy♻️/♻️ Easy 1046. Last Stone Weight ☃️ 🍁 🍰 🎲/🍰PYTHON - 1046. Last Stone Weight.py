#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1046

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(Stones)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def lastStoneWeight(self, stones: List[int]) -> int:
            # Use a max-heap by negating the values
            stones = [-stone for stone in stones]
            heapq.heapify(stones)

            # Process until only one or zero stones are left
            while len(stones) > 1:
                  # Remove the two largest stones
                  y = -heapq.heappop(stones)
                  x = -heapq.heappop(stones)

                  # If they are not the same, add the difference back to the heap
                  if y != x:
                        heapq.heappush(stones, -(y - x))

            # Return the last stone weight, or 0 if no stones are left
            return -stones[0] if stones else 0