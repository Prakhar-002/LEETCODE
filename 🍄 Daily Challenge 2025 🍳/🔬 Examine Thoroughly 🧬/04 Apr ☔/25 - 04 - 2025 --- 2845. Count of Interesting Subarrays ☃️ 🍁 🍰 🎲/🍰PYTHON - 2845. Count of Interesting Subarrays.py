#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2845

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(min(n, modulo))

class Solution:
      def countInterestingSubarrays(self, nums: List[int], modulo: int, k: int) -> int:
            n = len(nums)              # Length of the array
            cnt = Counter([0])         # Counter to store prefix sum modulo frequencies
            res = 0                    # Result to store total number of interesting subarrays
            prefix = 0                 # Prefix sum counter

            for i in range(n):          # Traverse through the array
                  # If current number satisfies nums[i] % modulo == k, increment prefix
                  prefix += 1 if nums[i] % modulo == k else 0

                  # Add the count of prefix sums that match the required condition
                  res += cnt[(prefix - k + modulo) % modulo]

                  # Update the counter for current prefix modulo
                  cnt[prefix % modulo] += 1

            return res                   # Return total interesting subarrays
