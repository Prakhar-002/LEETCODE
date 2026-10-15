//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2713

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int sumCounts(vector<int>& nums) {
            int n = nums.size();
            int res = 0;

            // Iterate over all starting indices i
            for (int i = 0; i < n; ++i) {
                  unordered_set<int> seen;
                  // Expand the subarray from index i to j
                  for (int j = i; j < n; ++j) {
                        // Insert element into unique set
                        seen.insert(nums[j]);
                        int distinctCount = seen.size();
                        // Accumulate squared distinct element count
                        res += distinctCount * distinctCount;
                  }
            }

            return res;
      }
};