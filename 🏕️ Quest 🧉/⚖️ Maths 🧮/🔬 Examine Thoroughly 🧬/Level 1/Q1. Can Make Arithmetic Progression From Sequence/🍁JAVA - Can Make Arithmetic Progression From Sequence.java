//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public boolean canMakeArithmeticProgression(int[] arr) {
            Arrays.sort(arr); // Sort the array to check differences sequentially

            int diff = arr[1] - arr[0]; // Calculate initial common difference

            // Check if all consecutive gaps equal the common difference
            for (int i = 2; i < arr.length; i++) {
                  if (arr[i] - arr[i - 1] != diff) {
                        return false; // Difference mismatch means no arithmetic progression
                  }
            }

            return true; // All consecutive elements have equal difference
      }
}
