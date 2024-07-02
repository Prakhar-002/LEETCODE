//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1

//? ⌚ Time complexity -> O(n^2) 👉 array length

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int[] twoSum(int[] nums, int target) {
            for (int i = 0; i < nums.length; i++) {
                  for (int j = i + 1; j < nums.length; j++) {
                        if ((nums[i] + nums[j]) == target) {
                              return new int[]{i , j};
                        }
                  }
            }
            return nums;
      }
}