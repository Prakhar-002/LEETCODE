//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 633 

class Solution {
      public boolean judgeSquareSum(int c) {
            // taking to pointer a star with 0
            long st = 0;
            // end with the square root of given c we'll take the ceil value
            long end = (long) Math.ceil(Math.sqrt(c));

            // While start <= end
            while (st <= end) {
                  // Calculating square
                  long square = (st * st) + (end * end);
                  // If it is equal to c return TRUE
                  if (square == c) {
                        return true;
                        // If it is greater than c shift end pointer to left
                  } else if (square > c) {
                        end--;
                        // If it is smaller than c shift start pointer to right
                  } else {
                        st++;
                  }
            }

            return false;
      }
}