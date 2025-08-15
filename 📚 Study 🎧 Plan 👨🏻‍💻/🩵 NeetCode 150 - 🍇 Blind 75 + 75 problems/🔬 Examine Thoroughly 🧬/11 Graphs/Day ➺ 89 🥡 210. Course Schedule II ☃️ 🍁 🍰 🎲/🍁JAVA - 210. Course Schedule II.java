//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 210

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(numCourses)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] findOrder(int numCourses, int[][] prerequisites) {
            // ----------------------------------------------------------
            // Step 1: Build adjacency list (course → list of prerequisites)
            // ----------------------------------------------------------
            Map<Integer, List<Integer>> preReq = new HashMap<>();
            for (int i = 0; i < numCourses; i++) {
                  preReq.put(i, new ArrayList<>());
            }
            for (int[] pair : prerequisites) {
                  preReq.get(pair[0]).add(pair[1]);
            }

            List<Integer> output = new ArrayList<>(); // Topological order
            Set<Integer> visit = new HashSet<>(); // Fully visited courses
            Set<Integer> cycle = new HashSet<>(); // Current recursion path

            // ----------------------------------------------------------
            // Step 3: Run DFS from each course
            // ----------------------------------------------------------
            for (int crs = 0; crs < numCourses; crs++) {
                  if (!dfs(crs, preReq, visit, cycle, output)) {
                        return new int[0]; // Cycle found → return empty
                  }
            }

            // Convert List to array
            int[] res = new int[output.size()];
            for (int i = 0; i < output.size(); i++) {
                  res[i] = output.get(i);
            }
            return res;
      }

      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles and build order
      // ----------------------------------------------------------
      private boolean dfs(int crs, Map<Integer, List<Integer>> preReq,
                  Set<Integer> visit, Set<Integer> cycle,
                  List<Integer> output) {
            if (cycle.contains(crs))
                  return false; // Cycle detected
            if (visit.contains(crs))
                  return true; // Already processed

            cycle.add(crs); // Add to recursion stack

            for (int pre : preReq.get(crs)) {
                  if (!dfs(pre, preReq, visit, cycle, output)) {
                        return false;
                  }
            }

            cycle.remove(crs);
            visit.add(crs);
            output.add(crs); // Postorder append

            return true;
      }
}
