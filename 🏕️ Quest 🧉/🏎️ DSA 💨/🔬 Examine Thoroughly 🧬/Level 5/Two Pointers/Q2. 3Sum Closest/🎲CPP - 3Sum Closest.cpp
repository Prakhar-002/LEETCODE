//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include math>
using namespace std;

class Solution {
public:
      int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());           // Sort array
            int closestSum = nums[0] + nums[1] + nums[2];  // Initialize closest sum

            int n = nums.size();
            for (int i = 0; i < n - 2; i++) {
                  int l = i + 1, r = n - 1;

                  while (l < r) {
                        int currentSum = nums[i] + nums[l] + nums[r];

                        if (abs(currentSum - target) < abs(closestSum - target)) {
                              closestSum = currentSum;
                        }

                        if (currentSum < target) {
                              l++;  // Need bigger sum
                        } else if (currentSum > target) {
                              r--;  // Need smaller sum
                        } else {
                              return currentSum;  // Exact match
                        }
                  }
            }
            return closestSum;
      }
};
