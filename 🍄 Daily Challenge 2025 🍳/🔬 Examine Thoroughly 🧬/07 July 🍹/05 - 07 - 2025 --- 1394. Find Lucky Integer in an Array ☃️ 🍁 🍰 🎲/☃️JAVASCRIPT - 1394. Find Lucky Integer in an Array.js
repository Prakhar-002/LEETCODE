//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

var findLucky = function (arr) {
      const freq = new Map();

      // Count frequency of each number
      for (const num of arr) {
            freq.set(num, (freq.get(num) || 0) + 1);
      }

      let res = -1; // Initialize result to -1

      // Iterate through frequency map
      for (const [key, val] of freq.entries()) {
            // Lucky number: value == frequency
            if (key === val) {
                  res = Math.max(res, key); // Track max lucky number
            }
      }

      return res; // Return result
};
