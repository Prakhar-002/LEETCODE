//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3487

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maxSum(vector<int>& nums) {

            // Create an unordered_set to store unique positive integers
            unordered_set<int> positiveNumsSet;

            // Traverse each number in the input array
            for (int num : nums) {
                  // If the number is positive, insert it into the set
                  if (num > 0) {
                        positiveNumsSet.emplace(num);
                  }
            }

            // If the set is empty (no positive numbers), return the maximum element in the array
            if (positiveNumsSet.empty()) {
                  return *max_element(nums.begin(), nums.end());
            }

            // Otherwise, return the sum of all unique positive numbers
            return accumulate(positiveNumsSet.begin(), positiveNumsSet.end(), 0);
      }
};
