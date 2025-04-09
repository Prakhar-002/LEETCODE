//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minOperations = function (nums, k) {
      const unique_set = new Set();  // To hold unique numbers

      for (let num of nums) {
            if (num < k) {
                  return -1;  // If any number is less than k, return -1
            }

            unique_set.add(num);  // Add to set
      }

      // If k is in set, subtract 1; else return size
      return unique_set.has(k) ? unique_set.size - 1 : unique_set.size;
};
