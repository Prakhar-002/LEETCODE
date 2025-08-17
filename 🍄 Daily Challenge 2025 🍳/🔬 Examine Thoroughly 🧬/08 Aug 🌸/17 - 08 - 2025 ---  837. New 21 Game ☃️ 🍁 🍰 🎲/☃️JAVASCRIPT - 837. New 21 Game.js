//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 837

//? ⌚ Time complexity ➺ O(k + maxPts) 

//? 🧺 Space complexity ➺ O(k)

var new21Game = function (n, k, maxPts) {
      // ----------------------------------------------------------
      // Step 1: Handle Edge Cases
      // ----------------------------------------------------------
      // If Alice stops immediately (k=0) or is guaranteed to end with
      // a score <= n, the probability is 1.0.
      if (k === 0 || k + maxPts <= n) {
            return 1.0;
      }

      // ----------------------------------------------------------
      // Step 2: Initialize Sliding Window for DP
      // ----------------------------------------------------------
      // `dp[i]` is the probability of winning starting from score `i`.
      // We use an array of size k + maxPts to store all necessary probabilities.
      const dp = new Array(k + maxPts).fill(0.0);
      let windowSum = 0.0;

      // Initialize probabilities for stopping scores (i >= k).
      // For these scores, dp[i] is 1 if i <= n, else 0.
      // Also, calculate the initial window sum for dp[k-1].
      for (let i = k; i < k + maxPts; i++) {
            if (i <= n) {
                  dp[i] = 1.0;
            }
            windowSum += dp[i];
      }

      // ----------------------------------------------------------
      // Step 3: Iterate and Apply Sliding Window DP
      // ----------------------------------------------------------
      // Iterate backwards from score `k - 1` down to 0.
      for (let i = k - 1; i >= 0; i--) {
            // The probability at `i` is the average of probabilities in the current window.
            dp[i] = windowSum / maxPts;

            // Slide the window for the next iteration (i-1):
            // Add dp[i] and remove the value that's now out of the window, dp[i + maxPts].
            // A check for `dp[i + maxPts]` existence is good practice, though it should be 0 if out of bounds.
            const remove = dp[i + maxPts] || 0.0;
            windowSum += dp[i] - remove;
      }

      // ----------------------------------------------------------
      // Step 4: Return the Result
      // ----------------------------------------------------------
      // The final answer is the probability of winning starting from score 0.
      return dp[0];
};
