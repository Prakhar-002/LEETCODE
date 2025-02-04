//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1800 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxAscendingSum(vector<int>& nums) {
            // Initialize maxSum to store the maximum ascending sum
            int maxSum = nums[0];  
            // curSum stores the sum of the current ascending subarray
            int curSum = nums[0];  

            // Iterate through the vector from index 1
            for (size_t i = 1; i < nums.size(); i++) {
                  // Check if the current element is greater than the previous one (strictly increasing)
                  if (nums[i - 1] < nums[i]) {  
                        curSum += nums[i];  // Add the current element to curSum
                  } else {
                        maxSum = max(maxSum, curSum);  // Update maxSum if curSum is greater
                        curSum = nums[i];  // Start a new subarray sum with current element
                  }
            }

            return max(maxSum, curSum);  // Return the maximum found sum
      }
};
