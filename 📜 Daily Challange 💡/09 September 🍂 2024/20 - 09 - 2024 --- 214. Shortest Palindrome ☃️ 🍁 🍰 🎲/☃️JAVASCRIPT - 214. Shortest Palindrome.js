//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 214

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var shortestPalindrome = function (s) {
      let i = 0;
      const n = s.length;

      // Find the longest palindrome starting from the beginning of the string
      for (let j = 0; j < n; j++) {
            if (s[i] === s[n - j - 1]) {
                  i++;
            }
      }

      // If the entire string is a palindrome, return it
      if (i === n) {
            return s;
      }

      // Reverse the non-palindrome part of the string
      const p = s.slice(i).split('').reverse().join('');

      // Recursively find the shortest palindrome for the remaining part
      // and concatenate with the reversed part and the original string
      return p + shortestPalindrome(s.slice(0, i)) + s.slice(i);
};