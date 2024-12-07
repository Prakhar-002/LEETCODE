//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1760

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Helper function to check if the division is possible
      bool canDivide(const vector<int>& nums, int maxBalls, int maxOperations) {
            int operations = 0;

            for (int n : nums) {
                  // Calculate operations needed for the current bag
                  operations += ceil((double)n / maxBalls) - 1;

                  // If operations exceed the limit, return false
                  if (operations > maxOperations) {
                        return false;
                  }
            }

            return true; // Division is possible
      }

      // Main function to find the minimum possible maximum size
      int minimumSize(vector<int>& nums, int maxOperations) {
            int left = 1, right = *max_element(nums.begin(), nums.end());

            while (left < right) {
                  int mid = left + (right - left) / 2;

                  if (canDivide(nums, mid, maxOperations)) {
                        right = mid; // Reduce upper bound
                  } else {
                        left = mid + 1; // Increase lower bound
                  }
            }

            return left; // The smallest maximum size
      }
};
