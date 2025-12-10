//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var minScore = function (n, roads) {
      // Adjacency list: for each city, list of [neighbor, distance]
      const adj = Array.from({ length: n + 1 }, () => []);

      // Build undirected graph
      for (const [src, dest, dist] of roads) {
            adj[src].push([dest, dist]);
            adj[dest].push([src, dist]);
      }

      const visited = new Array(n + 1).fill(false);
      let res = Number.POSITIVE_INFINITY;  // Global minimum distance

      // DFS to traverse all nodes reachable from 1
      const dfs = (node) => {
            if (visited[node]) {
                  return;   // Already visited this node
            }

            visited[node] = true;

            for (const [nei, dist] of adj[node]) {
                  // Update minimum edge distance encountered
                  res = Math.min(res, dist);
                  dfs(nei);
            }
      };

      // Start DFS from city 1
      dfs(1);

      return res;
};
