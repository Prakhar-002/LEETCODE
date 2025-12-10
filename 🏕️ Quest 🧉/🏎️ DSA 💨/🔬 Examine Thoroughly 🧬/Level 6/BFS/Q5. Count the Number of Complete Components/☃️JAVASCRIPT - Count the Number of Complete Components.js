//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. od nodes

//? 🧺 Space complexity ➺ O(n)

var countCompleteComponents = function (n, edges) {
      // Build adjacency list for undirected graph
      const adj = Array.from({ length: n }, () => []);

      for (const [u, v] of edges) {
            adj[u].push(v);
            adj[v].push(u);
      }

      const visited = new Array(n).fill(false);
      let completeCount = 0;

      // DFS helper to collect nodes in the current component
      const dfs = (node, component) => {
            if (visited[node]) {
                  return;
            }

            visited[node] = true;
            component.push(node);

            for (const nei of adj[node]) {
                  if (!visited[nei]) {
                        dfs(nei, component);
                  }
            }
      };

      // Explore all components
      for (let v = 0; v < n; v++) {
            if (!visited[v]) {
                  const component = [];
                  dfs(v, component);

                  const size = component.length;
                  let isComplete = true;

                  // Check completeness: degree of each node == size - 1
                  for (const node of component) {
                        if (adj[node].length !== size - 1) {
                              isComplete = false;
                              break;
                        }
                  }

                  if (isComplete) {
                        completeCount++;
                  }
            }
      }

      return completeCount;
};
