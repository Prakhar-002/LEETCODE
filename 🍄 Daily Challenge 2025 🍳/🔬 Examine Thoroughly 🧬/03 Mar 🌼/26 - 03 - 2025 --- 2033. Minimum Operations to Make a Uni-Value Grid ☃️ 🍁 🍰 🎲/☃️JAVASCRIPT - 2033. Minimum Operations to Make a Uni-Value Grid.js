//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2033

// ? ⌚ Time complexity ➺ O(n * m log n * m) 👉🏻  n = len(grid)

// ? 🧺 Space complexity ➺ O(n * m)         👉🏻  m = len(grid[0])

var minOperations = function (grid, x) {
      // Initialize total sum of elements
      let total = 0;

      // Iterate over each row in the grid
      for (let row of grid) {
            for (let n of row) {
                  total += n; // Add element to total sum

                  // Check if all elements have the same remainder when divided by x
                  if (n % x !== grid[0][0] % x) {
                        return -1; // If not, return -1 since equalizing is impossible
                  }
            }
      }

      // Flatten the grid into a 1D list
      let nums = [];
      for (let row of grid) {
            for (let n of row) {
                  nums.push(n);
            }
      }

      // Sort the flattened list to find the median efficiently
      nums.sort((a, b) => a - b);

      // Initialize prefix sum and minimum operations result
      let prefixSum = 0;
      let minOperations = Infinity;

      // Iterate over sorted elements to compute minimum operations
      for (let i = 0; i < nums.length; i++) {
            // Cost to adjust all elements before index 'i' to nums[i]
            let costLeft = nums[i] * i - prefixSum;

            // Cost to adjust all elements after index 'i' to nums[i]
            let costRight = total - prefixSum - (nums[i] * (nums.length - i));

            // Compute the total operations needed
            let operation = (costLeft + costRight) / x;

            // Store the minimum operations required
            minOperations = Math.min(minOperations, operation);

            // Update prefix sum with the current element
            prefixSum += nums[i];
      }

      return minOperations; // Return the minimum number of operations needed
}