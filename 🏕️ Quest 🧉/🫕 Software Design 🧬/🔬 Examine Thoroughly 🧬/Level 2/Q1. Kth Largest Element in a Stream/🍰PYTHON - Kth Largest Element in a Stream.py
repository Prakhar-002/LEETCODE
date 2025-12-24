#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 703

#? ⌚ Time complexity ➺ O(n Log k) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(K) 👉🏻 Min-Heap Size

import heapq

# The purpose of this class is to find 
# and maintain the k-th largest element in a stream of numbers
class KthLargest:

      # `k`: An integer that indicates the k-th largest elem to maintain
      # `nums`: A list from which the k-th largest elem needs to be maintained
      def __init__(self, k: int, nums: List[int]):
            #  initializes two instance variables
            self.minHeap, self.k = nums, k

            # transforms the list `self.minHeap` into a min-heap in-place
            # allows for efficient extraction of the smallest elements
            heapq.heapify(self.minHeap)

            #  loop ensures that the size of the heap does not exceed `k`
            while len(self.minHeap) > k:
                  # repeatedly removes the smallest elements 
                  # until the size of the heap is exactly `k``
                  heapq.heappop(self.minHeap)

      # `val`: An integer value that is to be added
      def add(self, val: int) -> int:
            # adds the new value `val` to the min-heap
            heapq.heappush(self.minHeap, val)

            # the size of the heap exceeds `k`, it removes the smallest element, 
            # ensuring the heap always maintains a size of `k`
            if len(self.minHeap) > self.k:
                  heapq.heappop(self.minHeap)

            # Returns the smallest element in the heap
            return self.minHeap[0]

#!`Efficiency` 🏗️

#?🔹 Creating the heap with `heapify` is O(n) in time complexity
#*🔹 Adding an element with `heappush` is O(log k)
#?🔹 Removing the smallest element with `heappop` is O(log k)
#*🔹 `add` method runs in O(log k)