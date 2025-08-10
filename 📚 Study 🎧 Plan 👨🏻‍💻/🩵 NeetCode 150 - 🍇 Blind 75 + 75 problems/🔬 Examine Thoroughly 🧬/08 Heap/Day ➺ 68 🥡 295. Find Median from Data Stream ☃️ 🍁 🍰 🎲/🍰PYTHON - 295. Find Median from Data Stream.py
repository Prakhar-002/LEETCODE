#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 295

#? ⌚ Time complexity ➺ O(m * log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m)

import heapq

class MedianFinder:

      def __init__(self):
            # smallHeap will be a max-heap (Python's heapq is min-heap, so we store negatives)
            self.smallHeap = []  # stores smaller half (as negatives for max-heap)
            # largeHeap will be a normal min-heap
            self.largeHeap = []  # stores larger half

      def addNum(self, num: int) -> None:
            # Step 1: Push onto smallHeap (invert sign for max-heap behavior)
            heapq.heappush(self.smallHeap, -num)

            # Step 2: Move top of smallHeap to largeHeap if order is violated
            if (self.largeHeap and -self.smallHeap[0] > self.largeHeap[0]):
                  heapq.heappush(self.largeHeap, -heapq.heappop(self.smallHeap))

            # Step 3: Balance sizes if difference > 1
            if len(self.smallHeap) > len(self.largeHeap) + 1:
                  heapq.heappush(self.largeHeap, -heapq.heappop(self.smallHeap))
            elif len(self.largeHeap) > len(self.smallHeap) + 1:
                  heapq.heappush(self.smallHeap, -heapq.heappop(self.largeHeap))

      def findMedian(self) -> float:
            # Even number of elements → average of roots
            if len(self.smallHeap) == len(self.largeHeap):
                  return (-self.smallHeap[0] + self.largeHeap[0]) / 2
            # More elements in smallHeap → top is median
            elif len(self.smallHeap) > len(self.largeHeap):
                  return -self.smallHeap[0]
            else:
                  return self.largeHeap[0]
