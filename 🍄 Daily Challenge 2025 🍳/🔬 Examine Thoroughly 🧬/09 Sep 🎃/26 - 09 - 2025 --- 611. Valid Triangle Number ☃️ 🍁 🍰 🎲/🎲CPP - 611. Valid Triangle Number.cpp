//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 611

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int triangleNumber(vector<int>& nums) {
            int count = 0;

            // Sort the array to enable two-pointer or binary search strategy
            sort(nums.begin(), nums.end());
            int n = nums.size();

            // Fix the first side
            for (int i = 0; i < n - 2; ++i) {
                  // No triangle possible with a zero side
                  if (nums[i] == 0) continue;
                  int k = i + 2;

                  for (int j = i + 1; j < n - 1; ++j) {

                        // Find the furthest k where nums[i] + nums[j] > nums[k]
                        while (k < n && nums[i] + nums[j] > nums[k]) ++k;
                        // k - j - 1 gives the number of valid triangles

                        count += k - j - 1;
                  }
            }

            return count;
      }
};
