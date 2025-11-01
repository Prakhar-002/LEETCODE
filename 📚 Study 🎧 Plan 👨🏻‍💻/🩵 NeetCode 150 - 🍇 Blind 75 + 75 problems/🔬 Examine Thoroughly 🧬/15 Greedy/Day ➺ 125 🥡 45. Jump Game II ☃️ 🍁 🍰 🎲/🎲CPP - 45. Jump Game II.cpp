//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 45

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int jump(vector<int>& nums) {
            int jump = 0; // Total jumps needed
            int l = 0, r = 0; // Current range: positions l to r

            // Continue until reaching the last index
            while (r < nums.size() - 1) {
                  int farthest = 0; // Farthest reachable idx in this range

                  // For all indices in current range, choose the furthest
                  for (int i = l; i <= r; ++i) {
                        farthest = max(farthest, i + nums[i]);
                  }

                  // Advance range for next jump
                  l = r + 1;
                  r = farthest;
                  ++jump; // Count this jump
            }
            return jump; // Minimum number of jumps to reach end
      }
};
