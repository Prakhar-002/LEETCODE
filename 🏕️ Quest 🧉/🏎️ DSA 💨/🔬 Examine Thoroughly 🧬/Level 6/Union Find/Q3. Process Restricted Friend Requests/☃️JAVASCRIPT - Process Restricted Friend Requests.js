//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q3

//? ⌚ Time complexity ➺ O(Q × R × α(N))) 👉🏻  Q = len(Request)

//? 🧺 Space complexity ➺ O(1)  -> R = len(restrictions)

var friendRequests = function (n, restrictions, requests) {
      // parent[i] = parent of node i (initially self)
      const parent = Array(n + 1).fill(0).map((_, i) => i);

      const find = (x) => {
            // Path compression
            if (parent[x] !== x) {
                  parent[x] = find(parent[x]);
            }
            return parent[x];
      };

      const union = (x, y) => {
            const rootX = find(x);
            const rootY = find(y);
            if (rootX !== rootY) {
                  parent[rootY] = rootX;
            }
      };

      const result = [];

      for (let [u, v] of requests) {
            const rootU = find(u);
            const rootV = find(v);

            let canBeFriends = true;

            // Already connected? Always allow
            if (rootU !== rootV) {
                  // Check if this violates any restriction
                  for (let [x, y] of restrictions) {
                        const rootX = find(x);
                        const rootY = find(y);

                        // u-v connection would connect forbidden x-y
                        if ((rootX === rootU && rootY === rootV) ||
                              (rootX === rootV && rootY === rootU)) {
                              canBeFriends = false;
                              break;
                        }
                  }
            }

            if (canBeFriends) {
                  union(u, v);
                  result.push(true);
            } else {
                  result.push(false);
            }
      }

      return result;
};
