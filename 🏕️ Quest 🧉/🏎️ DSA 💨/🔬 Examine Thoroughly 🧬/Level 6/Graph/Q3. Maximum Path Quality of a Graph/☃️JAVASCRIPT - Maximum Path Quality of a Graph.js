//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q3

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

var maximalPathQuality = function (val, edges, maxTime) {
      const n = val.length;

      // Build adjacency list: adj[u] = Array of [v, t] pairs
      const adj = Array.from({ length: n }, () => []);

      // Construct undirected graph from edges
      for (let [u, v, t] of edges) {
            adj[u].push([v, t]);       // u -> [v, time]
            adj[v].push([u, t]);       // v -> [u, time] - undirected
      }

      let ans = 0;  // Maximum path value found

      // Separate DFS helper function
      function dfs(src, currTime, currValue, value) {
            // Early termination for time exceeded paths
            if (currTime > maxTime) {
                  return;
            }

            // Accumulate current node value (visited nodes zeroed out)
            currValue += value[src];

            // Update maximum when returning to start node (0)
            if (src === 0) {
                  ans = Math.max(ans, currValue);
            }

            // Backup and mark as visited to prevent double counting
            const temp = value[src];
            value[src] = 0;

            // Recurse through all neighbors
            for (let [nei, cost] of adj[src]) {
                  dfs(nei, currTime + cost, currValue, value);
            }

            // Restore value on backtrack
            value[src] = temp;
      }

      // Start DFS from node 0 with value copy
      dfs(0, 0, 0, [...val]);  // Spread creates shallow copy

      return ans;
};
