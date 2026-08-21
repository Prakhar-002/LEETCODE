//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3069

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var resultArray = function(nums) {
      // Initialize arr1 and arr2 with initial elements
      const arr1 = [nums[0]];
      const arr2 = [nums[1]];

      // Distribute the rest of the array elements
      for (let i = 2; i < nums.length; i++) {
            if (arr1[arr1.length - 1] > arr2[arr2.length - 1]) {
                  arr1.push(nums[i]);
            } else {
                  arr2.push(nums[i]);
            }
      }

      // Return the concatenated array
      return arr1.concat(arr2);
};