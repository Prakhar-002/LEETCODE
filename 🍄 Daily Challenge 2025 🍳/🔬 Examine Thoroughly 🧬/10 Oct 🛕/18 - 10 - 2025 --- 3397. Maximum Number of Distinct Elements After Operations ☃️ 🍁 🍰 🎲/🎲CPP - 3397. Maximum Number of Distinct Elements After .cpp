//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3397

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
      int maxDistinctElements(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());

            int cnt = 0;              // Counts maximum distinct elements
            int prev = INT_MIN;       // Last assigned value, initially very low

            for (int num : nums) {
                  // Assign current value within [num - k, num + k]
                  // Ensure strictly greater than previous assigned
                  int curr = min(max(num - k, prev + 1), num + k);

                  if (curr > prev) {
                        cnt++;
                        prev = curr;  // Update last assigned value
                  }
            }

            return cnt;
      }
};
