//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var smallerNumbersThanCurrent = function (nums) {
      const sortedNums = [...nums].sort((a, b) => a - b);
      const rank = new Map();

      // Assign rank (index) to each unique number
      sortedNums.forEach((num, idx) => {
            if (!rank.has(num)) rank.set(num, idx);
      });

      // Map each number in original nums to its rank
      return nums.map(num => rank.get(num));
};
