//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3349

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // Returns true if two adjacent increasing subarrays of length >= k exist
      bool hasIncreasingSubarrays(vector<int>& nums, int k) {
            int knew = k - 1;  // Number of required consecutive increasing pairs

            // If k is 1, trivially true
            if (knew == 0)
                  return true;

            // Iterate through array from index k+1 to end
            for (int i = k + 1; i < (int)nums.size(); i++) {
                  // Check if pairs at i-1,i and i-k-1,i-k are increasing
                  if (nums[i] > nums[i - 1] && nums[i - k] > nums[i - k - 1]) {
                        knew--;  // Valid pair found, decrease counter
                  } else {
                        knew = k - 1;  // Reset counter if condition broken
                  }

                  // If enough pairs found, return true
                  if (knew == 0)
                        return true;
            }

            // No sufficient pairs found
            return false;
      }
};
