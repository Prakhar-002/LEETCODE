//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2481

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int numberOfCuts(int n) {
      // If there is only 1 slice (n = 1), no cuts are needed
      if (n == 1) {
            return 0;
      }

      // If n is odd, number of cuts equals n
      // If n is even, number of cuts equals n / 2
      return (n % 2 != 0) ? n : n / 2;
}