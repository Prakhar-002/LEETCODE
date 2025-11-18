//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1513

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Java version
class Solution {
      public int numSub(String s) {
            // 'one' counts consecutive '1's
            int one = 0;
            // 'res' accumulates total substrings of '1's
            long res = 0;
            // Modulo value to keep results within integer limits
            int mod = 1000000007;

            for (int i = 0; i < s.length(); i++) {
                  if (s.charAt(i) == '1') {
                        // Increment consecutive '1's count
                        one++;
                  } else {
                        // Reset counter if '0' encountered
                        one = 0;
                  }
                  // Add current count to result and apply modulo
                  res = (res + one) % mod;
            }

            return (int) res;
      }
}
