//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q2

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {boolean}
 */
var isPossible = function (n, edges) {
      // adj[i] = set of neighbors of node i (undirected graph)
      // Using Set for O(1) edge existence checks
      let adj = Array.from({ length: n + 1 }, () => new Set());

      // Build undirected adjacency list from directed edges
      for (let [src, dest] of edges) {
            adj[src].add(dest);        // src ↔ dest
            adj[dest].add(src);        // Undirected: both directions
      }

      // Collect nodes with odd degree (size of adj[i] = degree)
      let odds = [];

      for (let i = 1; i <= n; i++) {
            if (adj[i].size % 2 === 1) {  // Odd degree
                  odds.push(i);
            }
      }

      // Handshaking lemma: Eulerian path requires exactly 0 or 2 odd-degree nodes
      // Here we can add ≤2 edges to fix up to 4 odd-degree nodes
      // Impossible if: odd count OR more than 4 odds
      if (odds.length % 2 === 1 || odds.length > 4) {
            return false;
      }

      // Case 0: Already Eulerian (all even degrees)
      if (odds.length === 0) {
            return true;
      }

      // Case 2: Exactly 2 odd-degree nodes [a,b]
      if (odds.length === 2) {
            let [a, b] = odds;
            // Option 1: Add direct edge a-b (if doesn't exist)
            if (!adj[a].has(b)) {
                  return true;
            }
            // Option 2: Add edges a-x and b-x via some intermediate x
            for (let x = 1; x <= n; x++) {
                  if (x !== a && x !== b &&
                        !adj[a].has(x) &&
                        !adj[b].has(x)) {
                        return true;
                  }
            }
            return false;
      }

      // Case 4: Exactly 4 odd-degree nodes [a,b,c,d]
      // Need to add 2 edges forming perfect matching
      let [a, b, c, d] = odds;

      // Helper: Can add edge u-v if it doesn't already exist
      const canAdd = (u, v) => !adj[u].has(v);

      // Try all 3 possible perfect matchings for 4 nodes:
      // 1) Connect a-b AND c-d
      if (canAdd(a, b) && canAdd(c, d)) {
            return true;
      }
      // 2) Connect a-c AND b-d
      if (canAdd(a, c) && canAdd(b, d)) {
            return true;
      }
      // 3) Connect a-d AND b-c
      if (canAdd(a, d) && canAdd(b, c)) {
            return true;
      }

      return false;                  // No valid pairing found
};
