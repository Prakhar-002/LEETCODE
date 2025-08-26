//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 746

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minCostClimbingStairs(int[] cost) {
            // Loop backwards from the 3rd last step (index = cost.length-3) down to step 0
            // Each step i will be updated to represent the minimum total cost
            // if you start stepping from cost[i].
            for (int i = cost.length - 3; i >= 0; i--) {
                  // Update cost[i]:
                  // cost[i] + minimum of the next two possible steps (i+1 or i+2)
                  cost[i] += Math.min(cost[i + 1], cost[i + 2]);
            }

            // You can start your climb from either step 0 or step 1,
            // so the answer is the smaller between cost[0] and cost[1].
            return Math.min(cost[0], cost[1]);
      }
}
