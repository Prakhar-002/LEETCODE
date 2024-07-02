//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 80

//? ⌚ Time complexity -> O(n) 👉 given arr length

//? 🧺 Space complexity -> O(1)

class Solution {
      public int removeDuplicates(int[] nums) {
            int left = 0;
            // int rightElem = nums[0];
            for (int rightElem : nums){
                  // left == 0 first elem is always in our arr
                  // left == 1 sec also be part of our array
                  // nums[left - 2] != rightElem checking current elem is not equal 
                  //  from previous two elem of current position of our left pointer 
                  if (left == 0 || left == 1 || nums[left - 2] != rightElem){
                        // assign right value to our left pointer
                        nums[left++] = rightElem;
                  }
            }
            return left;
      }
}