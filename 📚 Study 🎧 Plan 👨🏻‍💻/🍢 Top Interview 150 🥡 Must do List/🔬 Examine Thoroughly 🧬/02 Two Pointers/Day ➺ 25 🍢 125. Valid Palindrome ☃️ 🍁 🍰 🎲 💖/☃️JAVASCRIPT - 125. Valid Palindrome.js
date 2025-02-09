//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 125 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var isPalindrome = function (s) {
      // Initialize two pointers: left (l) at the start, right (r) at the end of the string
      let l = 0, r = s.length - 1;

      // Iterate until the two pointers meet
      while (l < r) {
            // Move the left pointer forward if it's not an alphanumeric character
            while (l < r && !alphaNum(s[l])) {
                  l++;
            }
            // Move the right pointer backward if it's not an alphanumeric character
            while (r > l && !alphaNum(s[r])) {
                  r--;
            }
            // Compare the characters (ignoring case); return false if they don't match
            if (s[l].toLowerCase() !== s[r].toLowerCase()) {
                  return false;
            }
            // Move both pointers towards the center
            l++;
            r--;
      }

      // If all checks pass, return true
      return true;
}

// Function to check if a character is alphanumeric (letter or digit)
var alphaNum = function (ch) {
      return /^[a-zA-Z0-9]$/.test(ch);
}