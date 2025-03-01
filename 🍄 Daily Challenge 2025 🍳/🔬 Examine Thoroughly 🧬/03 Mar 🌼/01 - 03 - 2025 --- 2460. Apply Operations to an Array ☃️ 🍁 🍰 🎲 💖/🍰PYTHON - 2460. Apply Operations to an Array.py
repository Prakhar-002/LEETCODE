#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2460

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def applyOperations(self, nums: List[int]) -> List[int]:
            N = len(nums)   # Total number of elements in the array

            # 'w' (write pointer) tracks the position where the next non-zero element should go
            w = 0

            # First loop processes elements from index 0 to N-2 (pairs are nums[i] and nums[i+1])
            for r in range(N - 1):      # 'r' (read pointer) scans every element except the last one

                  # Check if current element and next element are equal
                  # If they are equal, we merge them (double the value of nums[r])
                  if nums[r] == nums[r + 1]:
                        nums[r] *= 2       # Merge - double the value of nums[r]
                        nums[r + 1] = 0     # Set the next element to zero after merge

                  # After merging (or if no merge happened), shift non-zero numbers to the left
                  # nums[w] is where the next valid non-zero number should be placed
                  if nums[r] != 0:
                        nums[w] = nums[r]   # Move current number to 'w' position (compaction)
                        if w != r:
                              nums[r] = 0    # Clear the old position if element moved
                        w += 1               # Move write pointer ahead to next empty spot

            # After the loop, we need to check the last element (nums[N-1]), since the loop
            # only covers pairs and stops at N-2.
            if nums[N - 1] != 0:
                  nums[w] = nums[N - 1]     # Place last non-zero element at correct spot
                  if w != N - 1:
                        nums[N - 1] = 0      # Clear original spot if moved
                  w += 1

            # Final array is now processed — merged & compacted
            return nums
