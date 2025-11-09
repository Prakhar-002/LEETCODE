#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2169

#? ⌚ Time complexity ➺ O(log(max(n1, n2) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countOperations(self, num1: int, num2: int) -> int:
            res = 0  # Tracks the total number of operations performed

            # Continue while both numbers are positive
            while num1 and num2:
                  if num1 >= num2:
                        # Add the number of times num2 can be subtracted from num1
                        res += num1 // num2
                        # Update num1 to the remainder after division
                        num1 = num1 % num2
                  else:
                        # Add the number of times num1 can be subtracted from num2
                        res += num2 // num1
                        # Update num2 to the remainder after division
                        num2 = num2 % num1

            # Return the total count of operations required
            return res
