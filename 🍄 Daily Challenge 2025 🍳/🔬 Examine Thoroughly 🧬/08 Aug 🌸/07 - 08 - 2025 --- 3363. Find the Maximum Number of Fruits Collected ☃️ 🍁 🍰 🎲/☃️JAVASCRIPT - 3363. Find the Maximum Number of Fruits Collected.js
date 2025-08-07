//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3363

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Function to calculate the maximum fruits collected
var maxCollectedFruits = function (fruits) {
      const n = fruits.length;             // Get the size of the grid (n x n)
      let ans = 0;                         // Initialize the result

      // Step 1: Add all main diagonal elements to the answer
      for (let i = 0; i < n; i++) {
            ans += fruits[i][i];          // Collect fruits from the main diagonal
      }

      ans += dp(fruits, n);               // Step 2: Perform DP traversal (top-right path)

      // Step 3: Transpose the matrix to handle the symmetric case
      for (let i = 0; i < n; i++) {
            for (let j = 0; j < i; j++) {
                  // Swap fruits[i][j] with fruits[j][i]
                  [fruits[i][j], fruits[j][i]] = [fruits[j][i], fruits[i][j]];
            }
      }

      ans += dp(fruits, n);               // Step 4: Second DP traversal after transpose

      return ans;                         // Return the final answer
};

// DP helper function to find max path sum (excluding diagonals)
function dp(fruits, n) {
      // Initialize two arrays to track current and previous row values
      let prev = new Array(n).fill(Number.NEGATIVE_INFINITY);
      let curr = new Array(n).fill(Number.NEGATIVE_INFINITY);

      // Base case: start from the top-right cell
      prev[n - 1] = fruits[0][n - 1];

      // Traverse from row 1 to n-2 (excluding top and bottom)
      for (let i = 1; i < n - 1; i++) {
            // Start from the far right and avoid crossing the diagonal
            for (let j = Math.max(n - 1 - i, i + 1); j < n; j++) {
                  let best = prev[j];     // Start with the current column
                  if (j - 1 >= 0) {
                        best = Math.max(best, prev[j - 1]); // Move from left
                  }
                  if (j + 1 < n) {
                        best = Math.max(best, prev[j + 1]); // Move from right
                  }
                  curr[j] = best + fruits[i][j]; // Add current fruit value
            }

            // Swap current and previous for next iteration
            [prev, curr] = [curr, prev];
      }

      return prev[n - 1];                 // Return max value at the bottom-right
}
