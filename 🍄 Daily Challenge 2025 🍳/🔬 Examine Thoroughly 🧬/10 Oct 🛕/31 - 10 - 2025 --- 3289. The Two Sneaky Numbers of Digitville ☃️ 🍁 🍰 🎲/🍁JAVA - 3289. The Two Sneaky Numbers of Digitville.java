//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3289

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      /**
       * Finds all numbers in the array that appear exactly twice.
       */
      public int[] getSneakyNumbers(int[] nums) {
            Map<Integer, Integer> sneaky = new HashMap<>(); // Map to store the count of each number
            int[] sneakyNum = new int[2]; // List to collect numbers appearing twice

            int i = 0;

            for (int x : nums) {
                  // Update count of current number x
                  sneaky.put(x, sneaky.getOrDefault(x, 0) + 1);

                  // If count reaches 2, add number to result list once
                  if (sneaky.get(x) == 2) {
                        sneakyNum[i++] = x;
                  }
            }
            return sneakyNum; // Return numbers appearing exactly twice
      }
}
