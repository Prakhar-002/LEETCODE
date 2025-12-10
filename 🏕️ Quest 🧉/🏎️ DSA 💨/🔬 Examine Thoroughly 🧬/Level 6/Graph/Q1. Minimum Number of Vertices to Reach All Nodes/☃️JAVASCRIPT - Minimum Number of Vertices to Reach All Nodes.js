//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q1

//? ⌚ Time complexity ➺ O(E + V) 

//? 🧺 Space complexity ➺ O(E + V)

var findSmallestSetOfVertices = function (n, edges) {
      // Reverse adjacency: dest -> sources (in-degree representation)
      const adj = new Array(n).fill().map(() => []);

      // Build incoming edges for each node
      for (let [src, dest] of edges) {
            // src -> dest: dest has incoming from src
            adj[dest].push(src);
      }

      const res = [];

      // Nodes with empty incoming arrays have in-degree 0
      for (let i = 0; i < n; i++) {
            if (adj[i].length === 0) {
                  res.push(i);
            }
      }

      return res;
};
