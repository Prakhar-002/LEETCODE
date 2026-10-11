//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2778

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>

class Solution {
public:
      int sumOfSquares(vector<int>& nums) {
            int res = 0;
            int n = nums.size();

            // Iterate using 1-based indices
            for (int i = 1; i <= n; ++i) {
                  // Add the square of nums[i - 1] if i divides n
                  if (n % i == 0) {
                        res += nums[i - 1] * nums[i - 1];
                  }
            }

            return res;
      }
};