//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2784

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var isGood = function(nums) {
      // Build frequency map for all numbers
      const countNum = new Map();
      let maxNum = 0;

      for (const num of nums) {
            countNum.set(num, (countNum.get(num) || 0) + 1);
            // Track max while building the map
            maxNum = Math.max(maxNum, num);
      }

      // Max value must appear exactly twice (as per problem definition)
      if (countNum.get(maxNum) !== 2)
            return false;

      // Every value from 1 to maxNum-1 must appear exactly once
      for (let i = maxNum - 1; i >= 1; i--) {
            if ((countNum.get(i) || 0) !== 1)
                  return false;
      }

      return true; 
};