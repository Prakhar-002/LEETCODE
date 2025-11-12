//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q2

//? ⌚ Time complexity ➺ O(k)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int smallestRepunitDivByK(int k) {
            // Exit if k is divisible by 2 or 5, no repunit divisible in such cases
            if (k % 2 == 0 || k % 5 == 0) {
                  return -1;
            }

            int r = 0; // Remainder of repunit mod k

            // Loop through potential lengths
            for (int N = 1; N <= k; N++) {
                  // Update remainder with new digit '1'
                  r = (r * 10 + 1) % k;
                  if (r == 0) {
                        return N; // Return the length when divisible
                  }
            }

            return -1; // Should not reach here for valid k
      }
};
