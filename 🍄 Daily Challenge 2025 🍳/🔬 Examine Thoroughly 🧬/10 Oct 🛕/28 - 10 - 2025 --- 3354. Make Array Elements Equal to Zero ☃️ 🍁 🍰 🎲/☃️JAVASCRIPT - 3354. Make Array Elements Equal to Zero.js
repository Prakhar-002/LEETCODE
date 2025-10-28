//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3354

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countValidSelections = function (nums) {
      let selections = 0;
      let left = 0, right = nums.reduce((a, b) => a + b, 0); // sum of all values
      for (let i = 0; i < nums.length; i++) {
            if (nums[i] === 0) {
                  // Check near-equal splits at zeros
                  if (0 <= left - right && left - right <= 1) selections++;
                  if (0 <= right - left && right - left <= 1) selections++;
            } else {
                  left += nums[i];
                  right -= nums[i];
            }
      }
      return selections;
};
