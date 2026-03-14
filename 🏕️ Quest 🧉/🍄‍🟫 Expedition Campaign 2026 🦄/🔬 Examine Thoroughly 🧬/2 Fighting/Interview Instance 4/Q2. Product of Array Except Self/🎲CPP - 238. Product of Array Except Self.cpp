//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 238

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(1) 👉 according to followUp

#include <vector>
using namespace std; 

class Solution {
public:
      vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> res(nums.size(), 1);

            // for prefix multiply
            int prefix = 1;

            for (int i = 0; i < nums.size(); i++) {
                  res[i] = prefix;
                  prefix *= nums[i];
            }

            // for postfix multiply
            int postfix = 1;

            for (int i = nums.size() - 1; i >= 0; i--) {
                  res[i] *= postfix;
                  postfix *= nums[i];
            }

            return res;
      }
};