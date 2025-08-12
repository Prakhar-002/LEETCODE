//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 40

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

//? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

import java.util.*; 

class Solution {
      public List<List<Integer>> combinationSum2(int[] candidates, int target) {
            // List to store all the combinations that add up to target
            List<List<Integer>> combinations = new ArrayList<>();

            // First we'll sort the candidates to avoid duplicates
            Arrays.sort(candidates);

            // Call our dfs function
            dfs(0, new ArrayList<>(), 0, candidates, target, combinations);

            return combinations;
      }

      // Recursive function
      // `i` -> for index
      // `cur` -> current sequence
      // `total` -> current sum
      private void dfs(int i, List<Integer> cur, int total, int[] candidates, int target,
                  List<List<Integer>> combinations) {
            // If our total is equal to target add this to combinations
            if (total == target) {
                  combinations.add(new ArrayList<>(cur));
                  return;
            }

            // If total is > target or index out of bound
            if (total > target || i == candidates.length) {
                  // Just return from there
                  return;
            }

            // Recursive call when we add current candidate in cur combination

            // 1. Add candidate in cur combination
            cur.add(candidates[i]);
            // 2. Call the dfs for this cur
            dfs(i + 1, cur, total + candidates[i], candidates, target, combinations);
            // 3. Remove from cur combination
            cur.remove(cur.size() - 1);

            // Recursive call when we skip current candidate in cur combination

            // 1. Loop and skip all candidates with same value [1, 1, 1, 1, 2]
            while (i + 1 < candidates.length && candidates[i] == candidates[i + 1]) {
                  i++;
            }
            // 2. Call the dfs for next candidate
            dfs(i + 1, cur, total, candidates, target, combinations);
      }
}
