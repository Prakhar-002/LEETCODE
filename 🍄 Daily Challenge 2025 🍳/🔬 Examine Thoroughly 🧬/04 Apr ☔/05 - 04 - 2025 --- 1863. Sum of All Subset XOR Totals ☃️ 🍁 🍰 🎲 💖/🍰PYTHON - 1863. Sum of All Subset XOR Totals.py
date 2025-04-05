#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1863

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def subsetXORSum(self, nums: List[int]) -> int:
            # Initialize the bitwise OR of all elements
            xor_sum = 0

            # Compute OR of all numbers in the list
            for n in nums:
                  xor_sum |= n

            # Total subset XOR sum is xor_sum * 2^(len(nums) - 1)
            return xor_sum * (1 << (len(nums) - 1))
