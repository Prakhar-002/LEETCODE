//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3349

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var hasIncreasingSubarrays = function (nums, k) {
      let knew = k - 1;  // Number of required consecutive increasing pairs

      // If k is 1, answer is always true
      if (knew === 0) {
            return true;
      }

      // Iterate through nums from index k+1 to end
      for (let i = k + 1; i < nums.length; i++) {
            // Check if pairs (i-1, i) and (i-k-1, i-k) are strictly increasing
            if (nums[i] > nums[i - 1] && nums[i - k] > nums[i - k - 1]) {
                  knew--;  // Found valid consecutive increasing pair
            } else {
                  knew = k - 1;  // Reset count if sequence broken
            }

            // If we've found all required pairs, return true
            if (knew === 0) {
                  return true;
            }
      }

      // Return false if no sufficient pairs found
      return false;
};
