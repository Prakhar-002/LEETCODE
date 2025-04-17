//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2176

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int countPairs(vector<int>& nums, int k) {
            int pairs = 0;  // Initialize count of valid pairs

            // Iterate over all possible pairs (i, j) with i < j
            for (int i = 0; i < nums.size(); i++) {
                  for (int j = i + 1; j < nums.size(); j++) {

                        // Check both conditions:
                        // 1. nums[i] == nums[j]
                        // 2. (i * j) % k == 0
                        if (nums[i] == nums[j] && (i * j) % k == 0) {
                              pairs++;  // Increment count if both conditions are met
                        }
                  }
            }

            return pairs;  // Return the total count of valid pairs
      }
};
