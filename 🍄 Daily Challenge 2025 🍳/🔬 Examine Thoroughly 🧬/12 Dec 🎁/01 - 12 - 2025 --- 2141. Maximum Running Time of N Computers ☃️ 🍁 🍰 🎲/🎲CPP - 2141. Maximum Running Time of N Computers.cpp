//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2141

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(batteries)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long maxRunTime(int n, vector<int>& batteries) {
            // Total battery power available
            long long sumPower = 0;
            for (int power : batteries) {
                  sumPower += power;
            }

            // Binary search bounds
            long long left = 1, right = sumPower / n;

            while (left < right) {
                  // Upper mid point calculation
                  long long target = right - (right - left) / 2;

                  // Total usable power for 'target' runtime
                  long long extra = 0;
                  for (int power : batteries) {
                        extra += min((long long)power, target);
                  }

                  // Feasible? Try longer runtime
                  if (extra >= (long long)n * target) {
                        left = target;
                  } else {
                        right = target - 1;
                  }
            }

            return left;
      }
};
