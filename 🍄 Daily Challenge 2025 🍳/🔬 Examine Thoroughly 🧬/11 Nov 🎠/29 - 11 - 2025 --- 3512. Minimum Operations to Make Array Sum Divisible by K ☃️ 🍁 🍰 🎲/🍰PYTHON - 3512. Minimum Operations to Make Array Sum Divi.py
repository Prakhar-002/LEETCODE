#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3512

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minOperations(self, nums: List[int], k: int) -> int:
            # The minimal number of operations is the remainder when
            # the total sum of array elements is divided by k
            # (assuming 1 operation adjusts the total sum by 1 unit modulo k)
            return sum(nums) % k
