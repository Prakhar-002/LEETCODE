//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3487

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxSum = function (nums) {

      // Create a Set containing only positive numbers from the array
      // The Set ensures that duplicates are removed automatically
      const positiveNumsSet = new Set(nums.filter((num) => num > 0));

      // If there are no positive numbers, return the maximum number from the array
      // Otherwise, sum up all the unique positive numbers using reduce
      return positiveNumsSet.size === 0
            ? Math.max(...nums) // Spread operator to find max in the entire array
            : [...positiveNumsSet].reduce((a, b) => a + b, 0); // Convert Set to array, then sum
};
