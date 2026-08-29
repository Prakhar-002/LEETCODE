//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var shortestBeautifulSubstring = function(s, k) {
      const n = s.length;
      let l = 0;
      let ones = 0;
      let res = "";

      for (let r = 0; r < n; r++) {
            // Count '1's added to current window
            if (s[r] === '1') {
                  ones++;
            }

            // Shrink window from the left for surplus '1's or leading '0's
            while (l <= r && (ones > k || s[l] === '0')) {
                  if (s[l] === '1') {
                        ones--;
                  }
                  l++;
            }

            // Valid substring with exactly k '1's found
            if (ones === k) {
                  const temp = s.substring(l, r + 1);

                  // Update optimal substring
                  if (res === "" ||
                        temp.length < res.length ||
                        (temp.length === res.length && temp < res)) {
                        res = temp;
                  }
            }
      }

      return res;
};