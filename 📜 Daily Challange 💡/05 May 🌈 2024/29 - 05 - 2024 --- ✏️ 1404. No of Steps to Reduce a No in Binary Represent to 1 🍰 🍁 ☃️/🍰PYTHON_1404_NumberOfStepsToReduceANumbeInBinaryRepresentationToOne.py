#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 1404 

class Solution:
      def numSteps(self, s: str) -> int:
            steps = 0  # Count total steps
            carry = 0

            for i in reversed(range(1, len(s))):
                  # 1 + carry(1) = 2 means 10 hence digit % 2 = 0
                  # 0 + carry(1) = 1 
                  # 1 + carry(0) = 1
                  digit = (int(s[i]) + carry) % 2

                  # If actual digit after adding our carry == 1
                  if digit == 0:
                        steps += 1

                  # If actual digit after adding our carry == 0 
                  elif digit == 1:
                        carry = 1
                        steps += 2

            return steps + carry