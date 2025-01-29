//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 27

//? ⌚ Time complexity -> O(n) 👉 length of arr

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int removeElement(int[] nums, int val) {
            int j = 0;
            for (int i = 0; i < nums.length; i++) {
                  if (nums[i] != val) {
                        nums[j++] = nums[i];
                  }
            }
            return j;
      }
}