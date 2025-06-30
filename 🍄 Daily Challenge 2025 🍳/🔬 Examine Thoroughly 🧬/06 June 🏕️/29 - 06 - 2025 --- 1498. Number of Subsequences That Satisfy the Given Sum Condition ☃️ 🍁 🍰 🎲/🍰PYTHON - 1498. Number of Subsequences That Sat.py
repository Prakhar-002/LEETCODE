#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1498

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def numSubseq(self, nums: List[int], target: int) -> int:
            mod = 10**9 + 7           # Large prime for modulo operations
            n = len(nums)

            nums.sort()               # Step 1: Sort the array to apply two-pointer technique

            # Step 2: Precompute powers of 2 modulo mod
            power = [1] * n
            for i in range(1, n):
                  power[i] = (power[i - 1] * 2) % mod

            left, right = 0, n - 1
            result = 0                # Total valid subsequences

            # Step 3: Two pointers to find valid (min, max) subsequence bounds
            while left <= right:
                  if nums[left] + nums[right] <= target:
                        # All combinations between left and right are valid
                        result = (result + power[right - left]) % mod
                        left += 1     # Try a larger minimum
                  else:
                        right -= 1    # Try a smaller maximum

            return result

