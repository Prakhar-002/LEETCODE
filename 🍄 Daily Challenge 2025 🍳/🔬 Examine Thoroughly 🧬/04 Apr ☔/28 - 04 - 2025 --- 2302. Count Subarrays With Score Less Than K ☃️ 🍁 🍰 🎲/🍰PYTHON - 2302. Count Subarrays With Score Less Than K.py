#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2302

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countSubarrays(self, nums: List[int], k: int) -> int:
            cntSubArr, total = 0, 0    # Initialize count of subarrays and total sum
            n = len(nums)              # Length of the array

            left = 0                   # Left pointer of the window

            for right in range(n):     # Iterate over each element with right pointer
                  total += nums[right] # Add current element to total sum

                  # Shrink the window until total * size of window < k
                  while left <= right and total * (right - left + 1) >= k:
                        total -= nums[left]  # Remove element at left from total
                        left += 1            # Move left pointer to right

                  cntSubArr += right - left + 1  # Add number of valid subarrays ending at 'right'

            return cntSubArr              # Return the total count
