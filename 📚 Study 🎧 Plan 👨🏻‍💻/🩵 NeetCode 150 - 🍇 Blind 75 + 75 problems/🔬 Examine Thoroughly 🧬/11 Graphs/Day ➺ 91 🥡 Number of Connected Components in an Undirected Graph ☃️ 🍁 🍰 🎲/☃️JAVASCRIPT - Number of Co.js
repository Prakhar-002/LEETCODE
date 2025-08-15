//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 323

//? ⌚ Time complexity ➺ O(V + E)

//? 🧺 Space complexity ➺ O(V + E)

var countComponents = function (n, edges) {
      // Create an adjacency list to represent the graph
      const adj = Array.from({ length: n }, () => []);
      // Use a boolean array to track visited nodes
      const visit = new Array(n).fill(false);

      // Build the adjacency list from the edge list
      for (let [u, v] of edges) {
            adj[u].push(v);
            adj[v].push(u);
      }

      // ----------------------------------------------------------
      // DFS helper to traverse and mark all nodes in a component
      // ----------------------------------------------------------
      function dfs(node) {
            // Explore all neighbors of the current node
            for (let nei of adj[node]) {
                  // If a neighbor hasn't been visited yet
                  if (!visit[nei]) {
                        // Mark it as visited
                        visit[nei] = true;
                        // Recursively call DFS on the neighbor
                        dfs(nei);
                  }
            }
      }

      let res = 0; // Initialize component count

      // ----------------------------------------------------------
      // Iterate through each node to find unvisited components
      // ----------------------------------------------------------
      for (let node = 0; node < n; node++) {
            // If the node has not been visited, it's a new component
            if (!visit[node]) {
                  // Mark the starting node of the new component
                  visit[node] = true;
                  // Start DFS to visit all nodes in this component
                  dfs(node);
                  // Increment the component count
                  res++;
            }
      }

      return res;
};
