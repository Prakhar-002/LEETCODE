//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 746

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minCostClimbingStairs = function (cost) {
      // Loop backwards from the 3rd last step to step 0
      for (let i = cost.length - 3; i >= 0; i--) {
            // Update cost[i] to include:
            // - The cost of stepping on i
            // - Plus the cheaper of going from i+1 or i+2
            cost[i] += Math.min(cost[i + 1], cost[i + 2]);
      }

      // The climb can start from step 0 or step 1,
      // so pick the cheaper option.
      return Math.min(cost[0], cost[1]);
};
