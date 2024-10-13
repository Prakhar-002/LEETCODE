#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 632

#? ⌚ Time complexity ➺ O(n log k) 👉🏻  n = Total elements

#? 🧺 Space complexity ➺ O(k) 👉🏻 k = Number of Lists

import heapq

class Solution:
      def smallestRange(self, nums: List[List[int]]) -> List[int]:
            # Determines how many lists are in `nums`
            k = len(nums)
            # Initializes `left` and `right` with the first element of the first list
            left = right = nums[0][0]
            # Initializes an empty min-heap to manage the smallest elements across list
            min_heap = []

            # iterates over each list in `nums`
            for i in range(k):
                  # extract the array at every index
                  numsArr = nums[i]
                  # updates `left` to be the minimum values encountered so far
                  left = min(left, numsArr[0])
                  # updates `right` to be the maximum values encountered so far
                  right = max(right, numsArr[0])
                  # pushes a tuple into the min-heap 
                  # 1. containing the first element of each list, 
                  # 2. along with the index of the list (`i`) 
                  # 3. and the index of the element in that list (`0`)
                  heapq.heappush(min_heap, (numsArr[0], i, 0)) 

            # Initializes the smallest range with the current `left` and `right`
            smallestRange = [left, right]

            # Continues looping until a return condition is me
            while True:
                  # Pops the smallest element (tuple) from `min_heap`
                  # gives the smallest current number (`numsArr`), 
                  # its list index (`i`), and its element index (`idx`)
                  numsArr, i, idx = heapq.heappop(min_heap)
                  # Increments `idx` to move to the next element in the same list
                  idx += 1

                  # If `idx` is equal to the length of the list `nums[i]`
                  if idx == len(nums[i]):
                        # means one list is exhausted, and the current smallest range is returned
                        return smallestRange

                  # fetches the `next_val`, the next element from the same list
                  next_val = nums[i][idx]
                  # pushes it into the min-heap
                  heapq.heappush(
                        min_heap, (next_val, i, idx)
                  )

                  # Updates `right` to be the maximum of the current `right` and `next_val
                  right = max(right, next_val)
                  # `left` is updated to be the first value of the new heap, which is the smallest
                  left = min_heap[0][0]

                  # if the new range (`right - left`) is smaller than the current `smallestRange`
                  if right - left < smallestRange[1] - smallestRange[0]:
                        # updates `smallestRange` with new `left` and `right`
                        smallestRange = [left, right]