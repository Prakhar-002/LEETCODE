//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1004

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
      int longestOnes(vector<int>& nums, int k) {
            int l = 0; // Initialize the left pointer of the sliding window
            int curZero = 0; // Count of zeros in the current window
            int consecutiveOne = 0; // Maximum length of subarray with at most 'k' zeros

            // Iterate through the array using the right pointer
            for (int r = 0; r < nums.size(); r++) {
                  // Increment the zero count if the current number is 0
                  if (nums[r] == 0) {
                        curZero++;
                  }

                  // If the number of zeros exceeds 'k', shrink the window from the left
                  while (curZero > k) {
                        if (nums[l] == 0) {
                              curZero--;
                        }
                        l++; // Move the left pointer to the right
                  }

                  // Update the maximum length of the valid window
                  consecutiveOne = max(consecutiveOne, r - l + 1);
            }

            // Return the maximum length found
            return consecutiveOne;
      }
};
