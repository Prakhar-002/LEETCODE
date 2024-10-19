//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      int max_or;
      int res;
      vector<int> nums;

      void dfs(int i, int cur_or) {
            // Base case: if we've considered all elements
            if (i == nums.size()) {
                  // Increment the result if current OR equals the max OR
                  res += (cur_or == max_or) ? 1 : 0;
                  return;
            }

            // Recursively explore two cases: skipping the current element
            dfs(i + 1, cur_or);

            // Including the current element in the OR operation
            dfs(i + 1, cur_or | nums[i]);
      }

public:
      int countMaxOrSubsets(vector<int>& nums) {
            this->nums = nums;
            max_or = 0;
            res = 0;

            // Compute the OR value for the entire array
            for (int num : nums) {
                  max_or |= num;
            }

            // Start the DFS from the 0th index with an OR value of 0
            dfs(0, 0);
            return res;
      }
};



