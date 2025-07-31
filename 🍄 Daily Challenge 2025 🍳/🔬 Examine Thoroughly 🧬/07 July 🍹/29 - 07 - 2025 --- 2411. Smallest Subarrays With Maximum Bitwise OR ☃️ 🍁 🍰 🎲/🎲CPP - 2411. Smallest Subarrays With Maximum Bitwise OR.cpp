//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2411

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<int> smallestSubarrays(vector<int>& nums) {
            int n = nums.size();

            // Track the last seen index for each bit
            vector<int> lastSeen(30, 0);

            // Initialize result with 1s
            vector<int> res(n, 1);

            // Traverse the array from right to left
            for (int i = n - 1; i >= 0; --i) {
                  for (int bit = 0; bit < 30; ++bit) {
                        // If bit is set in current number
                        if ((nums[i] & (1 << bit)) > 0) {
                              lastSeen[bit] = i;
                        }

                        // Calculate the minimum subarray length
                        res[i] = max(res[i], lastSeen[bit] - i + 1);
                  }
            }

            return res;
      }
};
