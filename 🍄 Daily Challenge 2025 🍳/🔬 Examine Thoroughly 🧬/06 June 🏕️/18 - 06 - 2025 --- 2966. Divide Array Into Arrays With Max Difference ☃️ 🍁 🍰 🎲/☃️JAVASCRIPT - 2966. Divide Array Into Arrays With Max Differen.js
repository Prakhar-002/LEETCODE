//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2966

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var divideArray = function (nums, k) {
      // Step 1: Sort the array to group close values together
      nums.sort((a, b) => a - b);

      const res = [];

      // Step 2: Iterate through the array in steps of 3
      for (let i = 0; i < nums.length; i += 3) {
            // Step 3: Check if the current group can form a valid triplet
            // The condition ensures the largest and smallest in the group
            // are within 'k' difference
            if (nums[i + 2] - nums[i] > k) {
                  return [];  // Invalid group, return empty result
            }

            // Step 4: Append the valid triplet to the result
            res.push([nums[i], nums[i + 1], nums[i + 2]]);
      }

      return res;  // Step 5: Return the final list of all valid triplets
};
