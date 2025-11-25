
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 448

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findDisappearedNumbers = function (nums) {
      // Initialize the result array to store missing numbers
      const res = [];

      // Iterate over the input array to mark the presence of numbers
      for (const n of nums) {
            // Compute the index corresponding to the absolute value of the number
            const i = Math.abs(n) - 1;
            // If the number at the computed index is positive, mark it as negative
            if (nums[i] > 0) {
                  nums[i] = -nums[i];
            }
      }

      // Iterate over the modified array to find missing numbers
      nums.forEach((n, i) => {
            // If a number is positive, its index + 1 is missing in the input
            if (n > 0) {
                  res.push(i + 1);
            }
      });

      // Return the array of missing numbers
      return res;
}
