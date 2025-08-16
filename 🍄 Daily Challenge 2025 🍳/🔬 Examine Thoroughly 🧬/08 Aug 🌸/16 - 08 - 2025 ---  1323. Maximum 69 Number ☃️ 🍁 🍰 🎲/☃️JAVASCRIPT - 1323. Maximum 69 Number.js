//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1323

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maximum69Number = function (num) {
      // Convert the integer to a string
      let s = num.toString();

      // Convert the string to an array of characters for easy modification
      let s_arr = s.split('');

      // ----------------------------------------------------------
      // Iterate through the digits to find the first '6'
      // ----------------------------------------------------------
      for (let i = 0; i < s_arr.length; i++) {
            // If the current digit is '6'
            if (s_arr[i] === '6') {
                  // Change it to '9'
                  s_arr[i] = '9';
                  // Since we want the maximum possible number,
                  // changing the leftmost '6' to '9' will yield the largest result.
                  // So, we can stop after the first replacement.
                  break;
            }
      }

      // Join the array of characters back into a string and convert to an integer
      return parseInt(s_arr.join(''));
};
