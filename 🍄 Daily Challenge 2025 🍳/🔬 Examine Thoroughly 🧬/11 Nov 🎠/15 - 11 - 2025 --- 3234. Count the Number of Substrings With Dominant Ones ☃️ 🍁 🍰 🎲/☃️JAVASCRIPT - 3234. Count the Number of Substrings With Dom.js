//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3234

//? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// JavaScript version
var numberOfSubstrings = function (s) {
      const n = s.length;
      // Array pre stores the index of previous '0' or current index if first or previous char is '0'
      const pre = new Array(n + 1).fill(-1);
      for (let i = 0; i < n; i++) {
            // If first char or previous char is '0', record current index in pre
            if (i === 0 || s[i - 1] === '0') {
                  pre[i + 1] = i;
            } else {
                  // Otherwise, inherit the previous index from pre
                  pre[i + 1] = pre[i];
            }
      }

      let res = 0;
      for (let i = 1; i <= n; i++) {
            // Count of zeros starting with current character
            let zeroCount = (s[i - 1] === '0') ? 1 : 0;
            let j = i;
            // Iterate backward while zeroCount^2 <= n to analyze substrings
            while (j > 0 && zeroCount * zeroCount <= n) {
                  // Count of ones in the current substring segment
                  let oneCount = (i - pre[j]) - zeroCount;
                  // Condition to add valid substrings based on counts of zeros and ones
                  if (zeroCount * zeroCount <= oneCount) {
                        res += Math.min(j - pre[j], oneCount - zeroCount * zeroCount + 1);
                  }
                  // Move to previous segment
                  j = pre[j];
                  // Increase zero count for next iteration
                  zeroCount++;
            }
      }

      return res;
};
