//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.2 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int rob(int[] nums) {
            // robOne = max money we can get up to house i-2
            // robTwo = max money we can get up to house i-1
            int robOne = 0;
            int robTwo = 0;

            // Process each house one by one
            for (int n : nums) {
                  // At current house:
                  //   Option 1: Skip current house → max is robTwo
                  //   Option 2: Rob current house → n + robOne (since we can't rob adjacent)
                  // So, new max = max(robTwo, n + robOne)
                  int temp = robTwo;
                  robTwo = Math.max(robTwo, n + robOne);
                  robOne = temp;
            }

            // After processing all houses, robTwo holds the max money
            return robTwo;
      }
}
