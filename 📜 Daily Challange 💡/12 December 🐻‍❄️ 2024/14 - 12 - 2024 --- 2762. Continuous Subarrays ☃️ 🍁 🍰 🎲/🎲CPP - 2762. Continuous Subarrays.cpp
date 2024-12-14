//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2762

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long continuousSubarrays(vector<int>& nums) {
            int right = 0, left = 0;
            int curMin, curMax;
            long windowLen = 0, total = 0;

            // Initialize window with first element
            curMin = curMax = nums[right];

            for (right = 0; right < nums.size(); right++) {
                  // Update min and max for current window
                  curMin = min(curMin, nums[right]);
                  curMax = max(curMax, nums[right]);

                  // If window condition breaks (diff > 2)
                  if (curMax - curMin > 2) {
                        // Add subarrays from previous valid window
                        windowLen = right - left;
                        total += ((windowLen * (windowLen + 1)) / 2);

                        // Start new window at current position
                        left = right;
                        curMin = curMax = nums[right];

                        // Expand left boundary while maintaining condition
                        while (left > 0 && abs(nums[right] - nums[left - 1]) <= 2) {
                              left--;
                              curMin = min(curMin, nums[left]);
                              curMax = max(curMax, nums[left]);
                        }

                        // Remove overcounted subarrays if left boundary expanded
                        if (left < right) {
                              windowLen = right - left;
                              total -= ((windowLen * (windowLen + 1)) / 2);
                        }
                  }
            }

            // Add subarrays from final window
            windowLen = right - left;
            total += ((windowLen * (windowLen + 1)) / 2);

            return total;
      }
};
