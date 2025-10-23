//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var hasSameDigits = function (s) {
      // Repeat the operation until two digits remain
      while (s.length > 2) {
            let temp = '';
            for (let i = 0; i < s.length - 1; i++) {
                  const sum = (Number(s[i]) + Number(s[i + 1])) % 10;
                  temp += sum.toString();
            }
            s = temp;
      }

      // Compare the final digits
      return s[0] === s[1];
};
