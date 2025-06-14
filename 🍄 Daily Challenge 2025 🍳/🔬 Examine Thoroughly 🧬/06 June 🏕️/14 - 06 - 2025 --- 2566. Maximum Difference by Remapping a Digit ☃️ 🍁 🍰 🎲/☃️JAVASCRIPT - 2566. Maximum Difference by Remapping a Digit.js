//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2566

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = log(num)

//? 🧺 Space complexity ➺ O(n)

var minMaxDifference = function (num) {
      // Convert number to string
      let s = num.toString();
      let maxStr = s;
      let minStr = s;

      let pos = 0;

      // Find the first digit that is not '9'
      while (pos < s.length && s[pos] === '9') {
            pos++;
      }

      // Replace all occurrences of that digit with '9' to get maximum number
      if (pos < s.length) {
            maxStr = s.split(s[pos]).join('9');
      }

      // Replace all occurrences of the first digit with '0' to get minimum number
      minStr = s.split(s[0]).join('0');

      // Convert strings back to integers and return the difference
      return parseInt(maxStr) - parseInt(minStr);
};
