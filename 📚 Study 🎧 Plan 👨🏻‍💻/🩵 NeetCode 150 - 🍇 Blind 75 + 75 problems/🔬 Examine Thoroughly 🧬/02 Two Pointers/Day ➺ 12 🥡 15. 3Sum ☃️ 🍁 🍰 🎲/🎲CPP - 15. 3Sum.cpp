//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 15

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<int>> threeSum(vector<int>& nums) {
            // Variable to store all triplets that sum to zero
            vector<vector<int>> triplets;

            // Sort the nums for avoiding duplicates
            // and makes it easier to use the two-pointer technique effectively
            sort(nums.begin(), nums.end());

            // Iterate through the list
            // Pick an element `num` along with its index `idx`
            for (int idx = 0; idx < nums.size(); ++idx) {
                  // Skip elements that are the same as the previous element
                  if (idx > 0 && nums[idx] == nums[idx - 1]) {
                        continue;
                  }

                  int left = idx + 1, right = nums.size() - 1;
                  while (left < right) {
                        // Calculate the sum of the numbers at the current positions
                        int threeSum = nums[idx] + nums[left] + nums[right];

                        // If sum is > 0 shift the right pointer
                        if (threeSum > 0) {
                              --right;
                        }
                        // If sum is < 0 shift the left pointer
                        else if (threeSum < 0) {
                              ++left;
                        }
                        // `threeSum == 0` 
                        else {
                              // Add triplet 
                              triplets.push_back({nums[idx], nums[left], nums[right]});
                              // Increment the left pointer for next triplet
                              ++left;

                              // Subsequently, the left pointer is moved to skip identical elements
                              while (left < right && nums[left] == nums[left - 1]) {
                                    // Avoid duplicates in the triplet list
                                    ++left;
                              }
                        }
                  }
            }

            return triplets;
      }
};
