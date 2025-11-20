#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

#? ⌚ Time complexity ➺ O(log b)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def getSum(self, a: int, b: int) -> int:
            mask = 0xFFFFFFFF  # 32-bit mask to limit integer size
            while (b & mask) != 0:  # Loop until carry (b) becomes zero in 32-bit space
                  carry = (a & b) << 1  # Calculate carry bits and shift left
                  a = a ^ b             # Sum bits (XOR) without carry
                  b = carry             # Carry to add in next iteration
            # If b > 0 (carry beyond 32 bits), mask a to 32 bits, else return a directly
            return (a & mask) if b > 0 else a
