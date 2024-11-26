//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2924

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V) 👉🏻 E = Edges

var findChampion = function (n, edges) {
      // Array to count incoming edges for each node
      const incoming = Array(n).fill(0);

      // Increment the count of incoming edges for destination nodes
      for (const [src, dest] of edges) {
            incoming[dest]++;
      }

      // Array to store potential champions (nodes with no incoming edges)
      const champions = [];

      // Check each node's incoming edge count
      for (let i = 0; i < n; i++) {
            // If a node has no incoming edges, add it to the champions list
            if (incoming[i] === 0) {
                  champions.push(i);
            }
      }

      // If there is more than one node with no incoming edges, return -1
      if (champions.length > 1) {
            return -1;
      }

      // Return the champion (node with no incoming edges) if exactly one exists
      return champions[0];
}