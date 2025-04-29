#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2962

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSubarrays(self, nums: List[int], k: int) -> int:

            max_elem = max(nums)    # Find the maximum element in the array
            n = len(nums)          # Length of the array

            cnt = 0                # Counter for number of max elements in the current window
            left = 0               # Left pointer for sliding window
            sub_arr = 0                # To store the final answer (count of valid subarrays)

            for right in range(n):               # Iterate with the right pointer

                  if nums[right] == max_elem:     # If current element is the maximum
                        cnt += 1                 # Increase the count of max elements

                  # Shrink the window until number of max elements becomes less than k
                  while left <= right and cnt == k:
                        sub_arr += n - right         # All subarrays starting at 'left' and ending at or after 'right' are valid

                        if nums[left] == max_elem:
                              cnt -= 1           # If left element was a max element, reduce the count

                        left += 1                # Move left pointer forward

            return sub_arr                           # Return the total number of valid subarrays
