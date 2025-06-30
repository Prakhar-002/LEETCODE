//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1498

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int numSubseq(vector<int>& nums, int target) {
            const int mod = 1e9 + 7;
            int n = nums.size();

            // Step 1: Sort the array
            sort(nums.begin(), nums.end());

            // Step 2: Precompute powers of 2 modulo mod
            vector<int> power(n, 1);

            for (int i = 1; i < n; ++i) {
                  power[i] = (power[i - 1] * 2) % mod;
            }

            int left = 0, right = n - 1;
            int result = 0;

            // Step 3: Two-pointer technique
            while (left <= right) {
                  if (nums[left] + nums[right] <= target) {
                        // Add all valid subsequences between left and right
                        result = (result + power[right - left]) % mod;
                        ++left;      // Try bigger left
                  } else {
                        --right;     // Try smaller right
                  }
            }

            return result;
      }
};
