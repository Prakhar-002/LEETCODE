//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q2

//? ⌚ Time complexity ➺ O(k)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int smallestRepunitDivByK(int k) {
            // Early exit if k is divisible by 2 or 5, since repunits involve only 1's
            if (k % 2 == 0 || k % 5 == 0) {
                  return -1;
            }

            int r = 0; // Initialize remainder of the repunit mod k

            // Loop from length 1 to k, as per pigeonhole principle to find divisible repunit
            for (int N = 1; N <= k; N++) {
                  // Build repunit: (previous * 10 + 1) mod k
                  r = (r * 10 + 1) % k;
                  if (r == 0) {
                        return N; // Return length when divisible by k
                  }
            }
            return -1; // If no such repunit found (should not happen for valid k)
      }
}