//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 65

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();  // Length of the digits array

            // Traverse from right to left (least significant digit first)
            for (int i = n - 1; i >= 0; i--) {
                  // If current digit < 9, simply increment and return
                  if (digits[i] < 9) {
                        digits[i] += 1;  // Add 1 to current digit
                        return digits;   // No carry needed, done!
                  }

                  // Current digit is 9, set to 0 and continue (carry over)
                  digits[i] = 0;
            }

            // All digits were 9s, need to add new digit at front
            // Example: [9,9,9] -> [1,0,0,0]
            digits.insert(digits.begin(), 1);
            return digits;
      }
};
