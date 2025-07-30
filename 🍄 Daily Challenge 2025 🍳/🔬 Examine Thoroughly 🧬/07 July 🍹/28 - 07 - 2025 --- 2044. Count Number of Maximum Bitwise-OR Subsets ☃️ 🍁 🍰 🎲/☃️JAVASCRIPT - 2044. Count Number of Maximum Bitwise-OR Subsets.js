//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(n * Max) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(2 ^ 17)

var countMaxOrSubsets = function (nums) {
      // Initialize the maximum OR value
      let maxOr = 0;

      // Create a DP array of size 2^17 filled with 0
      const dp = new Array(1 << 17).fill(0);

      // Base case: there's one subset (empty) with OR value 0
      dp[0] = 1;

      // Loop through each number in nums
      for (let num of nums) {
            // Traverse in reverse to avoid using updated states
            for (let i = maxOr; i >= 0; i--) {
                  if (dp[i] > 0) {
                        // Add count of subsets with OR=i to OR=i|num
                        dp[i | num] += dp[i];
                  }
            }
            // Update the maximum OR value seen so far
            maxOr |= num;
      }

      // Return the count of subsets with OR value equal to maxOr
      return dp[maxOr];
};
