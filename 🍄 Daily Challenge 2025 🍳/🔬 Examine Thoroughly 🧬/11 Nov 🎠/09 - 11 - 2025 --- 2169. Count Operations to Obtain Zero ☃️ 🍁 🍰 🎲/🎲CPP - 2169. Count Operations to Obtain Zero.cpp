//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2169

//? ⌚ Time complexity ➺ O(log(max(n1, n2) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      // Returns number of operations to reduce both numbers to zero via division-based subtraction
      int countOperations(int num1, int num2) {
            int res = 0;  // Total count of operations

            // Loop until either number becomes zero
            while (num1 != 0 && num2 != 0) {
                  if (num1 >= num2) {
                        res += num1 / num2;   // Count how many times num2 fits into num1
                        num1 = num1 % num2;   // Update num1 with remainder
                  } else {
                        res += num2 / num1;   // Count how many times num1 fits into num2
                        num2 = num2 % num1;   // Update num2 with remainder
                  }
            }

            return res;   // Return total steps performed
      }
};
