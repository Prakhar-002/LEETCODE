#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3066

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def minOperations(self, nums, k):
            # Using a min-heap to always process the smallest elements first
            minHeap = []

            # Adding all elements of nums array to the heap
            for n in nums:
                  heapq.heappush(minHeap, n) # Insert elements into the heap

            operations = 0  # Counter for the number of operations

            # Continue merging elements until the smallest element in the heap is at least k
            while minHeap[0] < k:
                  x = heapq.heappop(minHeap) # Remove the smallest element
                  y = heapq.heappop(minHeap) # Remove the second smallest element

                  # Merge the two elements using the given formula
                  heapq.heappush(minHeap, min(x, y) * 2 + max(x, y))

                  operations += 1 # Increment operation count

            return operations # Return the total number of operations
