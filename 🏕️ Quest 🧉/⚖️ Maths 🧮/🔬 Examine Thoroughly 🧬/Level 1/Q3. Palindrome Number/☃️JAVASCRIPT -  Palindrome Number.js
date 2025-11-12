//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Integer

//? 🧺 Space complexity ➺ O(n)

function isPalindrome(x) {
      const s = x.toString();  // Convert number to string
      let l = 0, r = s.length - 1;  // Two pointers at ends

      while (l < r) {
            if (s[l++] !== s[r--]) {
                  return false;  // Mismatch found, not palindrome
            }
      }

      return true;  // All characters matched, palindrome
}
