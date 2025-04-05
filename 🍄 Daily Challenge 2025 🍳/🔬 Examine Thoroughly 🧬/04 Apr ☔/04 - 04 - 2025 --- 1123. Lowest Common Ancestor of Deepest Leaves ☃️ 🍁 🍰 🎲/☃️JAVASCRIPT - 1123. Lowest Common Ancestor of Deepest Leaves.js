//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1123

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var lcaDeepestLeaves = function (root) {
      // Helper DFS function returning [LCA, depth]
      function dfs(node, depth) {
            if (!node) return [null, depth + 1];  // Base case

            let [leftNode, leftDepth] = dfs(node.left, depth + 1);  // Left subtree
            let [rightNode, rightDepth] = dfs(node.right, depth + 1);  // Right subtree

            if (leftDepth > rightDepth) return [leftNode, leftDepth];
            else if (leftDepth < rightDepth) return [rightNode, rightDepth];

            return [node, leftDepth];  // Equal depth: current is LCA
      }

      return dfs(root, 0)[0];  // Return the LCA node
};
