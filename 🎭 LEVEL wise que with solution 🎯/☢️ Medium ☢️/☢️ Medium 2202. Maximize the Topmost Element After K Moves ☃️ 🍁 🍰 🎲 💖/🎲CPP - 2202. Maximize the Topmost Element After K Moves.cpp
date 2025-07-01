//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maximumTop(vector<int> &nums, int k) {
            int n = nums.size();

            // Case 1: Only one element and odd k → cannot have non-empty stack
            if (n == 1 && k % 2 == 1)
                  return -1;

            // Case 2: k == 0 → No operation, just return top
            if (k == 0)
                  return nums[0];

            // Case 3: k == 1 → Remove top, can only return next (if exists)
            if (k == 1) {
                  return (n > 1 ? nums[1] : -1);
            }

            // General case: consider max of first (k - 1) elements and nums[k] (if exists)
            int maxVal = INT_MIN;
            int limit = min(n, k - 1); // We can only remove at most (k - 1) items safely

            for (int i = 0; i < limit; ++i) {
                  maxVal = max(maxVal, nums[i]);
            }

            // If k < n, we can push nums[k] back to top after popping k elements
            if (k < n) {
                  maxVal = max(maxVal, nums[k]);
            }

            return maxVal;
      }
};
