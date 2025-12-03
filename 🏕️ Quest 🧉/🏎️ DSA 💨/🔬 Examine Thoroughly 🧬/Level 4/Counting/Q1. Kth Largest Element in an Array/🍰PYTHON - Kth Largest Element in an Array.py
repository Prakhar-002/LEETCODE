#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 215

#? ⌚ Time complexity ➺ O(k Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def findKthLargest(self, nums, k):
            # Convert nums into a max heap (negate values to simulate max heap)
            max_heap = [-n for n in nums]
            heapq.heapify(max_heap)

            # Extract k-1 elements from the max heap
            while k > 1:
                  heapq.heappop(max_heap)
                  k -= 1

            # Return the k-th largest element (negate back)
            return -heapq.heappop(max_heap)