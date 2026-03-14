//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 152

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maxProduct(vector<int>& nums) {

            // 'low'  → minimum product ending at current position
            // 'high' → maximum product ending at current position
            int low = 1, high = 1;

            // Initialize result with maximum element in array
            int res = *max_element(nums.begin(), nums.end());

            for (int n : nums) {

                  // Agar element 0 hai to product reset
                  if (n == 0) {
                        low = 1;
                        high = 1;
                        continue;
                  }

                  int tempLow = low;
                  int tempHigh = high;

                  // Check 3 possibilities
                  low = min({tempHigh * n, tempLow * n, n});
                  high = max({tempHigh * n, tempLow * n, n});

                  // Update result
                  res = max(res, high);
            }

            return res;
      }
};