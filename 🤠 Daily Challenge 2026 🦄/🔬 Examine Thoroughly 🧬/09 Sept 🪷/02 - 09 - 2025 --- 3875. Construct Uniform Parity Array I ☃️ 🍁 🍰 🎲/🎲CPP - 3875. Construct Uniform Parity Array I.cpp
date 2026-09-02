//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3875

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>

class Solution {
public:
      bool uniformArray(vector<int>& nums1) {
            // It is always achievable to form an array of uniform parity:
            // - If the array is already all-even or all-odd, simply copy nums1.
            // - If both parities exist, choose to make all elements odd:
            //   even - odd = odd, so any even element can be transformed into an odd one.
            return true;
      }
};