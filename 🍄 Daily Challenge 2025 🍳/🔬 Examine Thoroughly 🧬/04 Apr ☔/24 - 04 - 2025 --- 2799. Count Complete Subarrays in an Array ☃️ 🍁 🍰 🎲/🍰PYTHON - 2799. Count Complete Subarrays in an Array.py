#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2799

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

from collections import defaultdict

class Solution:
      def countCompleteSubarrays(self, nums: List[int]) -> int:
            k = len(set(nums))               # Total number of unique elements in the array
            n = len(nums)                    # Length of the input array
            freq = defaultdict(int)          # Dictionary to track the frequency of elements in current window
            left = 0                         # Left pointer for sliding window
            compSubArr = 0                        # Variable to store the final answer (total complete subarrays)

            for right in range(n):           # Iterate with right pointer from 0 to n - 1
                  freq[nums[right]] += 1     # Include the current element in the window

                  while len(freq) == k:      # Check if the current window contains all unique elements
                        compSubArr += n - right   # All subarrays starting from left to end (right to n-1) are valid
                        freq[nums[left]] -= 1  # Try to shrink the window from the left

                        if freq[nums[left]] == 0:  # Remove the element from map if its count becomes 0
                              del freq[nums[left]]

                        left += 1            # Move the left pointer forward

            return compSubArr                     # Return total count of complete subarrays

