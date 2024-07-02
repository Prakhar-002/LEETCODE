//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 9

//? ⌚ Time complexity -> O(LogN) 👉 Digits of given X

//? 🧺 Space complexity -> O(1) 

var isPalindrome = function (x) {
      const num = x;
      let rev = 0;
      while (x > 0) {
            const r = x % 10;
            rev = rev * 10 + r;
            x = Math.floor(x / 10);
      }

      return num === rev;
};