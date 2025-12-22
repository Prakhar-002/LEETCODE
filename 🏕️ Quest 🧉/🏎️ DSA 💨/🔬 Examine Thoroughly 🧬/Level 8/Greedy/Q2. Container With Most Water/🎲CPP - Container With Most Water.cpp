//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 11

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(height)

//? 🧺 Space complexity ➺ O(1)

#include<vector>
using namespace std;

class Solution {
      public:
            int maxArea(vector<int>& height) {
                  // Initialize two pointers: one at the beginning and one at the end of the array
                  int left = 0;
                  int right = height.size() - 1;

                  // Variable to store the maximum water area found
                  int maxWater = 0;

                  // Iterate until the two pointers meet
                  while (left <= right) {
                        // Calculate the current water area and update the maximum if this area is larger
                        maxWater = max((right - left) * min(height[left], height[right]), maxWater);

                        // Move the pointer corresponding to the smaller height inward
                        if (height[left] < height[right]) {
                              left++;
                        } else {
                              right--;
                        }
                  }

                  // Return the maximum water area found
                  return maxWater;
            }
};