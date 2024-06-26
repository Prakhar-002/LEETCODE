//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1863 

class Solution {
      public int subsetXORSum(int[] nums) {
            int xorSum = 0;

            for (int i = 0; i < nums.length; i++) {
                  xorSum |= nums[i];
            }

            return xorSum * (int) (Math.pow(2, (nums.length - 1)));
      }
}