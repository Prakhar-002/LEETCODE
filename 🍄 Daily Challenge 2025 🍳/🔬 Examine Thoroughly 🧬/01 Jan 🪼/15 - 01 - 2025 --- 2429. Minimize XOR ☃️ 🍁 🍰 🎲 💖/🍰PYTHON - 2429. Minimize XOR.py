#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2429

#? ⌚ Time complexity ➺ O(log n) n = max(num1, num2)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimizeXor(self, num1: int, num2: int) -> int:
            # Count the number of 1 bits in num1 and num2
            bit1 = bin(num1).count('1')  # count bit of num1
            bit2 = bin(num2).count('1')  # count bit of num2

            if bit1 < bit2:
                  # If num1 has fewer 1 bits than num2, we need to add 1 bits
                  n = bit2 - bit1

                  # Set (bit2 - bit1) least significant clear bits in num1
                  num1 = ~num1  # Invert num1 to focus on clear bits

                  while n > 0:
                        num1 = num1 & (num1 - 1)  # Clear the least significant set bit
                        n -= 1

                  num1 = ~num1  # Re-invert num1 back to its original form
                  return num1

            # If num1 has more or equal 1 bits than num2, we need to remove 1 bits
            n = bit1 - bit2

            while n > 0:
                  num1 = num1 & (num1 - 1)  # Remove the least significant set bit
                  n -= 1

            return num1
