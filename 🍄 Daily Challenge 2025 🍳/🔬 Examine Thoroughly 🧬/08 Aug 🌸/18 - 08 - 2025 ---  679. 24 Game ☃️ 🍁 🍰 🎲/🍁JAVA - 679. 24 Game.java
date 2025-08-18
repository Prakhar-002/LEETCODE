//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 679

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

import java.util.ArrayList;
import java.util.List;

class Solution {
      // ----------------------------------------------------------
      // Step 1: Initialization and Backtracking Setup
      // ----------------------------------------------------------
      // `EPS` (epsilon) for comparing floating-point numbers due to precision errors.
      private static final double EPS = 1e-6;

      public boolean judgePoint24(int[] cards) {
            // Convert initial integer cards to a list of doubles for calculations.
            List<Double> nums = new ArrayList<>();
            for (int card : cards) {
                  nums.add((double) card);
            }
            // Start the backtracking process.
            return backtrack(nums);
      }

      // `backtrack` is the recursive helper function.
      private boolean backtrack(List<Double> nums) {
            // ----------------------------------------------------------
            // Step 2: Base Case for Backtracking
            // ----------------------------------------------------------
            // If the list is reduced to a single number, check if it's approximately 24.
            if (nums.size() == 1) {
                  return Math.abs(nums.get(0) - 24.0) < EPS;
            }

            // ----------------------------------------------------------
            // Step 3: Recursive Step - Explore All Operations
            // ----------------------------------------------------------
            int n = nums.size();
            // Iterate through every unique pair of numbers (a, b) from the list.
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        // Create a new list `rest` with all numbers except for `a` and `b`.
                        List<Double> rest = new ArrayList<>();
                        for (int k = 0; k < n; k++) {
                              if (k != i && k != j) {
                                    rest.add(nums.get(k));
                              }
                        }
                        
                        double a = nums.get(i);
                        double b = nums.get(j);

                        // Generate all possible results from applying operations to `a` and `b`.
                        List<Double> candidates = new ArrayList<>();
                        candidates.add(a + b);
                        candidates.add(a * b);
                        candidates.add(a - b);
                        candidates.add(b - a); // Subtraction is not commutative.

                        // For division, check for division by zero.
                        if (Math.abs(b) > EPS) candidates.add(a / b);
                        if (Math.abs(a) > EPS) candidates.add(b / a); // Division is not commutative.

                        // For each candidate result `x`, create a new list for the next recursive call.
                        for (double x : candidates) {
                              List<Double> nextNums = new ArrayList<>(rest);
                              nextNums.add(x);
                              if (backtrack(nextNums)) {
                                    // If any recursive call finds a solution, propagate true up the call stack.
                                    return true;
                              }
                        }
                  }
            }
            // If all pairs and operations have been tried from this state and none led to a solution, return false.
            return false;
      }
}
