//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 70

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int climbStairs(int n) {
            // The `first` and `sec` variables represent the number of ways to reach the
            // first step and the second step, respectively.
            int first = 1; // Base case: 1 way to reach the first step
            int sec = 1; // Base case: 1 way to reach the second step

            // Start the loop from step 2 and calculate up to step `n`
            for (int i = 2; i < n + 1; i++) {
                  // `third` represents the number of ways to reach the current step.
                  // It is the sum of the ways to reach the two previous steps (`first` and
                  // `sec`).
                  int third = first + sec;

                  // Update `first` to hold the value of the previous step.
                  first = sec;

                  // Update `sec` to hold the value of the current step.
                  sec = third;
            }

            // Return the total number of ways to reach the nth step.
            return sec;
      }
}