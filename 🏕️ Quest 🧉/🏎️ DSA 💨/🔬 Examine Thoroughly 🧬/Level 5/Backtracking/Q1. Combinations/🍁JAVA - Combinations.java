//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Quiz Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

import java.util.*;

class Solution {
      public List<List<Integer>> combine(int n, int k) {
            List<List<Integer>> res = new ArrayList<>(); // Store all valid combinations
            List<Integer> comb = new ArrayList<>(); // Temporary list to build one combination

            // Backtracking helper function
            backtrack(1, n, k, comb, res);
            return res;
      }

      private void backtrack(int start, int n, int k, List<Integer> comb, List<List<Integer>> res) {
            // If current combination size is k, add a copy to results and return
            if (comb.size() == k) {
                  res.add(new ArrayList<>(comb));
                  return;
            }

            // Explore all candidates from 'start' to n
            for (int num = start; num <= n; num++) {
                  comb.add(num); // Choose
                  backtrack(num + 1, n, k, comb, res); // Explore further
                  comb.remove(comb.size() - 1); // Undo choice (backtrack)
            }
      }
}