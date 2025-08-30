//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 647

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

var countSubstrings = function (s) {
      let res = 0; // count of palindromic substrings

      // Iterate over each character in the string
      // treating each character as a center for palindromes
      for (let i = 0; i < s.length; i++) {
            // Check for odd-length palindromes (single character center)
            let l = i, r = i;
            // Expand as long as characters match and indices are valid
            while (l >= 0 && r < s.length && s[l] === s[r]) {
                  res++;    // Found a palindrome substring, increment count
                  l--; r++; // Expand pointers outward
            }

            // Check for even-length palindromes (center between two characters)
            l = i; r = i + 1;
            // Expand while characters match and indices valid
            while (l >= 0 && r < s.length && s[l] === s[r]) {
                  res++;    // Found a palindrome substring, increment count
                  l--; r++; // Expand pointers outward
            }
      }

      return res; // Return total count of palindromic substrings found
};
