#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3228

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

# ? 🧺 Space complexity ➺ O(1) 

class Solution:
      def maxOperations(self, s: str) -> int:
            opr = 0          # Total count of operations
            ones = 0         # Count of '1's encountered so far

            for i in range(len(s) - 1):
                  if s[i] == "1":
                        ones += 1    # Increment count of '1' characters

                        # If next character is '0', increment operations by current count of ones
                        if s[i + 1] == "0":
                              opr += ones

            return opr        # Return total number of operations after processing string

