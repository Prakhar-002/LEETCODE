//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int reductionOperations(vector<int>& nums) {
            int n = nums.size();

            // Sort the array so numbers are in non-decreasing order
            sort(nums.begin(), nums.end());

            int operations = 0;  // Total number of reduction operations

            // Traverse from left to right, starting at index 1
            for (int i = 1; i < n; ++i) {
                  // When we see a new distinct value at nums[i],
                  // every element from i to n-1 will require one extra
                  // reduction step compared to the previous distinct value.
                  if (nums[i] != nums[i - 1]) {
                        operations += n - i;
                  }
            }

            return operations;
      }
};
