//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var allPathsSourceTarget = function (graph) {
      const n = graph.length;
      const target = n - 1;

      const res = [];   // To store all paths
      const path = [];  // Current path during DFS

      // DFS backtracking function
      const dfs = (node) => {
            // Add current node to path
            path.push(node);

            // If node is target, push a copy of path to result
            if (node === target) {
                  res.push([...path]);  // spread to clone
            } else {
                  // Explore all neighbors of the current node
                  for (const nei of graph[node]) {
                        dfs(nei);
                  }
            }

            // Backtrack: remove current node from path
            path.pop();
      };

      // Start DFS from node 0
      dfs(0);

      return res;
};
