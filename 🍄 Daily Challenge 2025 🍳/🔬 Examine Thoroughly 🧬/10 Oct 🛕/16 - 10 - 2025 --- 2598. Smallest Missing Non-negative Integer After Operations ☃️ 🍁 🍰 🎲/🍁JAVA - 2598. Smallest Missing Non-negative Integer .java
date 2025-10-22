//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2598

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = values

import java.util.*;

class Solution {

      /**
       * Finds the smallest non-negative integer (MEX) that cannot be formed
       * after adjusting numbers by repeatedly adding/subtracting the given value.
       */
      public int findSmallestInteger(int[] nums, int value) {
            // mp[i] will store how many numbers have remainder i when divided by 'value'
            int[] mp = new int[value];

            // Count frequency of each modulo remainder (correct handling for negative numbers)
            for (int x : nums) {
                  int v = ((x % value) + value) % value;     // normalize to positive remainder
                  mp[v]++;                                   // increment frequency of that remainder
            }

            int mex = 0;  // start checking from 0 → smallest possible candidate

            // Simulate building numbers starting from 0 upward
            while (mp[mex % value] > 0) {                    // if there’s a remainder available to form this number
                  mp[mex % value]--;                         // consume one from this remainder group
                  mex++;                                     // proceed to next integer
            }

            // When remainder group exhausted, return current mex
            return mex;
      }
}
