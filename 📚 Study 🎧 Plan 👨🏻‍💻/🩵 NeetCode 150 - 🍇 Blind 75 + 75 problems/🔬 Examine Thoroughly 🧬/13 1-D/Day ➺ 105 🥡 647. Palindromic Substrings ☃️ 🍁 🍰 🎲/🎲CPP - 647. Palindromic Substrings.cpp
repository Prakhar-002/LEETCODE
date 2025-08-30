//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 647

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int countSubstrings(string s) {
            int res = 0; // count of palindromic substrings

            // Iterate through each character, considering it as the center
            // of a potential odd-length palindrome
            for (int i = 0; i < s.size(); i++) {
                  int l = i, r = i;
                  // Expand around center while characters are equal and indices are valid
                  while (l >= 0 && r < s.size() && s[l] == s[r]) {
                        res++;    // Found a palindrome substring, increment count
                        l--; r++; // Expand pointers outward
                  }

                  // Consider even-length palindromes centered between i and i+1
                  l = i; r = i + 1;
                  // Expand while characters match and indices valid
                  while (l >= 0 && r < s.size() && s[l] == s[r]) {
                        res++;    // Found a palindrome substring, increment count
                        l--; r++; // Expand pointers outward
                  }
            }

            return res; // Return total palindromic substrings found
      } 
};
