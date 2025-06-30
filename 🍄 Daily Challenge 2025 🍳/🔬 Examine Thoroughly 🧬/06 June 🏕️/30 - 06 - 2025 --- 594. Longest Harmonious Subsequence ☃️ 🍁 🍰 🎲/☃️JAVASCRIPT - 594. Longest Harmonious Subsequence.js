//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 594

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var findLHS = function (nums) {
      const freq = new Map();

      // Count frequency of each number
      for (let num of nums) {
            freq.set(num, (freq.get(num) || 0) + 1);
      }

      let maxLength = 0;

      for (let [num, count] of freq) {
            // If num + 1 exists in the map
            if (freq.has(num + 1)) {
                  maxLength = Math.max(maxLength, count + freq.get(num + 1));
            }
      }

      return maxLength;
};