//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var longestUnivaluePath = function (root) {
      /**
       * Find longest univalue path: all nodes have same value.
       * Can go left→root→right (not just root-to-leaf).
       */
      let ans = 0;  // Global maximum path length

      function dfs(node, parentVal) {
            /**
             * Post-order DFS: returns longest univalue path DOWNWARD from node.
             * Updates global 'ans' with max path through current node.
             */
            if (!node) {
                  return 0;  // Base case: null node
            }

            // Recurse on children
            let left = dfs(node.left, node.val);
            let right = dfs(node.right, node.val);

            // Update global max path through current node
            ans = Math.max(ans, left + right);

            // Return longest downward path from THIS node
            if (node.val === parentVal) {
                  return Math.max(left, right) + 1;  // Extend longer child
            }
            return 0;  // Cannot extend upward
      }

      dfs(root, -1);  // Start with dummy parent value
      return ans;
};
