//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3423

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      // Function to find the maximum adjacent difference in the array
      int maxAdjacentDistance(vector<int>& nums) {
            int n = nums.size(); // Get the size of the vector
            int maxDiff = abs(nums[n - 1] - nums[0]); // Initialize maxDiff with the difference between first and last element

            // Iterate through the array to find the max adjacent difference
            for (int i = 1; i < n; i++) {
                  maxDiff = max(maxDiff, abs(nums[i] - nums[i - 1]));
            }

            return maxDiff; // Return the maximum adjacent difference
      }
};
