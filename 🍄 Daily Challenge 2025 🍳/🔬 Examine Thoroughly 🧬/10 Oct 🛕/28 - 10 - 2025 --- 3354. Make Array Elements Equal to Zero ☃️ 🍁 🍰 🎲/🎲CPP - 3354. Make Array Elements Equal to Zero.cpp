//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3354

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int countValidSelections(vector<int>& nums) {
            int selections = 0;
            int left = 0, right = 0;
            // Compute total sum for right
            for (int x : nums) right += x;

            for (int i = 0; i < nums.size(); i++) {
                  if (nums[i] == 0) {
                        // Check if the side sums differ by 0 or 1
                        if (0 <= left - right && left - right <= 1) selections++;
                        if (0 <= right - left && right - left <= 1) selections++;
                  } else {
                        left += nums[i];
                        right -= nums[i];
                  }
            }

            return selections;
      }
};
