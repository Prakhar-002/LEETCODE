//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2011

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*; 

class Solution {
      public int finalValueAfterOperations(String[] operations) {
            // Map each operation to its effect on the variable value
            Map<String, Integer> opr = new HashMap<>();
            opr.put("--X", -1); // Decrement operation
            opr.put("X++", 1); // Increment operation
            opr.put("++X", 1); // Increment operation
            opr.put("X--", -1); // Decrement operation

            int finalVal = 0; // Initialize final value to zero

            // Apply effect of each operation to finalVal
            for (String operation : operations) {
                  finalVal += opr.get(operation);
            }

            return finalVal; // Return the final computed value
      }
}