//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 261

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(m * n)

var validTree = function (n, edges) {
      // ----------------------------------------------------------
      // Condition 1: A valid tree must have exactly n - 1 edges
      // ----------------------------------------------------------
      if (edges.length !== n - 1) {
            return false;
      }

      // Create adjacency list
      const adj = Array.from({ length: n }, () => []);
      for (let [u, v] of edges) {
            adj[u].push(v);
            adj[v].push(u);
      }

      const visit = new Set();

      // ----------------------------------------------------------
      // DFS helper to check for cycles
      // ----------------------------------------------------------
      function dfs(node, par) {
            // If we visit a node already in our set, we found a cycle
            if (visit.has(node)) {
                  return false;
            }
            visit.add(node);

            for (let nei of adj[node]) {
                  // Skip the neighbor if it's the parent node
                  if (nei === par) {
                        continue;
                  }
                  // If a recursive call finds a cycle, propagate False
                  if (!dfs(nei, node)) {
                        return false;
                  }
            }
            return true;
      }

      // ----------------------------------------------------------
      // Condition 2: Graph must be fully connected and have no cycles
      // ----------------------------------------------------------
      return dfs(0, -1) && visit.size === n;
};
