//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 47

//? ⌚ Time complexity ➺ O(n × n!) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n × n!)

import java.util.*;

class Solution {
      public List<List<Integer>> permuteUnique(int[] nums) {
            List<List<Integer>> res = new ArrayList<>();
            List<Integer> perm = new ArrayList<>();
            Map<Integer, Integer> count = new HashMap<>();

            // Count frequency of each number
            for (int num : nums) {
                  count.put(num, count.getOrDefault(num, 0) + 1);
            }

            dfs(nums.length, count, perm, res);
            return res;
      }

      private void dfs(int len, Map<Integer, Integer> count, List<Integer> perm, List<List<Integer>> res) {
            if (perm.size() == len) {
                  res.add(new ArrayList<>(perm)); // Add a copy to result
                  return;
            }

            for (int n : count.keySet()) {
                  if (count.get(n) > 0) {
                        perm.add(n); // Choose number
                        count.put(n, count.get(n) - 1); // Decrease count

                        dfs(len, count, perm, res); // Recurse

                        count.put(n, count.get(n) + 1); // Backtrack
                        perm.remove(perm.size() - 1); // Remove last
                  }
            }
      }
}
