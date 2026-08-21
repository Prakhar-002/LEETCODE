//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3069

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> resultArray(vector<int>& nums) {
            // Vectors to store distributed elements
            vector<int> arr1;
            vector<int> arr2;

            // Place initial elements
            arr1.push_back(nums[0]);
            arr2.push_back(nums[1]);

            // Iterate and distribute elements based on comparison of last elements
            for (size_t i = 2; i < nums.size(); ++i) {
                  if (arr1.back() > arr2.back()) {
                        arr1.push_back(nums[i]);
                  } else {
                        arr2.push_back(nums[i]);
                  }
            }

            // Concatenate arr2 to the end of arr1
            arr1.insert(arr1.end(), arr2.begin(), arr2.end());

            return arr1;
      }
};