//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1295

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int findNumbers(vector<int>& nums) {
            int res = 0;  // To count numbers with even number of digits

            for (int num : nums) {
                  // Check for 2-digit, 4-digit, or exactly 6-digit number (100000)
                  if ((num > 9 && num < 100) || (num > 999 && num < 10000) || num == 100000) {
                        res++;  // Increment counter
                  }
            }

            return res;  // Return the result
      }
};
