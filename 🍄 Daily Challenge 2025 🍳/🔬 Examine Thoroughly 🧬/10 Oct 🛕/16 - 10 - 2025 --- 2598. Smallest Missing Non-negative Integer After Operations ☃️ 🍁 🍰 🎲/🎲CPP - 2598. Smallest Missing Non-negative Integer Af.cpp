//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2598

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = values

#include <vector>
using namespace std;

class Solution {
public:
      // Finds smallest missing non-negative integer (mex) after modulo grouping
      int findSmallestInteger(vector<int>& nums, int value) {
            vector<int> mp(value, 0);   // Stores count of elements by remainder group

            // Count frequency of remainders; adjust negatives to valid range [0, value-1]
            for (int x : nums) {
                  int v = ((x % value) + value) % value;
                  mp[v]++;
            }

            int mex = 0;  // Candidate smallest missing number

            // Keep forming integers sequentially
            while (mp[mex % value] > 0) {
                  mp[mex % value]--;  // Use one number from the remainder class
                  ++mex;              // Proceed to next integer
            }

            return mex;   // First integer that can’t be formed
      }
};
