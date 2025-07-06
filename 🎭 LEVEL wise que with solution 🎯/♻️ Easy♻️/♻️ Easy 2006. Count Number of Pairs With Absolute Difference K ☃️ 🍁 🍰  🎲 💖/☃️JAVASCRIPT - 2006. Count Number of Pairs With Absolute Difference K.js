//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2006

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = Unique(nums)

var countKDifference = function (nums, k) {
      const countMap = new Map();

      // Count frequency of each number
      for (const num of nums) {
            countMap.set(num, (countMap.get(num) || 0) + 1);
      }

      let pairs = 0;

      // For each key, check if (num + k) exists in map
      for (const [num, freq] of countMap.entries()) {
            if (countMap.has(num + k)) {
                  pairs += freq * countMap.get(num + k);
            }
      }

      return pairs;
};
