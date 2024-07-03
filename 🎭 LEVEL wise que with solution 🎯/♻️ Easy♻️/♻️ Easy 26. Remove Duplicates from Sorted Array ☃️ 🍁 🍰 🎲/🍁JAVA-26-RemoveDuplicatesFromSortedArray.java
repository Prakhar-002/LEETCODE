//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 26

//? ⌚ Time complexity -> O(n) 👉 length of given nums array

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int removeDuplicates(int[] nums) {
            int i = 0;
            for (int j = 1; j < nums.length; j++) {
                  if (nums[i] != nums[j]) {
                        nums[i + 1] = nums[j];
                        i++;
                  }
            }
            return i + 1;
      }
}