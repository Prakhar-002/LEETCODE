//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 442

//? ⌚ Time complexity -> O(n) 👉 length of nums

//? 🧺 Space complexity -> O(1) 

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> findDuplicates(vector<int>& nums) {
            vector<int> duplicates;

            for (int n : nums) {
                  // take the abs value
                  n = abs(n);

                  // if it is already present before it will be negative
                  if (nums[n - 1] < 0) {
                        // so append it in our answer
                        duplicates.push_back(n);
                  }

                  // else make it's original position negative
                  // original position will be [1, 2, 3, . . . . . n]
                  // index for value n will be n - 1 [0, 1, 2, . . . n - 1]
                  nums[n - 1] = -1 * nums[n - 1];
            }

            return duplicates;
      }
};