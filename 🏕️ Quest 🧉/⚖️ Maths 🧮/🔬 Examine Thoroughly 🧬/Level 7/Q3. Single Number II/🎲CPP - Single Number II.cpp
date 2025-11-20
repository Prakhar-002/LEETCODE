//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int singleNumber(vector<int>& nums) {
            int ones = 0;  // Bits appeared once
            int twos = 0;  // Bits appeared twice

            for (int num : nums) {
                  // Update ones and twos accordingly considering bits appearing thrice
                  ones = (ones ^ (num & ~twos));
                  twos = (twos ^ (num & ~ones));
            }
            // 'ones' holds the bits of unique number appearing once
            return ones;
      }
};
