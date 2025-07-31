#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2411

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def smallestSubarrays(self, nums: List[int]) -> List[int]:
            # Get the length of the input array
            n = len(nums)

            # Track the last seen index for each of 30 bits (since nums[i] <= 10^9)
            last_seen = [0] * 30

            # Result array where each value is initialized to 1 (minimum subarray size)
            res = [1] * n

            # Traverse the array from right to left
            for i in range(n - 1, -1, -1):
                  for bit in range(30):
                        # Check if bit 'bit' is set in nums[i]
                        if (nums[i] & (1 << bit)) > 0:
                              # Update the last seen index for this bit
                              last_seen[bit] = i

                        # Update the result for current index based on the farthest
                        # index we need to reach to include all necessary bits
                        res[i] = max(res[i], last_seen[bit] - i + 1)

            return res
