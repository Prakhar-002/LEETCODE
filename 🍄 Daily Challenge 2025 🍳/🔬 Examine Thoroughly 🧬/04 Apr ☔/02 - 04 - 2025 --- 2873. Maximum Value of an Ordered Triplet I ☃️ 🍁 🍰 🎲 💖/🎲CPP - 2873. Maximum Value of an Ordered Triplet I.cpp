//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2873

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long maximumTripletValue(vector<int> &nums) {
            int n = nums.size();
            long long maxTripletValue = 0; // Stores the maximum triplet value
            long long maxSeen = 0;         // Tracks the maximum value encountered
            long long maxDifference = 0;   // Stores the maximum (maxSeen - nums[k]) value

            for (int k = 0; k < n; k++) {
                  // Compute the maximum possible value of (nums[i] - nums[j]) * nums[k]
                  maxTripletValue = max(maxTripletValue, maxDifference * nums[k]);

                  // Update maxDifference to track the highest (maxSeen - nums[k]) encountered
                  maxDifference = max(maxDifference, maxSeen - nums[k]);

                  // Update maxSeen to track the highest value seen so far
                  maxSeen = max(maxSeen, (long long)nums[k]);
            }

            return maxTripletValue; // Return the maximum triplet value found
      }
};

//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

//* Greedy + Prefix Suffix Array  

class Solution {
public:
      long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size(); // Get the length of the vector

            vector<int> leftMax(n, 0); // Array to store max value to the left of each index
            vector<int> rightMax(n, 0); // Array to store max value to the right of each index

            // Compute leftMax and rightMax arrays
            for (int i = 1; i < n; i++) {
                  leftMax[i] = max(leftMax[i - 1], nums[i - 1]); // Max value from index 0 to i-1
                  rightMax[n - 1 - i] = max(rightMax[n - i], nums[n - i]); // Max value from i+1 to end
            }

            long long maxTripletValue = 0; // Variable to store the maximum triplet value

            // Iterate over each possible middle element of the triplet
            for (int j = 1; j < n - 1; j++) {
                  maxTripletValue = max(maxTripletValue, (long long) (leftMax[j] - nums[j]) * rightMax[j]);
            }

            return maxTripletValue; // Return the maximum triplet value
      }
};


//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

//* Greedy   

class Solution {
public:
      long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size(); // Get the length of the vector
            long long maxTripletValue = 0; // Variable to store the maximum triplet value

            // Iterate over the last element (k) of the triplet starting from index 2
            for (int k = 2; k < n; k++) {
                  int maxPrefix = nums[0]; // Initialize maxPrefix with the first element

                  // Iterate over the second element (j) of the triplet
                  for (int j = 1; j < k; j++) {
                        // Calculate triplet value and update the maximum result
                        maxTripletValue = max(maxTripletValue, (long long) (maxPrefix - nums[j]) * nums[k]);

                        // Update maxPrefix to maintain the maximum value up to index j
                        maxPrefix = max(maxPrefix, nums[j]);
                  }
            }

            return maxTripletValue; // Return the maximum triplet value
      }
};


//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

//*  Three nested loops

class Solution {
public:
      long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size(); // Get the length of the vector
            long long maxTripletValue = 0; // Variable to store the maximum triplet value

            // Iterate over all possible triplets (i, j, k)
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        for (int k = j + 1; k < n; k++) {
                              // Compute the triplet value and update the maximum result
                              maxTripletValue = max(maxTripletValue, (long long) (nums[i] - nums[j]) * nums[k]);
                        }
                  }
            }

            return maxTripletValue; // Return the maximum triplet value
      }
};