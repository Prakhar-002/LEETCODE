//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 7

//? ⌚ Time complexity -> O(LogN) 👉 Number of digit in x

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int reverse(int x) {
            int num = Math.abs(x);
            long rev = 0;
            while (num > 0) {
                  int pop = num % 10;
                  num = num / 10;
                  rev = (rev * 10) + pop;
            }

            // for 32 bit system cause 64-bit integers does not allow
            if (rev >= Integer.MIN_VALUE && rev <= Integer.MAX_VALUE) {
                  return x < 0 ? (int) (-rev) : (int) rev;
            } else {
                  return 0;
            }
      }
}