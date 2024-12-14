//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 724

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include<vector>
using namespace std;

class Solution {
public:
      int pivotIndex(vector<int>& nums) {
            // Calculate the total sum of the array
            int totalSum = 0;
            for (int num : nums) {
                  totalSum += num;
            }

            // Initialize the running sum for the left side
            int leftSum = 0;

            // Iterate through the array to find the pivot index
            for (int i = 0; i < nums.size(); i++) {
                  // Right sum is totalSum minus leftSum minus the current element
                  int rightSum = totalSum - leftSum - nums[i];

                  // Check if left sum equals right sum
                  if (leftSum == rightSum) {
                        return i;
                  }

                  // Update left sum to include the current element
                  leftSum += nums[i];
            }

            // If no pivot index is found, return -1
            return -1;
      }
};


//!-------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int pivotIndex(vector<int>& nums) {
            int n = nums.size();

            // Vectors to store cumulative sums from the left and the right
            vector<int> leftSum(n, 0);
            vector<int> rightSum(n, 0);

            // Calculate the cumulative sum from the left
            for (int i = 1; i < n; i++) {
                  leftSum[i] = leftSum[i - 1] + nums[i - 1];
            }

            // Calculate the cumulative sum from the right
            for (int i = n - 2; i >= 0; i--) {
                  rightSum[i] = rightSum[i + 1] + nums[i + 1];
            }

            // Check for the pivot index where leftSum equals rightSum
            for (int i = 0; i < n; i++) {
                  if (leftSum[i] == rightSum[i]) {
                        return i; // Return the pivot index if found
                  }
            }

            // If no pivot index is found, return -1
            return -1;
      }
};
