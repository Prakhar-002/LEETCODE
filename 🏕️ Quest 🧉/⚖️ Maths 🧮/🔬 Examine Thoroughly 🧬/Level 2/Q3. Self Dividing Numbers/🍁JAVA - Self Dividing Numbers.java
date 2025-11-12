//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = right - left + 1

// ? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      // Helper method to check if a number is self-dividing
      private boolean isDividing(int num) {
            int n = num; // Copy of num for digit extraction

            while (n > 0) {
                  int digit = n % 10; // Extract last digit
                  // If digit is 0 or num not divisible by digit, return false
                  if (digit == 0 || num % digit != 0) {
                        return false;
                  }
                  n /= 10; // Remove last digit
            }

            return true; // All digits divide num evenly
      }
      
      public List<Integer> selfDividingNumbers(int left, int right) {
            List<Integer> res = new ArrayList<>();  // List to store self-dividing numbers

            // Iterate over range and add self-dividing numbers to the result list
            for (int num = left; num <= right; num++) {
                  if (isDividing(num)) {
                        res.add(num);
                  }
            }
            return res;
      }
}
