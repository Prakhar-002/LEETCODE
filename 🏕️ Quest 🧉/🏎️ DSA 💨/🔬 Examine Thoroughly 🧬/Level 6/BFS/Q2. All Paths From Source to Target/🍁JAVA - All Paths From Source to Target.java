//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // Result list to store all paths from 0 to n-1
      private List<List<Integer>> res;
      // Temporary list to store current path during DFS
      private List<Integer> path;

      // DFS helper: explore all paths starting from 'node'
      private void dfs(int[][] graph, int node, int target) {
            // Add current node to path
            path.add(node);

            // If we reached the target node, store a copy of the current path
            if (node == target) {
                  res.add(new ArrayList<>(path));
            } else {
                  // Otherwise, explore each neighbor of current node
                  for (int nei : graph[node]) {
                        dfs(graph, nei, target);
                  }
            }

            // Backtrack: remove current node before returning to caller
            path.remove(path.size() - 1);
      }

      public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
            int n = graph.length;
            int target = n - 1;

            res = new ArrayList<>();
            path = new ArrayList<>();

            // Start DFS from source node 0
            dfs(graph, 0, target);

            return res;
      }
}
