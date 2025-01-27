//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1462

//? ⌚ Time complexity ➺ O(V+E+Q) 

//* 👉🏻  V is the number of courses.
//* 👉🏻 E is the number of prerequisites.
//* 👉🏻 Q is the number of queries.

//? 🧺 Space complexity ➺ O(V^2 + E)

var checkIfPrerequisite = function (numCourses, prerequisites, queries) {
      // Adjacency list to represent prerequisites for each course
      const adj = new Map();

      // Build the adjacency list from prerequisites
      for (const [preReq, crs] of prerequisites) {
            if (!adj.has(crs)) adj.set(crs, []);
            adj.get(crs).push(preReq);
      }

      // Map to store the set of prerequisites for each course
      const preReqMap = new Map();

      // Depth First Search function to find all prerequisites of a course
      const dfs = (crs) => {
            if (!preReqMap.has(crs)) {
                  const prerequisitesSet = new Set();

                  // Recursively add prerequisites from the adjacency list
                  for (const preReq of adj.get(crs) || []) {
                        const tempSet = dfs(preReq);
                        for (const item of tempSet) prerequisitesSet.add(item);
                  }

                  prerequisitesSet.add(crs);
                  preReqMap.set(crs, prerequisitesSet);
            }

            return preReqMap.get(crs);
      };

      // Compute prerequisite sets for all courses
      for (let crs = 0; crs < numCourses; crs++) {
            dfs(crs);
      }

      // Answer list to store the results for each query
      const answer = [];
      for (const [u, v] of queries) {
            answer.push(preReqMap.get(v)?.has(u) || false);
      }

      return answer;
};
