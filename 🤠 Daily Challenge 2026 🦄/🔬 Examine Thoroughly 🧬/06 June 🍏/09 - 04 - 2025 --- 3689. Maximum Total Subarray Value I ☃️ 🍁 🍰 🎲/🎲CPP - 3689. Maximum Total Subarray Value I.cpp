//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3689

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long maxTotalValue(vector<int>& nums, int k) {
            // Find max and min using STL
            int maxVal = *max_element(nums.begin(), nums.end());
            int minVal = *min_element(nums.begin(), nums.end());

            // Spread between max and min scaled by k gives the answer
            return (long long)(maxVal - minVal) * k;
      }
};