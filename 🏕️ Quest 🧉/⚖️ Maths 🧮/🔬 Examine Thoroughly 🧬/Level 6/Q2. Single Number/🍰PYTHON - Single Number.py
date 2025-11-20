#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def singleNumber(self, nums: List[int]) -> int:
            xorNum = 0  # Initialize XOR accumulator to 0

            # Iterate over each number in the list
            for n in nums:
                  # XOR current number with accumulator
                  # XOR of same number cancels out (x ^ x = 0)
                  # XOR with 0 returns the number itself (x ^ 0 = x)
                  xorNum ^= n

            # Final result is the number that appears only once
            return xorNum
