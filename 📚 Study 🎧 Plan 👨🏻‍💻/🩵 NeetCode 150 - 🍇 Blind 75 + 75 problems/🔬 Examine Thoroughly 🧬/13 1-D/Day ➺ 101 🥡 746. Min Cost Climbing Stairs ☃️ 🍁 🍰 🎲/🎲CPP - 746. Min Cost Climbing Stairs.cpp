//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 746

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int minCostClimbingStairs(vector<int>& cost) {
            // Loop backwards from the 3rd last step down to the 0th step
            for (int i = cost.size() - 3; i >= 0; i--) {
                  // For each step i, add its cost plus the cheaper option between
                  // taking one or two steps ahead.
                  cost[i] += min(cost[i + 1], cost[i + 2]);
            }

            // Finally, starting from either step 0 or 1 is allowed.
            // Return the cheaper of the two.
            return min(cost[0], cost[1]);
      }
};
