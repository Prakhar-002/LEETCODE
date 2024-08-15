//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1437

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

const kLengthApart = function (nums, k) {
      // Initialize places with k for the first occurrence of 1
      let places = k;

      // Iterate over nums to find 1's positions
      for (let num of nums) {
            // If we found a 1, check the distance
            if (num === 1) {
                  // If 1 appears before k places, return false
                  if (places < k) {
                        return false;
                  }
                  // Otherwise, reset the places counter
                  places = 0;
            } else {
                  // Count the places for every zero
                  places++;
            }
      }
      // If we've made it through the entire array, return true
      return true;
};