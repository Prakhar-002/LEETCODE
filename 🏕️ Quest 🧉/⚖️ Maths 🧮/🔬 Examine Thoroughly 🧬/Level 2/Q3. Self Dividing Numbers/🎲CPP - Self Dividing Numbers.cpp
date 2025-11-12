//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = right - left + 1

// ? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // Checks if num is self-dividing
      bool isDividing(int num) {
            int n = num;  // Copy for digit extraction

            while (n > 0) {
                  int digit = n % 10;
                  // If digit is zero or does not divide num, return false
                  if (digit == 0 || num % digit != 0) {
                        return false;
                  }
                  n /= 10;  // Remove last digit
            }
            return true;  // All digits divide num
      }

      vector<int> selfDividingNumbers(int left, int right) {
            vector<int> res;  // Store results

            // Check all numbers in range
            for (int num = left; num <= right; ++num) {
                  if (isDividing(num)) {
                        res.push_back(num);
                  }
            }
            return res;
      }
};
