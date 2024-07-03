//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 29

//? ⌚ Time complexity -> O(1) 

//? 🧺 Space complexity -> O(1) 

//* This is not without divide or mod solution 

class Solution {
      public int divide(int dividend, int divisor) {
            int ans = dividend / divisor;
            if (dividend == Integer.MIN_VALUE && divisor == -1) {
                  return Integer.MAX_VALUE;
            }
            return ans;
      }
}