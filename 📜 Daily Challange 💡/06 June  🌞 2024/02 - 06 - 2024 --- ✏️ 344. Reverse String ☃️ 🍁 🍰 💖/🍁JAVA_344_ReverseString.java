//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 344 

class Solution {
      public void reverseString(char[] s) {
            int st = 0, end = s.length - 1;
            while (st < end) {
                  char ch = s[st];
                  s[st] = s[end];
                  s[end] = ch;
                  end--;
                  st++;
            }
      }
} 