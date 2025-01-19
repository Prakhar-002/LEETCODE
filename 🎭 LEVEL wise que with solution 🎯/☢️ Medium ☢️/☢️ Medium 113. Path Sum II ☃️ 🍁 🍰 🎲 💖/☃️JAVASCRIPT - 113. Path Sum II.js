//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 113

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

var pathSum = function (root, targetSum) {
      const res = []; // List to store all valid paths

      function findPath(node, path, curSum) {
            // Base case: If the node is None, return
            if (!node) {
                  return;
            }

            // Add the current node's value to the cumulative sum
            curSum += node.val;

            // Add the current node's value to the path
            path.push(node.val);

            // Check if the current node is a leaf and the path sum equals the target
            if (!node.left && !node.right && curSum === targetSum) {
                  // If so, append a copy of the path to the result
                  res.push([...path]);
            } else {
                  // Otherwise, recursively call for the left and right child nodes
                  findPath(node.left, path, curSum);
                  findPath(node.right, path, curSum);
            }

            // Backtrack: Remove the current node from the path before returning to the caller
            path.pop();
      }

      // Start the recursive search from the root with an empty path and sum of 0
      findPath(root, [], 0);

      // Return the list of all valid paths
      return res;
}


