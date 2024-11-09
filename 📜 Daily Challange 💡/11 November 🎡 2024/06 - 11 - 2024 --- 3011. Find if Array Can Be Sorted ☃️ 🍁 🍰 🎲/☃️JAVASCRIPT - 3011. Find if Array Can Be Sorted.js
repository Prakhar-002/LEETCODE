//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3011

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var canSortArray = function (nums) {
      // Initialize curMin and curMax as the first element of nums
      let curMin = nums[0];
      let curMax = nums[0];
      // prevMax will track the maximum of the previous "bit count" block
      let prevMax = -Infinity;

      // Loop through each number n in the array nums
      for (let n of nums) {
            // Check if the bit count of n matches curMin's bit count
            if (n.toString(2).split("1").length - 1 === curMin.toString(2).split("1").length - 1) {
                  // Update curMin and curMax for this "bit count" block
                  curMin = Math.min(curMin, n);
                  curMax = Math.max(curMax, n);
            } else {
                  // If curMin is less than prevMax, return false as sorting isn't possible
                  if (curMin < prevMax) {
                        return false;
                  }

                  // Update prevMax to the max of the completed block
                  prevMax = curMax;
                  // Reset curMin and curMax for the new "bit count" block
                  curMin = n;
                  curMax = n;
            }
      }

      // Final check to ensure last block's curMin is >= prevMax
      return curMin >= prevMax;
};