//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2769

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int theMaximumAchievableX(int num, int t) {
            // Calculate the maximum achievable 'x' value
            // Start from initial number 'num'
            // Each step increases x by 2, so multiply t by 2
            // Add the doubled steps to num to get max achievable value
            return num + 2 * t;
      }
}
