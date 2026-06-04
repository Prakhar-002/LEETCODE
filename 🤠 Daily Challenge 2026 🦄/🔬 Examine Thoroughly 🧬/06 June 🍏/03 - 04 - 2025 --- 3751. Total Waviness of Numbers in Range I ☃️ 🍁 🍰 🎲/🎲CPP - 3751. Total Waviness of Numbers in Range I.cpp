//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3751

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 - nums2)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:

      // Count peaks and valleys in the digit sequence of a number
      int waviness(const string& n) {
            int waviness = 0;

            for (int i = 1; i < (int)n.size() - 1; i++) {
                  int prev = n[i - 1] - '0';
                  int curr = n[i]     - '0';
                  int next = n[i + 1] - '0';

                  bool peak   = prev < curr && curr > next;    // Middle digit is highest
                  bool valley = prev > curr && curr < next;    // Middle digit is lowest

                  if (peak || valley)
                        waviness++;
            }

            return waviness;
      }

      int totalWaviness(int num1, int num2) {
            int ans = 0;

            // Accumulate waviness for every number in the range
            for (int i = num1; i <= num2; i++) {
                  ans += waviness(to_string(i));
            }

            return ans;
      }
};