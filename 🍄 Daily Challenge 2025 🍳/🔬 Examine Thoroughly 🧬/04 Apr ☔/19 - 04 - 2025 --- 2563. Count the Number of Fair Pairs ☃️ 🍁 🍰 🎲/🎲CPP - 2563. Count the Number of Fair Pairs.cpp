//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2563

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long countFairPairs(vector<int>& nums, int lower, int upper) {
            // Sort the input array to enable two-pointer approach
            sort(nums.begin(), nums.end());

            // Count how many pairs have sum <= upper
            // Subtract pairs with sum <= lower - 1 to get those in [lower, upper]
            return count(nums, upper) - count(nums, lower - 1);
      }

private:
      long long count(const vector<int>& nums, int target) {
            long long res = 0;                     // Initialize result counter
            int left = 0;                           // Start pointer
            int right = nums.size() - 1;            // End pointer

            // Use two-pointer approach to count pairs with sum <= target
            while (left < right) {
                  if (nums[left] + nums[right] > target) {
                        // If sum is too large, move right pointer leftward
                        right--;
                  } else {
                        // All pairs (left, left+1, ..., right) are valid
                        res += (right - left);      
                        left++;                     // Move left pointer to next element
                  }
            }

            return res;                             // Return total valid pairs
      }
};
