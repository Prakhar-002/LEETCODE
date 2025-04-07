//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 368

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var largestDivisibleSubset = function (nums) {
      // Sort the array so smaller divisors come before larger multiples
      nums.sort((a, b) => a - b);
      const n = nums.length;

      const dp = Array(n).fill(1);        // dp[i] = length of subset ending at nums[i]
      const parent = Array(n).fill(-1);   // parent[i] = previous index in subset chain

      let maxLen = 0;       // Maximum subset length found
      let maxIndex = -1;    // Ending index of that subset

      // Loop through each number in array
      for (let i = 0; i < n; i++) {
            for (let j = 0; j < i; j++) {
                  // If nums[i] is divisible by nums[j] and gives longer subset
                  if (nums[i] % nums[j] === 0 && dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;       // Update longest chain
                        parent[i] = j;           // Set parent
                  }
            }
            // Track the maximum subset found
            if (dp[i] > maxLen) {
                  maxLen = dp[i];
                  maxIndex = i;
            }
      }

      const resSet = [];  // Final result subset

      // Backtrack using parent array
      while (maxIndex !== -1) {
            resSet.push(nums[maxIndex]);      // Add current number
            maxIndex = parent[maxIndex];   // Move to parent index
      }

      return resSet;  // Return the largest divisible subset
};
