//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1752

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Function to check if the given array is sorted and rotated
var check = function (nums) {
      let k = 0; // Counter for rotation points
      let n = nums.length; // Get the length of the array

      // Loop through the array to count the number of disorder points
      for (let i = 0; i < nums.length; i++) {
            // If the current element is greater than the next (circular condition), increment k
            if (nums[i] > nums[(i + 1) % n]) {
                  k++;
            }
      }

      // The array is sorted and rotated if there's at most one disorder point
      return k > 1 ? false : true;
}