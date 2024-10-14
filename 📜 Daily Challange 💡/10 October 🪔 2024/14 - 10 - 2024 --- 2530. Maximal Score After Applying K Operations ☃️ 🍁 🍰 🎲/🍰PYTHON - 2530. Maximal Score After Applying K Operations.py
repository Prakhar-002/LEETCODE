#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2530

#? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq
from math import ceil

class Solution:
      def maxKelements(self, nums, k):
            # A priority queue prioritizes larger numbers at the top
            pq = [-num for num in nums]
            heapq.heapify(pq)

            # `maxScore` that will keep track of the cumulative score
            maxScore = 0

            # loop that runs `k` times to perform operations on the top elements
            for _ in range(k):
                  # Removes and captures the maximum element from the priority queue
                  num = -heapq.heappop(pq)

                  # Adds the value of `num` to `maxScore`.
                  maxScore += num

                  # dividing by 3 but rounding up to the closest integer
                  heapq.heappush(pq, -ceil(num / 3))  # adds it back to the priority queue

            # returns the calculated maximum score
            return maxScore



