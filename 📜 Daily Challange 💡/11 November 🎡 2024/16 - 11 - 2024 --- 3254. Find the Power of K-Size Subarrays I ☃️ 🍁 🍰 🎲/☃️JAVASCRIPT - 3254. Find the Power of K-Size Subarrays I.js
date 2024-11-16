//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3254

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var resultsArray = function (nums, k) {
      // Initialize the results array to store the output
      const results = [];

      // Initialize the left pointer for the sliding window
      let l = 0;

      // Variable to keep track of the count of consecutive numbers
      let con_cnt = 1;

      // Iterate through the array with the right pointer
      for (let r = 0; r < nums.length; r++) {
            // Check if the current and previous numbers are consecutive
            if (r > 0 && nums[r - 1] + 1 === nums[r]) {
                  con_cnt++;
            }

            // If the window size exceeds k, update the left pointer
            if (r - l + 1 > k) {
                  // Decrement con_cnt if the leftmost numbers were consecutive
                  if (nums[l] + 1 === nums[l + 1]) {
                        con_cnt--;
                  }
                  // Slide the window to the right
                  l++;
            }

            // If the window size is exactly k, calculate the result for this window
            if (r - l + 1 === k) {
                  // Add the last number in the window if all are consecutive; otherwise, add -1
                  results.push(con_cnt === k ? nums[r] : -1);
            }
      }

      // Return the final results array
      return results;
}

//!---------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Helper function to check for consecutive numbers in the range [l, r]
var findMax = function (nums, l, r) {
      for (let i = l; i < r; i++) {
            // If two consecutive numbers are not successive, return -1
            if (nums[i] + 1 !== nums[i + 1]) {
                  return -1;
            }
      }
      // Return the last number in the range if all are consecutive
      return nums[r];
}

var resultsArray = function (nums, k) {
      // Initialize the result array to store the output
      const res = [];

      // Set the starting index for the sliding window
      let l = 0;

      // Iterate through nums using a sliding window of size k
      for (let r = k - 1; r < nums.length; r++) {
            // Append the result of findMax for the current window [l, r]
            res.push(findMax(nums, l, r));
            // Move the left pointer of the window one step to the right
            l++;
      }

      // Return the final result array
      return res;
}

