//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      bool canMakeArithmeticProgression(vector<int>& arr) {
            sort(arr.begin(), arr.end());  // Sort to verify consecutive differences

            int diff = arr[1] - arr[0];   // Base difference value

            // Verify all consecutive differences are equal
            for (int i = 2; i < (int)arr.size(); i++) {
                  if (arr[i] - arr[i - 1] != diff) {
                        return false;   // Not arithmetic progression if mismatch found
                  }
            }

            return true;  // All pairs have equal difference
      }
};
