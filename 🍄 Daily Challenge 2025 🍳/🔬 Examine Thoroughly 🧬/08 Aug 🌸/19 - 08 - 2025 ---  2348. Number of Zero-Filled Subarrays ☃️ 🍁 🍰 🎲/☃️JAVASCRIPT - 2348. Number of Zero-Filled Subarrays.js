//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2348

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var zeroFilledSubarray = function (nums) {
      // `total` accumulates the final count of zero-filled subarrays.
      let total = 0;
      // `subArr` tracks the length of the current consecutive streak of zeros.
      let subArr = 0;

      // Iterate through each number in the array.
      for (const num of nums) {
            if (num === 0) {
                  // If we find a zero, extend the current streak.
                  subArr++;
                  // A streak of `k` zeros adds `k` new subarrays ending at this position.
                  total += subArr;
            } else {
                  // If the number is not zero, the streak is broken.
                  subArr = 0;
            }
      }

      return total;
};
