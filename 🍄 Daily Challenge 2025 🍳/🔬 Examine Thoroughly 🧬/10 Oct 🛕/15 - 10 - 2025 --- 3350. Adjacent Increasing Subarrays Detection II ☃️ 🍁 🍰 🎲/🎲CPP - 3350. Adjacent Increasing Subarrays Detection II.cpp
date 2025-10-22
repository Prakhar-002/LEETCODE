//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3350

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Calculates the maximum overlap between consecutive increasing subarrays
      int maxIncreasingSubarrays(vector<int>& nums) {
            int n = nums.size();     // Total elements
            int cnt = 1;             // Length of current increasing subarray
            int precnt = 0;          // Length of previous increasing subarray
            int ans = 0;             // Final result (maximum overlap)

            // Iterate through array elements
            for (int i = 1; i < n; ++i) {
                  // Continue the increasing subarray if the current number > previous one
                  if (nums[i] > nums[i - 1]) {
                        ++cnt;
                  } else {
                        // Sequence ended; store previous count and reset for new sequence
                        precnt = cnt;
                        cnt = 1;
                  }

                  // Option 1: Adjacent overlapping increasing subarrays
                  ans = max(ans, min(precnt, cnt));

                  // Option 2: One long increasing sequence split into two equal halves
                  ans = max(ans, cnt / 2);
            }

            // Return largest valid overlap or half-length
            return ans;
      }
};
