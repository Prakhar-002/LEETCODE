#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2208

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def halveArray(self, nums):
            # Max-Heap PriorityQueue to hold double values (largest first)
            pq = [-n for n in nums]  # Use negative values to simulate max-heap in heapq
            heapq.heapify(pq)  # Convert the list into a heap

            # Calculate the total sum of the array
            total_sum = sum(nums)

            operations = 0  # Counter to track the number of operations
            half_sum = total_sum / 2  # Target sum we need to reach

            # Keep halving the largest elements until the total sum is reduced to half
            while total_sum > half_sum:
                  largest = -heapq.heappop(pq)  # Remove the largest element (remember the negative sign)
                  total_sum -= largest  # Subtract the largest element from the total sum

                  reduced = largest / 2  # Halve the largest element
                  total_sum += reduced  # Add the reduced element back to the total sum

                  heapq.heappush(pq, -reduced)  # Insert the halved element back (again negate to keep max-heap)

                  operations += 1  # Increment the operation counter

            return operations  # Return the number of operations performed
