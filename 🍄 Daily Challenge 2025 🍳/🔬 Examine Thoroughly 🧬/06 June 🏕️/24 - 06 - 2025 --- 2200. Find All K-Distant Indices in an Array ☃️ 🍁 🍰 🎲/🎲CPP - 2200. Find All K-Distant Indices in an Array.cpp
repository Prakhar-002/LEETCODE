//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2200

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<int> findKDistantIndices(vector<int> &nums, int key, int k) {
            vector<int> res;
            int r = 0; // r keeps track of the last unprocessed index
            int n = nums.size();

            // Traverse array to find all positions with value == key
            for (int j = 0; j < n; ++j) {
                  if (nums[j] == key) {
                        // Compute left and right bounds of range to process
                        int l = max(r, j - k);
                        r = min(n - 1, j + k) + 1;

                        // Add all indices in [l, r) to the result vector
                        for (int i = l; i < r; ++i) {
                              res.push_back(i);
                        }
                  }
            }

            return res;
      }
};
