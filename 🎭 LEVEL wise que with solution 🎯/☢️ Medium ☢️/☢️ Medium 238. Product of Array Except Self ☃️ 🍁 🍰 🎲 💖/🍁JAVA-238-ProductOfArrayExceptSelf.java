//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 238

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(1) 👉 according to followUp

class Solution {
      public int[] productExceptSelf(int[] nums) {
            // making a output array for storing result
            int[] res = new int[nums.length];

            // for prefix multiply
            int prefix = 1;

            for (int i = 0; i < nums.length; i++) {
                  res[i] = prefix;
                  prefix *= nums[i];
            }

            // for postfix multiply
            int postfix = 1;

            for (int i = nums.length - 1; i >= 0; i--) {
                  res[i] *= postfix;
                  postfix *= nums[i];
            }

            return res;
      }
}