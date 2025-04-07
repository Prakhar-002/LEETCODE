//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 416

//? ⌚ Time complexity ➺ O(n * s) 👉🏻   n = len(nums)

//? 🧺 Space complexity ➺ O(1)    👉🏻   s = sum(nums) // 2

var canPartition = function (nums) {
      let totalSum = nums.reduce((a, b) => a + b, 0);

      // If total sum is odd, return false
      if (totalSum % 2 !== 0) return false;

      let target = totalSum / 2;

      let possibleSums = new Set();
      possibleSums.add(0); // Initial sum

      // Loop through each number
      for (let num of nums) {
            let nextSums = new Set();

            for (let s of possibleSums) {
                  if (s + num === target) return true;

                  nextSums.add(s);       // Without num
                  nextSums.add(s + num); // With num
            }

            possibleSums = nextSums;
      }

      return false; // No valid subset found
};
