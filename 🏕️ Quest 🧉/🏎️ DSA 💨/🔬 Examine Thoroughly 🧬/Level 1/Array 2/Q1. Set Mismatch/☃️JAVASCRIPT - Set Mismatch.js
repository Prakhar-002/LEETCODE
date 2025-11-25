//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findErrorNums = function (nums) {
      let arr = [0, 0];  // arr[0] = duplicate, arr[1] = missing
      let freq = new Array(nums.length + 1).fill(0);  // Frequency array

      // Count frequency for each number
      for (let n of nums) {
            freq[n]++;
      }

      // Find the duplicate and missing numbers
      for (let i = 1; i < freq.length; i++) {
            if (freq[i] === 2) {
                  arr[0] = i;  // Duplicate
            }
            if (freq[i] === 0) {
                  arr[1] = i;  // Missing
            }
      }

      return arr;
};
