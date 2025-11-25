
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 448

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      vector<int> findDisappearedNumbers(vector<int>& nums) {
            // Initialize the result vector to store missing numbers
            vector<int> res;

            // Iterate over the input array to mark the presence of numbers
            for (int n : nums) {
                  // Compute the index corresponding to the absolute value of the number
                  int i = abs(n) - 1;
                  // If the number at the computed index is positive, mark it as negative
                  if (nums[i] > 0) {
                        nums[i] = -nums[i];
                  }
            }

            // Iterate over the modified array to find missing numbers
            for (int i = 0; i < nums.size(); i++) {
                  // If a number is positive, its index + 1 is missing in the input
                  if (nums[i] > 0) {
                        res.push_back(i + 1);
                  }
            }

            // Return the vector of missing numbers
            return res;
      }
};
