//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 462

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
      int minMoves2(vector<int>& nums) {
            // Sort the array to find the median efficiently
            sort(nums.begin(), nums.end());

            // The median minimizes the sum of absolute differences
            int median = nums[nums.size() / 2];

            // Initialize the move counter
            int count = 0;

            // Iterate over the array to compute the total moves required
            for (int num : nums) {
                  count += abs(median - num); // Add the absolute difference
            }

            return count; // Return the minimum number of moves needed
      }
};
