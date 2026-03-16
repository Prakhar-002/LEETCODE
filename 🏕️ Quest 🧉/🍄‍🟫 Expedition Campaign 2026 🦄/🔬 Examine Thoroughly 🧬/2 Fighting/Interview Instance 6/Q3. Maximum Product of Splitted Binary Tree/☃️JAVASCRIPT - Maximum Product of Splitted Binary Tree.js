//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var maxProduct = function (root) {
      const M = 1_000_000_007n;    // BigInt to prevent precision loss
      let totalSum = 0n;          // Total sum of all nodes in the tree
      let maxProd = 0n;          // Tracks maximum product found so far

      // ---------- DFS: returns subtree sum rooted at node ----------
      function dfs(node) {
            // Base case: null node contributes 0 to sum
            if (!node)
                  return 0n;

            // Subtree sum = current node + left subtree + right subtree
            const subSum = BigInt(node.val) + dfs(node.left) + dfs(node.right);

            // Product of this split = subSum * remaining sum on other side
            const product = subSum * (totalSum - subSum);
            if (product > maxProd)
                  maxProd = product;

            return subSum;
      }

      // First pass: compute total sum of entire tree
      totalSum = dfs(root);

      // Second pass: try every possible edge cut and track max product
      dfs(root);

      return Number(maxProd % M);
};