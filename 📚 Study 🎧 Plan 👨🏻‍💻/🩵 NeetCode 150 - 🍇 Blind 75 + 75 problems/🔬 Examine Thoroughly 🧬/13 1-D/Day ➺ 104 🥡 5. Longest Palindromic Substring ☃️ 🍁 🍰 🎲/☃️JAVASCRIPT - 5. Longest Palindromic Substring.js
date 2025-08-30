//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var longestPalindrome = function (s) {
      // Starting index of longest palindrome found
      let resIdx = 0;
      // Length of longest palindrome found
      let resLen = 0;

      // Iterate over each character as potential palindrome center
      for (let i = 0; i < s.length; i++) {
            // Odd length palindrome center at i
            let l = i, r = i;
            while (l >= 0 && r < s.length && s[l] === s[r]) {
                  if ((r - l + 1) > resLen) {
                        resIdx = l;
                        resLen = r - l + 1;
                  }
                  l--;
                  r++;
            }

            // Even length palindrome center between i and i+1
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.length && s[l] === s[r]) {
                  if ((r - l + 1) > resLen) {
                        resIdx = l;
                        resLen = r - l + 1;
                  }
                  l--;
                  r++;
            }
      }

      // Return longest palindrome substring
      return s.substring(resIdx, resIdx + resLen);
};
