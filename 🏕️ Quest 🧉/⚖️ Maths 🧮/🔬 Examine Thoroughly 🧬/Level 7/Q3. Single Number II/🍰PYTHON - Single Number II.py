#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L7 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def singleNumber(self, nums: List[int]) -> int:
            ones = 0   # Bits that have appeared exactly once so far
            twos = 0   # Bits that have appeared exactly twice so far

            for num in nums:
                  # Update 'ones' with bits from num that are not in 'twos'
                  ones ^= (num & ~twos)
                  # Update 'twos' with bits from num that are not in updated 'ones'
                  twos ^= (num & ~ones)

            # 'ones' contains bits appearing exactly once, which is the unique number
            return ones
