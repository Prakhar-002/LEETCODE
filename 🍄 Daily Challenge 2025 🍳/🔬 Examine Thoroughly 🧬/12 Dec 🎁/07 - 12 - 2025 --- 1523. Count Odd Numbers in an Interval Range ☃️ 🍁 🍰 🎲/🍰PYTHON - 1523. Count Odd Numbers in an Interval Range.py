#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1523

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countOdds(self, low: int, high: int) -> int:
            # Compute number of odd integers from 1 up to 'high':
            # - Every two numbers have exactly one odd, so (high+1)//2 counts odds till high
            # Compute number of odd integers from 1 up to 'low - 1':
            # - low//2 counts odds before low (since low-1 + 1 = low)
            # Subtract to get count of odds in the inclusive range [low, high]
            return (high + 1) // 2 - (low // 2)
