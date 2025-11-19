//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2154

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findFinalValue = function (nums, original) {
      // Sort the array to process values in ascending order
      nums.sort((a, b) => a - b);

      // Iterate through each number in the sorted array
      for (let n of nums) {
            // If the current number equals the original value,
            // double the original and continue checking
            if (original === n) {
                  original *= 2;
            }
      }

      // Return the final doubled value of original
      return original;
};
