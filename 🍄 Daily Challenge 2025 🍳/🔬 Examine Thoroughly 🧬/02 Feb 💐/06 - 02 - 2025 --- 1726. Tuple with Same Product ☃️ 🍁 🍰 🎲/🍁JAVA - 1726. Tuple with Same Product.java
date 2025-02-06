//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1726

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.HashMap;

class Solution {
      public int tupleSameProduct(int[] nums) {
            // HashMap to store the frequency of each product
            HashMap<Integer, Integer> productCount = new HashMap<>();

            int tuples = 0;

            // Iterate over all pairs of numbers
            for (int i = 0; i < nums.length; i++) {
                  for (int j = i + 1; j < nums.length; j++) { // Avoid duplicate pairs
                        int product = nums[i] * nums[j];

                        // If this product has been seen before, update tuplesult
                        tuples += productCount.getOrDefault(product, 0) * 8;

                        // Increment the count of this product
                        productCount.put(product, productCount.getOrDefault(product, 0) + 1);
                  }
            }

            return tuples;
      }
}

//!------------------------------------------------------------------------------------------------------ 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      public int tupleSameProduct(int[] nums) {
            // HashMap to store the frequency of each product
            HashMap<Integer, Integer> productCount = new HashMap<>();
            
            // Iterate over all pairs of numbers in nums
            for (int i = 0; i < nums.length; i++) {
                  for (int j = i + 1; j < nums.length; j++) { // Start from i + 1 to avoid duplicate pairs
                        int product = nums[i] * nums[j];
                        
                        // Increment the count of this product
                        productCount.put(product, productCount.getOrDefault(product, 0) + 1);
                  }
            }

            int tuples = 0; // Variable to store the count of valid tuples

            // Calculate the number of valid tuples
            for (int val : productCount.values()) {
                  if (val > 1) {
                        // Using formula: val * (val - 1) * 4
                        // This counts all possible (a, b, c, d) tuples that satisfy the condition
                        tuples += val * (val - 1) * 4;
                  }
            }

            return tuples;
      }
}
