//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1448

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Recursive Way

var dfs = function (node, maxVal) {
      // Base case: if the node is null, return 0
      if (!node) {
            return 0;
      }

      // Count this node as "good" if its value is greater than or equal to maxVal
      let goodNode = (node.val >= maxVal) ? 1 : 0;

      // Update maxVal to the maximum value encountered so far
      maxVal = Math.max(maxVal, node.val);

      // Recursively count the good nodes in the left and right subtrees
      goodNode += dfs(node.left, maxVal);
      goodNode += dfs(node.right, maxVal);

      return goodNode;
}

var goodNodes = function (root) {
      // Start the DFS with the root value as the initial maxVal
      return dfs(root, root.val);
}


//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Iterative Version

var goodNodes = function (root) {
      if (!root) {
            return 0;
      }

      // Stack to store pairs of nodes and their maximum value encountered so far
      let stack = [[root, root.val]];
      let goodNodeCount = 0;

      while (stack.length > 0) {
            // Pop the top element of the stack (current node and its maxVal)
            let [node, maxVal] = stack.pop();

            // Count this node as "good" if its value is greater than or equal to maxVal
            if (node.val >= maxVal) {
                  goodNodeCount++;
            }

            // Update maxVal to the maximum value encountered so far
            maxVal = Math.max(maxVal, node.val);

            // Push the left and right children to the stack
            if (node.right) {
                  stack.push([node.right, maxVal]);
            }
            if (node.left) {
                  stack.push([node.left, maxVal]);
            }
      }

      return goodNodeCount;
}