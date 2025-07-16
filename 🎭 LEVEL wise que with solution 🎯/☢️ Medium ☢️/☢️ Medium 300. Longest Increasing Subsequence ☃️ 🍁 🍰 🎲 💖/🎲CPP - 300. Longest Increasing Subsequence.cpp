//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 300

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(len(res))

class Solution {
public:
      int lengthOfLIS(vector<int>& nums) {
            vector<int> lis;  // Stores tails of increasing subsequences

            for (int num : nums) {
                  if (lis.empty() || num > lis.back()) {
                        lis.push_back(num);  // Append if greater than last element
                  } else {
                        // Find the first index where num can replace
                        int idx = lower_bound(lis.begin(), lis.end(), num) - lis.begin();
                        lis[idx] = num;  // Replace with smaller number
                  }
            }

            return lis.size();  // Length of the LIS
      }
};
