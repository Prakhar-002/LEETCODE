//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1737

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int sumBase(int n, int k) {
            int digitSum = 0; // Initialize the digit sum

            while (n > 0) {
                  digitSum += n % k; // Get the last digit in base-k
                  n /= k; // Remove the last digit
            }

            return digitSum; // Return total sum
      }
}
