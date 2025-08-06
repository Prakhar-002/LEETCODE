//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 124

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(h)

var maxPathSum = function (root) {
      // Variable to track the maximum path sum found so far
      let maxSum = root.val;

      // Helper function for DFS traversal
      function dfs(node) {
            // If node is null, it contributes 0 to the path
            if (!node) return 0;

            // Recursively get the max path sum from the left subtree
            let leftMax = dfs(node.left);
            // Recursively get the max path sum from the right subtree
            let rightMax = dfs(node.right);

            // Ignore paths that contribute negative sum
            leftMax = Math.max(leftMax, 0);
            rightMax = Math.max(rightMax, 0);

            // Update global maxSum considering the case where the path goes through the current node
            maxSum = Math.max(maxSum, node.val + leftMax + rightMax);

            // Return the maximum single path sum starting from this node to parent
            return node.val + Math.max(leftMax, rightMax);
      }

      // Start DFS from the root node
      dfs(root);

      // Return the final maximum path sum
      return maxSum;
};