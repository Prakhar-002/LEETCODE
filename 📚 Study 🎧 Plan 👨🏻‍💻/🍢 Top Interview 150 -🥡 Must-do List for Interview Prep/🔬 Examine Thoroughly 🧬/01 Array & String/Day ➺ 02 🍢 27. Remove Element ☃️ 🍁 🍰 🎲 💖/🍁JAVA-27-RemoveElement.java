//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 27

//? ⌚ Time complexity -> O(n) 👉 length of arr

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int removeElement(int[] nums, int val) {
            // Initialize a pointer `j` to track the position where the next non-`val` element should be placed
            int j = 0;

            // Iterate through the array
            for (int i = 0; i < nums.length; i++) {
                  // If the current element is not equal to `val`, keep it
                  if (nums[i] != val) {
                        nums[j++] = nums[i]; // Assign the element to the `j`-th position and increment `j`
                  }
            }

            // Return the new length of the array, which is the value of `j`
            return j;
      }
}
