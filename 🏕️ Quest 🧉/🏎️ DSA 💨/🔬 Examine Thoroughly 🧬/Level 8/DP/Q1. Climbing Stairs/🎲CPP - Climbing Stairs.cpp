//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 70

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(n)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
using namespace std;

class Solution { 
      public:
            int climbStairs(int n) {
                  // Base cases
                  int first = 1; // Number of ways to reach the first step
                  int sec = 1;   // Number of ways to reach the second step

                  // Loop from step 2 to step n
                  for (int i = 2; i <= n; i++) {
                        // Calculate the number of ways to reach the current step
                        int third = first + sec;
                        // Update the previous steps
                        first = sec;
                        sec = third;
                  }

                  // Return the total number of ways to reach the nth step
                  return sec;
            }
};