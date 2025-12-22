//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 70

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(n)

//? 🧺 Space complexity ➺ O(1)

var climbStairs = function (n) {
      // Base cases
      let first = 1; // Number of ways to reach the first step
      let sec = 1;   // Number of ways to reach the second step

      // Loop from step 2 to step n
      for (let i = 2; i <= n; i++) {
            // Calculate the number of ways to reach the current step
            let third = first + sec;
            // Update the previous steps
            first = sec;
            sec = third;
      }

      // Return the total number of ways to reach the nth step
      return sec;
}