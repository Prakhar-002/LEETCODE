//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 38

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 

//? 🧺 Space complexity ➺ O(2 ^ n)

const cntStr = (str) => {
      let nextStr = ''; // To build the next sequence
      let left = 0, right = 0;

      // Traverse the current string
      while (right < str.length) {
            // Expand right while characters match
            while (right < str.length && str[left] === str[right]) {
                  right++;
            }

            // Append count of digits
            nextStr += (right - left).toString();
            // Append the digit itself
            nextStr += str[left];

            // Move to next group
            left = right;
      }

      return nextStr; // Return the next sequence
}

// Main method to return the nth term
var countAndSay = function (n) {
      let str = "1"; // First term of the sequence

      // Generate up to nth term
      while (n-- > 1) {
            str = cntStr(str); // Get next term
      }

      return str; // Return final result
}
