//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3356

// ? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)    👉🏻  m = len(queries)

var minZeroArray = function (nums, queries) {
      let n = nums.length; // Length of nums array
      let totalSum = 0; // Tracks the cumulative sum of differences applied
      let k = 0; // Number of operations needed
      let diffArr = new Array(n + 1).fill(0); // Difference array

      // Iterate through the nums array
      for (let i = 0; i < n; i++) {
            // Ensure totalSum + diffArr[i] reaches nums[i]
            while (totalSum + diffArr[i] < nums[i]) {
                  k++; // Increment operation count

                  // If more queries are required than available, return -1 (not possible)
                  if (k > queries.length) {
                        return -1;
                  }

                  let [left, right, val] = queries[k - 1]; // Get the next query

                  // If range [left, right] covers index `i`, apply difference array update
                  if (right >= i) {
                        diffArr[Math.max(left, i)] += val; // Increase values from max(left, i)
                        diffArr[right + 1] -= val; // Decrease after right + 1
                  }
            }

            // Update total sum after applying the difference array
            totalSum += diffArr[i];
      }

      return k; // Return the minimum number of queries required
};
