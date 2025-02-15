#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2336

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class SmallestInfiniteSet:
      def __init__(self):
            self.pq = []  # Min-heap to store re-added numbers
            self.next_num = 1  # Start from 1
            self.in_pq = set()  # Set to track added-back numbers (for quick lookup)

      def popSmallest(self):
            if not self.pq:
                  self.next_num += 1
                  return self.next_num - 1  # Return previous value of next_num

            smallest = heapq.heappop(self.pq)  # Get smallest element from heap
            self.in_pq.remove(smallest)  # Remove from tracking set
            return smallest

      def addBack(self, num):
            if num < self.next_num and num not in self.in_pq:
                  heapq.heappush(self.pq, num)  # Insert into min-heap
                  self.in_pq.add(num)  # Track in set to prevent duplicates
