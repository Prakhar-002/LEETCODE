//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1726

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var tupleSameProduct = function (nums) {
      // Map to store the frequency of each product
      let productCount = new Map();

      let tuples = 0;

      // Iterate over all pairs of numbers
      for (let i = 0; i < nums.length; i++) {
            for (let j = i + 1; j < nums.length; j++) { // Avoid duplicate pairs
                  let product = nums[i] * nums[j];

                  // If this product has been seen before, update result
                  tuples += (productCount.get(product) || 0) * 8;

                  // Increment the count of this product
                  productCount.set(product, (productCount.get(product) || 0) + 1);
            }
      }

      return tuples;
}

//!------------------------------------------------------------------------------------------------------ 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var tupleSameProduct = function (nums) {
      // Map to store the frequency of each product
      let productCount = new Map();

      // Iterate over all pairs of numbers in nums
      for (let i = 0; i < nums.length; i++) {
            for (let j = i + 1; j < nums.length; j++) { // Start from i + 1 to avoid duplicate pairs
                  let product = nums[i] * nums[j];

                  // Increment the count of this product
                  productCount.set(product, (productCount.get(product) || 0) + 1);
            }
      }

      let tuples = 0; // Variable to store the count of valid tuples

      // Calculate the number of valid tuples
      for (let val of productCount.values()) {
            if (val > 1) {
                  // Using formula: val * (val - 1) * 4
                  // This counts all possible (a, b, c, d) tuples that satisfy the condition
                  tuples += val * (val - 1) * 4;
            }
      }

      return tuples;
}