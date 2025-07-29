//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2322

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minimumScore = function (nums, edges) {
      const n = nums.length;  // Total number of nodes in the tree

      // Initialize adjacency list for undirected graph
      const e = Array.from({ length: n }, () => []);
      for (const [u, v] of edges) {
            e[u].push(v);  // Add edge from u to v
            e[v].push(u);  // Add edge from v to u
      }

      let sum = 0;  // Will hold XOR of all node values
      for (const x of nums) {
            sum ^= x;  // Calculate total XOR of all node values
      }

      let res = Infinity;  // Initialize result to a large value

      // Second DFS to evaluate second cut after first cut is made
      function dfs2(x, f, oth, anc) {
            let son = nums[x];  // Start with current node's value

            for (const y of e[x]) {
                  if (y === f) {
                        continue;  // Skip the parent node
                  }
                  son ^= dfs2(y, x, oth, anc);  // Accumulate XOR for subtree
            }

            if (f === anc) {
                  return son;  // Skip processing for ancestor node
            }

            // Update result with current partition score
            res = Math.min(res, calc(oth, son, sum ^ oth ^ son));
            return son;  // Return subtree XOR value
      }

      // First DFS to simulate first edge cut
      function dfs(x, f) {
            let son = nums[x];  // Start with current node's value

            for (const y of e[x]) {
                  if (y === f) {
                        continue;  // Skip the parent node
                  }
                  son ^= dfs(y, x);  // Accumulate XOR for subtree
            }

            // Try second cut on each child node
            for (const y of e[x]) {
                  if (y === f) {
                        dfs2(y, x, son, x);  // Evaluate second cut
                  }
            }

            return son;  // Return XOR of subtree
      }

      dfs(0, -1);  // Start DFS from root node with no parent
      return res;  // Return the minimum score found
};

// Function to calculate the score from three partition values
function calc(part1, part2, part3) {
      return (
            Math.max(part1, Math.max(part2, part3)) -
            Math.min(part1, Math.min(part2, part3))
      );
}
