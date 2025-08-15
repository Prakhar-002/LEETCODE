//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 210

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(numCourses)

//? 🧺 Space complexity ➺ O(n)

var findOrder = function (numCourses, prerequisites) {
      // ----------------------------------------------------------
      // Step 1: Build adjacency list (course → list of prerequisites)
      // ----------------------------------------------------------
      const preReq = {};
      for (let i = 0; i < numCourses; i++) {
            preReq[i] = [];
      }
      for (let [crs, pre] of prerequisites) {
            preReq[crs].push(pre);
      }

      const output = [];     // Topological order
      const visit = new Set(); // Fully visited courses
      const cycle = new Set(); // Current recursion path

      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles and build order
      // ----------------------------------------------------------
      function dfs(crs) {
            if (cycle.has(crs)) return false; // Cycle detected
            if (visit.has(crs)) return true;  // Already processed

            cycle.add(crs); // Add to recursion path

            for (let pre of preReq[crs]) {
                  if (!dfs(pre)) return false;
            }

            cycle.delete(crs);
            visit.add(crs);
            output.push(crs); // Postorder append
            return true;
      }

      // ----------------------------------------------------------
      // Step 3: Run DFS from each course
      // ----------------------------------------------------------
      for (let crs = 0; crs < numCourses; crs++) {
            if (!dfs(crs)) return [];
      }

      return output;
};
