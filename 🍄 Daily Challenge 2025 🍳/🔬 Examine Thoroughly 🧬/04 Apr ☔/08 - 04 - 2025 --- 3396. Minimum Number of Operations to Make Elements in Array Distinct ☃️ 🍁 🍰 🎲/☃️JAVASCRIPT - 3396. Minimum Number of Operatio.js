//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3396

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minimumOperations = function (nums) {
      // Initialize a set to store unique elements from the end
      const unique_set = new Set();

      // Traverse the array from the end
      for (let i = nums.length - 1; i >= 0; i--) {
            // If a duplicate is found, break the loop
            if (unique_set.has(nums[i])) {
                  break;
            }

            // Otherwise, add the number to the set
            unique_set.add(nums[i]);
      }

      // Calculate the number of elements before the unique suffix
      const rem_len = nums.length - unique_set.size;

      // Calculate the minimum number of operations
      return rem_len % 3 === 0 ? rem_len / 3 : Math.floor(rem_len / 3) + 1;
};
