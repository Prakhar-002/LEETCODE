//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 268

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int missingNumber(vector<int>& nums) {
            int n = nums.size();

            // Expected sum from 0 to n: n * (n + 1) / 2
            // Use long long to prevent integer overflow
            long long expectedSum = (long long) n * (n + 1) / 2;

            // Sum all elements in array
            long long actualSum = 0;
            for (int num : nums) {
                  actualSum += num;
            }

            // Return difference (guaranteed to fit in int)
            return expectedSum - actualSum;
      }
};
