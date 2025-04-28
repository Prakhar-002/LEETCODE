#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3392

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSubarrays(self, nums: List[int]) -> int:
            n = len(nums)                           # Length of the nums array
            ans = 0                                  # Initialize answer to count valid subarrays

            for i in range(1, n - 1):                # Iterate from index 1 to n-2 (middle elements)
                  # Check if current element is twice the average of its neighbors
                  if nums[i] == (nums[i - 1] + nums[i + 1]) * 2:
                        ans += 1                     # Increment count if condition satisfies

            return ans                               # Return total valid subarrays
