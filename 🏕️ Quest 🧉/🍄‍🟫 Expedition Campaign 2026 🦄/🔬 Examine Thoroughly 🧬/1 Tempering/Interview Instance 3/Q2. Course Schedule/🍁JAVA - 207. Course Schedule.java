//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public boolean canFinish(int numCourses, int[][] prerequisites) {
            // ----------------------------------------------------------
            // Step 1: Build adjacency list (course → list of prerequisites)
            // ----------------------------------------------------------
            Map<Integer, List<Integer>> preMap = new HashMap<>();
            for (int i = 0; i < numCourses; i++) {
                  preMap.put(i, new ArrayList<>());
            }
            for (int[] pair : prerequisites) {
                  preMap.get(pair[0]).add(pair[1]);
            }

            // Set to track nodes in the current recursion stack
            Set<Integer> visitSet = new HashSet<>();

            // ----------------------------------------------------------
            // Step 3: Run DFS from each course
            // ----------------------------------------------------------
            for (int course = 0; course < numCourses; course++) {
                  if (!dfs(course, preMap, visitSet)) {
                        return false;
                  }
            }
            return true;
      }

      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles
      // ----------------------------------------------------------
      private boolean dfs(int crs, Map<Integer, List<Integer>> preMap, Set<Integer> visitSet) {
            // If course already in recursion stack → cycle found
            if (visitSet.contains(crs)) {
                  return false;
            }
            // If course has no prerequisites → no cycle here
            if (preMap.get(crs).isEmpty()) {
                  return true;
            }

            // Mark course in current path
            visitSet.add(crs);

            // Recursively check prerequisites
            for (int pre : preMap.get(crs)) {
                  if (!dfs(pre, preMap, visitSet)) {
                        return false;
                  }
            }

            // Remove from recursion stack
            visitSet.remove(crs);
            // Memoize result by clearing prerequisites
            preMap.put(crs, new ArrayList<>());

            return true;
      }
}
