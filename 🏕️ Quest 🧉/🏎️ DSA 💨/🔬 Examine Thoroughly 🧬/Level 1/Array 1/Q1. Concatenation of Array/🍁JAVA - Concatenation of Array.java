//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Java version
import java.util.*;

class Solution {
      public int[] getConcatenation(int[] nums) {
            int n = nums.length;
            int[] result = new int[n * 2];

            // Copy original array to the first half of result
            for (int i = 0; i < 2 * n; i++) {
                  result[i] = nums[i % n];
            }

            // Return concatenated array
            return result;
      }
}
