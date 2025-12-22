#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 70

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def climbStairs(self, n):
            # Base cases
            first = 1  # Number of ways to reach the first step
            sec = 1    # Number of ways to reach the second step

            # Loop from step 2 to step n
            for _ in range(2, n + 1):
                  # Calculate the number of ways to reach the current step
                  third = first + sec
                  # Update the previous steps
                  first = sec
                  sec = third

            # Return the total number of ways to reach the nth step
            return sec