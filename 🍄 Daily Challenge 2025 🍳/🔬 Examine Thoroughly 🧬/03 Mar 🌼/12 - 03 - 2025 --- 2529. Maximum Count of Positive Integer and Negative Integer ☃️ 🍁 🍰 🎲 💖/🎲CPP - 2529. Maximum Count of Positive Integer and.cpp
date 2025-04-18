//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2529

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // Function to count negative numbers using binary search
      int countNegatives(vector<int>& nums) {
            int left = 0, right = nums.size() - 1; // Define search boundaries

            while (left <= right) {
                  int mid = (left + right) / 2; // Find middle index

                  if (nums[mid] < 0) {
                        left = mid + 1; // Move right to find first non-negative number
                  } else {
                        right = mid - 1; // Search in the left half
                  }
            }

            return left; // Index of first non-negative number = count of negatives
      }

      // Function to count positive numbers using binary search
      int countPositives(vector<int>& nums) {
            int left = 0, right = nums.size() - 1; // Define search boundaries

            while (left <= right) {
                  int mid = (left + right) / 2; // Find middle index

                  if (nums[mid] <= 0) {
                        left = mid + 1; // Move right to find first positive number
                  } else {
                        right = mid - 1; // Search in the left half
                  }
            }

            return nums.size() - left; // Count of positive numbers
      }

      // Function to return the maximum count of either negative or positive numbers
      int maximumCount(vector<int>& nums) {
            int negCount = countNegatives(nums); // Count negative numbers
            int posCount = countPositives(nums); // Count positive numbers

            return max(negCount, posCount); // Return the larger count
      }
};
