//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Integer

//? 🧺 Space complexity ➺ O(n)

#include <string>
using namespace std;

class Solution {
public:
      // Returns true if integer x is a palindrome number
      bool isPalindrome(int x) {
            string s = to_string(x);  // Convert number to string
            int l = 0, r = s.size() - 1;   // Pointers at start and end

            while (l < r) {
                  if (s[l++] != s[r--]) {
                        return false;   // Characters differ, not a palindrome
                  }
            }

            return true;    // All matching, palindrome
      }
};
