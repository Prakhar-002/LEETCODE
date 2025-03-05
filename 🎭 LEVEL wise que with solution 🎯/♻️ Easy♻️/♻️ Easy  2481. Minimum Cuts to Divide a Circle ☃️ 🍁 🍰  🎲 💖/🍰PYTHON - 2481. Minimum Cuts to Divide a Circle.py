#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2481

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberOfCuts(self, n: int) -> int:
            # If there is only 1 slice (n = 1), no cuts are needed
            # If n is odd, number of cuts equals n
            # If n is even, number of cuts equals n // 2
            return 0 if n == 1 else (n if n % 2 else n // 2)
