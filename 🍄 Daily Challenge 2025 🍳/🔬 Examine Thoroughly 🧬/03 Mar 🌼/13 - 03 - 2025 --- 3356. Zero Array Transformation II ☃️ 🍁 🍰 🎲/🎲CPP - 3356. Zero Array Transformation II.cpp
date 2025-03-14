//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3356

// ? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)    👉🏻  m = len(queries)

#include <vector>
using namespace std;

class Solution {
public:
      int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size(); // Length of the nums array
            int totalSum = 0; // Tracks cumulative sum of differences applied
            int k = 0; // Number of operations needed
            vector<int> diffArr(n + 1, 0); // Difference array to apply operations efficiently

            // Iterate through the nums array
            for (int i = 0; i < n; i++) {
                  // Ensure totalSum + diffArr[i] reaches nums[i]
                  while (totalSum + diffArr[i] < nums[i]) {
                        k++; // Increment operation count

                        // If more queries are required than available, return -1 (not possible)
                        if (k > queries.size()) {
                              return -1;
                        }

                        int left = queries[k - 1][0], right = queries[k - 1][1], val = queries[k - 1][2];

                        // If range [left, right] covers index `i`, apply difference array update
                        if (right >= i) {
                              diffArr[max(left, i)] += val; // Increase values from max(left, i)
                              diffArr[right + 1] -= val; // Decrease after right + 1
                        }
                  }

                  // Update total sum after applying the difference array
                  totalSum += diffArr[i];
            }

            return k; // Return the minimum number of queries required
      }
};
