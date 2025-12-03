# //! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 633 

import math

class Solution:
      def judgeSquareSum(self, c: int) -> bool:
            # taking to pointer a star with 0
            st = 0;
            # end with the square root of given c we'll take the ceil value
            end = math.isqrt(c) + 1

            # While start <= end
            while st <= end:
                  # Calculating square
                  square = (st ** 2) + (end ** 2)
                  # If it is equal to c return TRUE
                  if square == c:
                        return True
                  # If it is greater than c shift end pointer to left
                  elif square > c:
                        end -= 1
                  # If it is smaller than c shift start pointer to right
                  else :
                        st += 1

            return False