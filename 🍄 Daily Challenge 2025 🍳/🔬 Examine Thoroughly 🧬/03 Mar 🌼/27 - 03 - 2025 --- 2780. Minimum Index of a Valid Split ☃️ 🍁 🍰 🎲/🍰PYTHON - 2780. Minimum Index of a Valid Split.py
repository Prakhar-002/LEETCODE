#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2780

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

#* Boyer-Moore Voting Algorithm 

from typing import List

class Solution:
      def minimumIndex(self, nums: List[int]) -> int:
            # Step 1: Find the dominant element using Boyer-Moore Voting Algorithm
            majority = 0  # Stores the potential dominant element
            count = 0      # Counter to track occurrences

            for n in nums:
                  if count == 0:  # If count reaches zero, set a new majority candidate
                        majority = n
                  if n == majority:
                        count += 1  # Increment count if same as current majority
                  else:
                        count -= 1  # Decrement count if different

            # Step 2: Count occurrences of the dominant element
            left_cnt = 0              # Frequency of `majority` in left partition
            right_cnt = nums.count(majority)  # Total occurrences of `majority` in the entire list

            # Step 3: Iterate through the array to find the minimum valid index
            for i, n in enumerate(nums):
                  # Move `n` from the right partition to the left partition
                  if n == majority:
                        left_cnt += 1
                        right_cnt -= 1

                  # Compute partition sizes
                  left_len = i + 1               # Length of left partition
                  right_len = len(nums) - i - 1  # Length of right partition

                  # Check if `majority` is dominant in both partitions
                  if 2 * left_cnt > left_len and 2 * right_cnt > right_len:
                        return i  # Return the first valid index

            return -1  # Return -1 if no valid index is found

#!-------------------------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict, Counter
from typing import List

class Solution:
      def minimumIndex(self, nums: List[int]) -> int:
            # Dictionary to store frequency of elements in the left partition
            left = defaultdict(int)

            # Counter to store frequency of elements in the right partition
            right = Counter(nums)

            # Iterate through the array to find the minimum valid index
            for i, n in enumerate(nums):
                  # Move the current element `n` from the right partition to the left partition
                  left[n] += 1
                  right[n] -= 1

                  # Compute sizes of left and right partitions
                  left_len = i + 1
                  right_len = len(nums) - i - 1

                  # Check if `n` is dominant in both partitions
                  if 2 * left[n] > left_len and 2 * right[n] > right_len:
                        return i  # Return the valid index

            return -1  # Return -1 if no valid index is found
