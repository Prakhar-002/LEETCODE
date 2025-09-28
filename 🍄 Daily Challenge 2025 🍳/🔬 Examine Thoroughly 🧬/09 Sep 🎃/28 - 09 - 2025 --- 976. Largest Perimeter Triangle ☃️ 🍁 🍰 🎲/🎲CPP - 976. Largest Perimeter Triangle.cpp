//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 976

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int largestPerimeter(vector<int>& nums) {
            // Sort in non-increasing order so that nums[i] is the largest in each triple
            sort(nums.begin(), nums.end(), greater<int>());   // in-place sort descending

            // Scan consecutive triples; first valid triple gives the maximum perimeter
            for (int i = 0; i + 2 < (int)nums.size(); i++) {
                  int a = nums[i], b = nums[i + 1], c = nums[i + 2];

                  // Triangle inequality: for a ≥ b ≥ c, only need b + c > a
                  if (b + c > a) {
                        return a + b + c;   // maximal perimeter due to descending order
                  }
            }

            // No valid triangle
            return 0;
      }
};
