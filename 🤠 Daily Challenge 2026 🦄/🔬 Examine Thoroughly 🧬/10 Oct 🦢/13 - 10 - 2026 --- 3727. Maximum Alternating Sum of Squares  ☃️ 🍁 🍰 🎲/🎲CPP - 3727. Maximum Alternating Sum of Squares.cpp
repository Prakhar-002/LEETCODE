//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3727

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
      long long maxAlternatingSum(vector<int>& nums) {
            int n = nums.size();
            vector<long long> squared(n);

            // Compute square for each element using 64-bit integer
            for (int i = 0; i < n; ++i) {
                  squared[i] = static_cast<long long>(nums[i]) * nums[i];
            }

            // Sort squares in ascending order
            sort(squared.begin(), squared.end());

            long long negSum = 0;
            long long posSum = 0;

            // Smallest n / 2 elements receive negative signs
            for (int i = 0; i < n / 2; ++i) {
                  negSum += squared[i];
            }

            // Largest elements receive positive signs
            for (int i = n / 2; i < n; ++i) {
                  posSum += squared[i];
            }

            return posSum - negSum;
      }
};