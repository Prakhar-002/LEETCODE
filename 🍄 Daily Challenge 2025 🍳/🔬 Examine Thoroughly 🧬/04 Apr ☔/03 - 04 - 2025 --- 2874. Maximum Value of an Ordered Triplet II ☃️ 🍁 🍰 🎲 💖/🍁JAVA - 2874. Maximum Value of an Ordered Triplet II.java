//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2873

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public long maximumTripletValue(int[] nums) {
            int n = nums.length;
            long maxTripletValue = 0; // Stores the maximum triplet value
            long maxSeen = 0; // Tracks the maximum value encountered
            long maxDifference = 0; // Stores the maximum (maxSeen - nums[k]) value

            for (int k = 0; k < n; k++) {
                  // Compute the maximum possible value of (nums[i] - nums[j]) * nums[k]
                  maxTripletValue = Math.max(maxTripletValue, maxDifference * nums[k]);

                  // Update maxDifference to track the highest (maxSeen - nums[k]) encountered
                  maxDifference = Math.max(maxDifference, maxSeen - nums[k]);

                  // Update maxSeen to track the highest value seen so far
                  maxSeen = Math.max(maxSeen, nums[k]);
            }

            return maxTripletValue; // Return the maximum triplet value found
      }
}


//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

//* Greedy + Prefix Suffix Array  

class Solution {
      public long maximumTripletValue(int[] nums) {
            int n = nums.length; // Get the length of the array

            int[] leftMax = new int[n]; // Array to store the maximum value to the left of each index
            int[] rightMax = new int[n]; // Array to store the maximum value to the right of each index

            // Compute leftMax and rightMax arrays
            for (int i = 1; i < n; i++) {
                  leftMax[i] = Math.max(leftMax[i - 1], nums[i - 1]); // Max value from index 0 to i-1
                  rightMax[n - 1 - i] = Math.max(rightMax[n - i], nums[n - i]); // Max value from i+1 to end
            }

            long maxTripletValue = 0; // Variable to store the maximum triplet value

            // Iterate over each possible middle element of the triplet
            for (int j = 1; j < n - 1; j++) {
                  maxTripletValue = Math.max(maxTripletValue, (long) (leftMax[j] - nums[j]) * rightMax[j]);
            }

            return maxTripletValue; // Return the maximum triplet value
      }
}
