//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minSubArrayLen = function (target, nums) {
      let left = 0, sum = 0;
      let res = Infinity;  // Start with maximum value

      for (let right = 0; right < nums.length; right++) {
            sum += nums[right];  // Add current number to the window

            // While sum ≥ target, try to update result and shrink window
            while (sum >= target) {
                  res = Math.min(res, right - left + 1);  // Update smallest window
                  sum -= nums[left];  // Remove leftmost element
                  left++;  // Move left boundary forward
            }
      }

      return res === Infinity ? 0 : res;  // Return 0 if no valid subarray found
};
