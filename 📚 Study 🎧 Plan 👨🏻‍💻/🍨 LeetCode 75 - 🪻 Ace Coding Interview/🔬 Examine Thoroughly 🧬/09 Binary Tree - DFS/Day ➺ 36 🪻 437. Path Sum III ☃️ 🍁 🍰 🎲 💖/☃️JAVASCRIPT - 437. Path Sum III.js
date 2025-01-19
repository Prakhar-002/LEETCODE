//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 437

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

var pathSum = function(root, targetSum) {
      // Map to store the frequency of prefix sums encountered
      let sums = new Map();
      sums.set(0, 1);  // Base case: there's one way to get a sum of 0 (empty path)

      // Helper function to perform DFS
      return dfs(root, targetSum, 0, sums);
};

function dfs(node, targetSum, currentSum, sums) {
      // If the node is null, no path is possible
      if (!node) {
            return 0;
      }

      // Add the current node's value to the running sum
      currentSum += node.val;

      // The number of valid paths to the current node is the number of times
      // (currentSum - targetSum) has been seen as a prefix sum
      let count = sums.get(currentSum - targetSum) || 0;

      // Record the current sum in the prefix sum map
      sums.set(currentSum, (sums.get(currentSum) || 0) + 1);

      // Recursively check the left and right subtrees for more paths
      count += dfs(node.left, targetSum, currentSum, sums) + dfs(node.right, targetSum, currentSum, sums);

      // Backtrack: remove the current sum from the prefix sum map
      sums.set(currentSum, sums.get(currentSum) - 1);

      return count;
}

//!---------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(H)    👉🏻  h = Height of Tree

//* Dual DFS

var pathSum = function(root, targetSum) {
      // Helper function to count paths starting from the current node
      return pathFromNode(root, BigInt(targetSum));
};

function pathFromNode(node, target) {
      if (!node) {
            return 0;
      }

      // Start DFS from the current node and check all paths
      let count = dfs(node, target);

      // Recursively check the left and right subtrees for paths
      count += pathFromNode(node.left, target);
      count += pathFromNode(node.right, target);
      return count;
}

function dfs(node, target) {
      if (!node) {
            return 0;
      }

      // Check if the current node itself matches the target
      let count = (BigInt(node.val) === target) ? 1 : 0;

      // Recursively check the left and right subtrees
      count += dfs(node.left, target - BigInt(node.val));
      count += dfs(node.right, target - BigInt(node.val));

      return count;
}
