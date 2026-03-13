//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var canFinish = function (numCourses, prerequisites) {
      // ----------------------------------------------------------
      // Step 1: Build adjacency list (course → list of prerequisites)
      // ----------------------------------------------------------
      const preMap = {};
      for (let i = 0; i < numCourses; i++) {
            preMap[i] = [];
      }
      for (let [crs, pre] of prerequisites) {
            preMap[crs].push(pre);
      }

      // Set to track nodes in current recursion stack
      const visitSet = new Set();

      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles
      // ----------------------------------------------------------
      function dfs(crs) {
            // If course already in recursion stack → cycle found
            if (visitSet.has(crs)) {
                  return false;
            }
            // If no prerequisites → no cycle here
            if (preMap[crs].length === 0) {
                  return true;
            }

            // Mark course as being visited
            visitSet.add(crs);

            // Recursively check prerequisites
            for (let pre of preMap[crs]) {
                  if (!dfs(pre)) {
                        return false;
                  }
            }

            // Remove from recursion stack
            visitSet.delete(crs);
            // Memoize by clearing prerequisites
            preMap[crs] = [];

            return true;
      }

      // ----------------------------------------------------------
      // Step 3: Run DFS for each course
      // ----------------------------------------------------------
      for (let course = 0; course < numCourses; course++) {
            if (!dfs(course)) {
                  return false;
            }
      }

      return true;
};
