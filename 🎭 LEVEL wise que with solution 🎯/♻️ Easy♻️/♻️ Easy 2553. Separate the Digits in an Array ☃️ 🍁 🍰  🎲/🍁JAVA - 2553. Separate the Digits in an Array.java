//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2553

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class Solution {
      public int[] separateDigits(int[] nums) {
            List<Integer> res = new ArrayList<>();

            for (int num : nums) {
                  // Break number into individual digit characters
                  for (char ch : String.valueOf(num).toCharArray()) {
                        // Subtract '0' to convert char digit to actual int
                        res.add(ch - '0');
                  }
            }

            // Convert List<Integer> to primitive int[] before returning
            return res.stream().mapToInt(Integer::intValue).toArray();
      }
}