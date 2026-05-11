//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2770

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
      int n;

      int solve(int i, vector<int>& nums, int target, vector<int>& t) {
            // Reached last index — no more jumps needed
            if (i == n - 1)
                  return t[i] = 0;

            // Return cached result if already computed
            if (t[i] != INT_MIN)
                  return t[i];

            int result = INT_MIN;

            // Try every index ahead as a potential next jump
            for (int j = i + 1; j < n; j++) {
                  // Only jump if difference is within target
                  if (abs(nums[i] - nums[j]) <= target) {
                        int temp = 1 + solve(j, nums, target, t);
                        result   = max(result, temp);
                  }
            }

            return t[i] = result;
      }

      int maximumJumps(vector<int>& nums, int target) {
            n = nums.size();
            // Fill memo table with INT_MIN as "not yet computed" sentinel
            vector<int> t(n + 1, INT_MIN);

            int result = solve(0, nums, target, t);
            // Negative result means no valid path to last index
            return result < 0 ? -1 : result;
      }
};