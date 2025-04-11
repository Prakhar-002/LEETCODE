//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1737

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

int sumBase(int n, int k) {
      int digitSum = 0;  // Initialize digit sum

      while (n > 0) {
            digitSum += n % k;  // Add last base-k digit
            n /= k;             // Remove last digit
      }

      return digitSum;  // Return result
}
