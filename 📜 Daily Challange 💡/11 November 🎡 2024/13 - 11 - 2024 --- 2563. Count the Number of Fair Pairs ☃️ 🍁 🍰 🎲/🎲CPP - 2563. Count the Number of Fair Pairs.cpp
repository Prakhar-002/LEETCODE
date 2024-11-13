//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2563

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
      int binSearch(int l, int r, int target, const vector<int>& nums) {
            // Binary search to find the index where nums[index] >= target
            while (l <= r) {
                  int m = l + (r - l) / 2;
                  if (nums[m] >= target) {
                        r = m - 1;
                  } else {
                        l = m + 1;
                  }
            }
            return r; // Return the index where nums[index] < target
      }

public:
      long long countFairPairs(vector<int>& nums, int lower, int upper) {
            // Sort the vector to enable binary search for range
            sort(nums.begin(), nums.end());

            long long pairs = 0; // Initialize pair count

            // Iterate through each element to find pairs within [lower, upper]
            for (int i = 0; i < nums.size(); i++) {
                  int low = lower - nums[i]; // Minimum value for a fair pair with nums[i]
                  int up = upper - nums[i]; // Maximum value for a fair pair with nums[i]

                  // Count valid pairs in range by binary search for up+1 and low boundaries
                  pairs += binSearch(i + 1, nums.size() - 1, up + 1, nums) -
                              binSearch(i + 1, nums.size() - 1, low, nums);
            }

            return pairs; // Return the total count of fair pairs
      }
};

