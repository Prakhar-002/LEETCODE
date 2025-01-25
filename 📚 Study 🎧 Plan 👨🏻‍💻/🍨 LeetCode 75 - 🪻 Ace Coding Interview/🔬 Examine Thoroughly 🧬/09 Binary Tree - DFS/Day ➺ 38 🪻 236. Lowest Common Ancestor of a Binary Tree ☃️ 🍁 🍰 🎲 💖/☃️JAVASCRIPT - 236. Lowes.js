//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 236

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. Of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

var lowestCommonAncestor = function (root, p, q) {
      // Helper function to perform DFS
      const dfs = (node) => {
            // If the current node is null, return null
            if (!node) {
                  return null;
            }

            // If the current node matches either p or q, return the current node
            if (node === p || node === q) {
                  return node;
            }

            // Recursively search the left and right subtrees
            const left = dfs(node.left);
            const right = dfs(node.right);

            // If both left and right are non-null, the current node is the LCA
            if (left && right) {
                  return node;
            }

            // Return the non-null child, or null if both are null
            return left ? left : right;
      };

      // Start DFS from the root
      return dfs(root);
}