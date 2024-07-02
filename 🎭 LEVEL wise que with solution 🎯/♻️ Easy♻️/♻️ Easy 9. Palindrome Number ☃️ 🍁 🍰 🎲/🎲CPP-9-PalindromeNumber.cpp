//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 9

//? ⌚ Time complexity -> O(LogN) 👉 Digits of given X

//? 🧺 Space complexity -> O(1) 

#include <iostream>

class Solution {
public:
      bool isPalindrome(int x) {
            int num = x;
            long long rev = 0;
            while (x > 0) {
                  int r = x % 10;
                  rev = rev * 10 + r;
                  x = x / 10;
            }

            return num == rev;
      }
};