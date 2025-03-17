//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2206

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var divideArray = function (nums) {
      let freqMap = new Map();

      // Count occurrences of each number
      for (let num of nums) {
            freqMap.set(num, (freqMap.get(num) || 0) + 1);
      }

      // Check if every number appears an even number of times
      for (let count of freqMap.values()) {
            if (count % 2 !== 0) {
                  return false;
            }
      }

      return true;
};
