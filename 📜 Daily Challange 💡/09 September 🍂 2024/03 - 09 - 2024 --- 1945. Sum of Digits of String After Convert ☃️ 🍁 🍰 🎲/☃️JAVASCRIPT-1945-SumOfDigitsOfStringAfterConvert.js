//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1945

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var getLucky = function (s, k) {
      // This will store the numeric conversion of each character from the string `s`
      let numberStr = '';

      for (let ch of s) {
            // expression converts a lowercase English letter to its position in the alphabet: 
            // 'a' becomes 1, 'b' becomes 2, ..., 'z' becomes 26
            numberStr += String(ch.charCodeAt(0) - 'a'.charCodeAt(0) + 1);
      }

      // Summation of digits up to `k` times
      while (k > 0) {
            // This variable will store the sum of the digits of `numberStr` during each iteration
            let tempNum = 0;
            for (let ch of numberStr) {
                  // converts each character to an integer, and adds it to `tempNum`
                  tempNum += parseInt(ch);
            }

            // `numberStr` is updated to be the string representation of `tempNum`
            numberStr = String(tempNum);
            // The loop decreases `k` by 1 with each iteration until `k` equals 0
            k--;
      }

      // converts `numberStr` back to an integer and return
      return parseInt(numberStr);
};

//*-----------------------------------------------------------------

function getLucky(s, k) {
      function convert(s) {
            // convert each character in that string to its alphabetical position
            return s.split('').map(ch => (ch.charCodeAt(0) - 'a'.charCodeAt(0) + 1).toString()).join('');
      }

      function transform(num) {
            // sums the digits of this number
            return num.toString().split('').reduce((sum, digit) => sum + parseInt(digit), 0);
      }

      // Convert the string to the integer
      let num = convert(s);

      // Perform the transform operation k times
      for (let i = 0; i < k; i++) {
            num = transform(num);
      }

      return num;
}