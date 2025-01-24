//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 802

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = Vertex Of Graph

//? 🧺 Space complexity ➺ O(V)      ->  E = Edges Of Graph

function eventualSafeNodes(graph) {
      const n = graph.length;
      const safe = {}; // Store safety status for nodes
      const safeNodes = [];

      // DFS function to check if a node is safe
      function dfs(node) {
            // If the result for this node is already computed, return it
            if (safe.hasOwnProperty(node)) {
                  return safe[node];
            }

            // Assume the current node is not safe
            safe[node] = false;

            // Explore all neighbors of the current node
            for (const neighbor of graph[node]) {
                  if (!dfs(neighbor)) {
                        return false;
                  }
            }

            // If all neighbors are safe, the current node is safe
            safe[node] = true;
            return true;
      }

      // Main logic
      for (let i = 0; i < n; i++) {
            if (dfs(i)) {
                  result.push(i);
            }
      }
      return safeNodes;
}
