//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var validPath = function (n, edges, source, destination) {
      // Build adjacency list for undirected graph
      // adj[u] = array of neighbors v such that there is an edge u <-> v
      const adj = Array.from({ length: n }, () => []);

      // Populate adjacency list from edges
      for (const [src, dest] of edges) {
            // Undirected: add both directions
            adj[src].push(dest);
            adj[dest].push(src);
      }

      // Track visited nodes to avoid infinite loops
      const visited = new Array(n).fill(false);

      // DFS function to check if there is a path from 'node' to 'destination'
      const dfs = (node) => {
            // If destination is reached, path exists
            if (node === destination) {
                  return true;
            }

            // Mark node as visited
            visited[node] = true;

            // Explore neighbors
            for (const nei of adj[node]) {
                  if (!visited[nei]) {
                        if (dfs(nei)) {
                              return true;
                        }
                  }
            }

            // No path from this branch
            return false;
      };

      // Start DFS from source
      return dfs(source);
};
