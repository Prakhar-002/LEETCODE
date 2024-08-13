//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 39

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

//? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

import java.util.*;

class Solution {
      public List<List<Integer>> combinationSum(int[] candidates, int target) {
            // list to store all the combinations that add up to target
            List<List<Integer>> combinations = new ArrayList<>();

            // call our dfs
            dfs(0, new ArrayList<>(), 0, candidates, target, combinations);

            return combinations;
      }

      // recursive function
      // `i` -> for index
      // `cur` -> current sequence
      private void dfs(int i, List<Integer> cur, int total, int[] candidates, int target,
                  List<List<Integer>> combinations) {
            // if our total is equal to target add this to combinations
            if (total == target) {
                  combinations.add(new ArrayList<>(cur));
                  return;
            }

            // if total is > target or index out of bound
            if (total > target || i == candidates.length) {
                  // just return from there
                  return;
            }

            // recursive call when we add current candidate in cur combination

            // 1. add candidate in cur combination
            cur.add(candidates[i]);
            // 2. call the dfs for this cur and on same candidate
            dfs(i, cur, total + candidates[i], candidates, target, combinations); // cause we can use one elem unlimited
                                                                                  // times
            // 3. remove from cur combination
            cur.remove(cur.size() - 1);

            // recursive call when we skip current candidate in cur combination

            // 1. call the dfs for next candidate
            dfs(i + 1, cur, total, candidates, target, combinations);
      }
}
