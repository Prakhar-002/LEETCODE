//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3512

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int minOperations(vector<int>& nums, int k) {
            // Compute sum of all elements in the array
            int totalSum = 0;
            for (int num : nums) {
                  totalSum += num;
            }

            // Return remainder of totalSum divided by k
            // Minimal operations needed to make sum divisible by k
            return totalSum % k;
      }
};
