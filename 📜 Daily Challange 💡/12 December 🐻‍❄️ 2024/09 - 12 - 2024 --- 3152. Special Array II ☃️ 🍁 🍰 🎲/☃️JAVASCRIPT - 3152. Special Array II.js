//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3125

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)  👉🏻 q = len(queries)

var isArraySpecial = function (nums, queries) {
      let n = nums.length;  // Length of the array
      let prevParity = nums[0] & 1;  // Parity of the first element
      let consecutiveSameParity = new Array(n);  // Tracks consecutive elements with the same parity
      let consecutiveCount = 0;  // Counter for consecutive elements with the same parity

      // Step 1: Precompute consecutive parity information
      for (let i = 0; i < n; i++) {
            let currentParity = nums[i] & 1;
            if (currentParity === prevParity) {
                  consecutiveCount++;
            }
            consecutiveSameParity[i] = consecutiveCount;
            prevParity = currentParity;
      }

      // Step 2: Process each query
      let results = [];
      for (let query of queries) {
            let startIndex = query[0];
            let endIndex = query[1];
            results.push(consecutiveSameParity[startIndex] === consecutiveSameParity[endIndex]);
      }

      return results;  // Return the results for all queries
};