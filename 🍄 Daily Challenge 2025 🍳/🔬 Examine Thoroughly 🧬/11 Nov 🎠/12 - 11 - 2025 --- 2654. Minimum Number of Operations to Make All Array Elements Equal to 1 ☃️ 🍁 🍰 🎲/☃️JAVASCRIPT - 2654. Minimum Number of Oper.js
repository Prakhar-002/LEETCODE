//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2654

//? ⌚ Time complexity ➺ O(n^2 log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minOperations = function (nums) {
      const n = nums.length;
      let num1 = 0;    // Count of elements already equal to 1
      let g = 0;       // GCD of all elements in nums

      // Helper function to compute GCD using Euclidean algorithm
      const gcd = (a, b) => {
            while (b !== 0) {
                  const temp = b;
                  b = a % b;
                  a = temp;
            }
            return a;
      };

      // Calculate number of ones and overall GCD of array
      for (const x of nums) {
            if (x === 1) {
                  num1++;
            }
            g = gcd(g, x);
      }

      // If there is at least one 1, number of operations = count of other elements
      if (num1 > 0) {
            return n - num1;
      }
      // If overall gcd is greater than 1, it's impossible to reduce all to 1
      if (g > 1) {
            return -1;
      }

      // Find minimum length of subarray with gcd 1
      let minLen = n;
      for (let i = 0; i < n; i++) {
            let currentGcd = 0;
            for (let j = i; j < n; j++) {
                  currentGcd = gcd(currentGcd, nums[j]);
                  if (currentGcd === 1) {
                        minLen = Math.min(minLen, j - i + 1);
                        break;    // Once gcd 1 found, no need to check longer subarrays from i
                  }
            }
      }

      // Calculate total operations:
      // (minLen - 1) operations to create a 1 from that subarray plus (n - 1) operations to spread it
      return minLen - 1 + n - 1;
};
