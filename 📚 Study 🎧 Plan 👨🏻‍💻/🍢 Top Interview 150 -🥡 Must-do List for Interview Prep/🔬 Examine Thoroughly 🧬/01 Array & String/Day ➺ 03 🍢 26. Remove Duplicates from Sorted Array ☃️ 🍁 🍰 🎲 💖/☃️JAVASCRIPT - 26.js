//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 26

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var removeDuplicates = function (nums) {
      // Initialize pointer `i` to track the position of the last unique element
      let i = 0;

      // Iterate through the array starting from the second element
      for (let j = 1; j < nums.length; j++) {
            // If the current element is not equal to the last unique element
            if (nums[i] !== nums[j]) {
                  nums[i + 1] = nums[j]; // Place the current element in the next position
                  i++; // Increment the pointer `i`
            }
      }

      // Return the new length of the array, which is `i + 1`
      return i + 1;
}