//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2843

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = hight - low + 1

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countSymmetricIntegers(int low, int high) {
            int count = 0; // Counter for symmetric integers

            for (int num = low; num <= high; num++) {
                  // Check 2-digit symmetric numbers divisible by 11
                  if (num < 100 && num % 11 == 0) {
                        count++;
                  }
                  // Check 4-digit symmetric numbers
                  else if (num >= 1000 && num < 10000) {
                        int left = num / 1000 + (num % 1000) / 100; // Sum of first two digits
                        int right = (num % 100) / 10 + (num % 10);  // Sum of last two digits
                        
                        if (left == right) {
                              count++;
                        }
                  }
            }

            return count; // Return total count
      }
}
