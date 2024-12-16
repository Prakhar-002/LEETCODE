#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3264

#? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      def getFinalState(self, nums, k, multiplier):
            # Create a min-heap where each element is a tuple (value, index).
            # The heap ensures elements are sorted by value (smallest first).
            pq = [(nums[i], i) for i in range(len(nums))]
            heapq.heapify(pq)  # Convert the list into a min-heap.

            # Perform `k` operations to update the smallest element in the heap.
            while k > 0:
                  k -= 1  # Decrement the operation count.

                  # Pop the smallest element from the heap.
                  value, index = heapq.heappop(pq)

                  # Update the value by multiplying it with the `multiplier`.
                  updated_value = value * multiplier

                  # Push the updated element back into the heap.
                  heapq.heappush(pq, (updated_value, index))

                  # Update the original array with the new value at the corresponding index.
                  nums[index] = updated_value

            # Return the updated array after all operations.
            return nums

# !----------------------------------------------------------------------

# ? ⌚ Time complexity ➺ O(n * k) 👉🏻 n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

class Solution:
      def getFinalState(self, nums, k, multiplier):
            # Perform k iterations to transform the smallest element in the array
            while k > 0:
                  k -= 1  # Decrement the number of operations
                  
                  # Find the index of the smallest element in the array
                  min_index = 0
                  for i in range(1, len(nums)):
                        if nums[i] < nums[min_index]:
                              min_index = i  # Update min_index if a smaller element is found

                  # Multiply the smallest element by the multiplier
                  nums[min_index] *= multiplier

            # Return the modified array
            return nums
