//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1513

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// JavaScript version
var numSub = function (s) {
      // 'one' counts consecutive '1's
      let one = 0;
      // 'res' accumulates total substrings of '1's
      let res = 0;
      // Modulo value to keep results within integer limits
      const mod = 1e9 + 7;

      for (let ch of s) {
            if (ch === '1') {
                  // Increment consecutive '1's count
                  one++;
            } else {
                  // Reset counter if '0' encountered
                  one = 0;
            }
            // Add current count to result and apply modulo
            res = (res + one) % mod;
      }

      return res;
};
