#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1695

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def maximumUniqueSubarray(self, nums: List[int]) -> int:
            max_sum = 0                      # Stores the maximum sum of any unique subarray
            left = 0                         # Left pointer of the sliding window
            unique_set = set()              # Set to track unique elements in the window
            current_sum = 0                 # Sum of elements in the current window

            # Traverse the array using the right pointer
            for right in range(len(nums)):
                  current_sum += nums[right]         # Add the current element to window sum

                  # If a duplicate is found, shrink the window from the left
                  while nums[right] in unique_set:
                        current_sum -= nums[left]    # Subtract from sum
                        unique_set.remove(nums[left])  # Remove the duplicate from set
                        left += 1                     # Move left pointer

                  unique_set.add(nums[right])         # Add current element to the set
                  max_sum = max(max_sum, current_sum) # Update max sum if needed

            return max_sum   # Return the maximum sum of a unique subarray
