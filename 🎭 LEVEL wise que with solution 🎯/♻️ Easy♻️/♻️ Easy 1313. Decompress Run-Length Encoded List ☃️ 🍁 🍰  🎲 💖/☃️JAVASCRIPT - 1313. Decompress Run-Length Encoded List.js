//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1313

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var decompressRLElist = function (nums) {
      const res = []; // Array to store the result

      // Loop through the input array with steps of 2
      for (let i = 0; i < nums.length; i += 2) {
            const freq = nums[i];        // Frequency of the value
            const val = nums[i + 1];     // Value to be repeated

            // Add 'val' to the result 'freq' times
            for (let j = 0; j < freq; j++) {
                  res.push(val);
            }
      }

      return res; // Return the decompressed array
};
