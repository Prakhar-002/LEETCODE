//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 213

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var rob = function (nums) {
      // Edge case: Only one house, rob it!
      if (nums.length === 1) {
            return nums[0];
      }

      // Main idea: You can't rob both the first and last house (circle).
      // Option 1: Rob houses from index 1 to end (skip first house).
      // Option 2: Rob houses from start to second last (skip last house).
      // Take the max among these two scenarios.
      return Math.max(robber(nums.slice(1)), robber(nums.slice(0, nums.length - 1)));
};

// Helper function for standard House Robber (linear array of houses)
function robber(arr) {
      let rob1 = 0, rob2 = 0;
      // For each house amount:
      for (let n of arr) {
            // rob2: Max money by either (previous max rob) or (current house + rob1)
            [rob1, rob2] = [rob2, Math.max(rob1 + n, rob2)];
      }

      // Return the max money rob-able from these houses
      return rob2;
}