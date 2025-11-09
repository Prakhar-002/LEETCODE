//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2169

//? ⌚ Time complexity ➺ O(log(max(n1, n2) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Counts the number of operations to reduce num1 and num2 to zero
      public int countOperations(int num1, int num2) {
            int res = 0; // Accumulates total number of operations

            // Continue as long as both numbers are non-zero
            while (num1 != 0 && num2 != 0) {
                  if (num1 >= num2) {
                        // Add how many times num2 fits into num1
                        res += num1 / num2;
                        // Update num1 to remainder
                        num1 = num1 % num2;
                  } else {
                        // Add how many times num1 fits into num2
                        res += num2 / num1;
                        // Update num2 to remainder
                        num2 = num2 % num1;
                  }
            }
            return res; // Return total operations count
      }
}
