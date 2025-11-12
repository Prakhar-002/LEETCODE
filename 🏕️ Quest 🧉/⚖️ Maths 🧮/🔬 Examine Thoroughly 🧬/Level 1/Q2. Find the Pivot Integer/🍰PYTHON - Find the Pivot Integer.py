#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L1 Q2

#? ⌚ Time complexity ➺ O(n) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def pivotInteger(self, n: int) -> int:
            total = (n * (n + 1)) // 2  # Sum of all numbers from 1 to n

            curSum = 0

            for i in range(1, n + 1):  # Start from 1, not 0
                  curSum += i

                  # Check if sum of numbers from 1 to i equals sum of numbers from i to n
                  if curSum == total - curSum + i:
                        return i

            return -1
