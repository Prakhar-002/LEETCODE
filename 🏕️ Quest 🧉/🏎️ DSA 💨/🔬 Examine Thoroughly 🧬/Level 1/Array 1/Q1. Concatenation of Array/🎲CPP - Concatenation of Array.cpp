//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// C++ version
#include <vector>
using namespace std;

class Solution {
public:
      vector<int> getConcatenation(vector<int>& nums) {
            int n = nums.size();
            vector<int> result(n * 2);

            // Copy the input to the first half of result
            for (int i = 0; i < 2 * n; i++) {
                  result[i] = nums[i % n];
            }

            // Return the concatenated vector
            return result;
      }
};
