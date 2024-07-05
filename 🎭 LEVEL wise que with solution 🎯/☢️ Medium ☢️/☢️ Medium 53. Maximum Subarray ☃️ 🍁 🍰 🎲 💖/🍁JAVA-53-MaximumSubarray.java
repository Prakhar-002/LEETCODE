//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 53

//? ⌚ Time complexity -> O(n) 👉 For length 

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int maxSubArray(int[] nums) {
            int curSum = 0;
            int maxSum = Integer.MIN_VALUE;

            for (int i = 0; i < nums.length; i++) {
                  // if less than 0 make it's own train
                  // else it will a part of existing train

                  // if (curSum < 0) {
                  //       curSum = nums[i];
                  // } else {
                  //       curSum += nums[i];
                  // }

                  curSum = curSum < 0 ? nums[i] : curSum + nums[i];

                  // take the max
                  maxSum = Math.max(maxSum, curSum);
            }
            return maxSum;
      }
}