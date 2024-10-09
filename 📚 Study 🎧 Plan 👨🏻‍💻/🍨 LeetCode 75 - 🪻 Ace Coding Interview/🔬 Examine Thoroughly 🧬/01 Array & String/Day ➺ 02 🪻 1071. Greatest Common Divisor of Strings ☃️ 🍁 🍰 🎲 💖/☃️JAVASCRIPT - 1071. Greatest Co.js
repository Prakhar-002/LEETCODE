//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1071

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = min(str1.length, str2.length)

//? 🧺 Space complexity ➺ O(1)

function gcdOfStrings(str1, str2) {
      // Check if concatenated strings are equal or not, if not return ""
      // else then return the substring from 0 to gcd of len(str1), len(str2)
      return (
            str1 + str2 !== str2 + str1 ? "" : str1.slice(0, gcd(str1.length, str2.length))
      );
}

// Helper function to calculate GCD
function gcd(a, b) {
      return b === 0 ? a : gcd(b, a % b);
}

