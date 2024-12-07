//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 283

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
      public:
            void moveZeroes(vector<int>& nums) {
                  int i = 0, j = 0;
                  int n = nums.size();

                  // Iterate through the array using two pointers
                  while (j < n) {

                        // Skip over zero elements
                        while (j < n && nums[j] == 0) {
                              j++;
                        }

                        // If no non-zero element is found, exit the loop
                        if (j == n) {
                              break;
                        }

                        // Move the non-zero element to position i
                        int num = nums[j];
                        // Update pointers
                        nums[j++] = 0;
                        nums[i++] = num;
                  }
            }
};
