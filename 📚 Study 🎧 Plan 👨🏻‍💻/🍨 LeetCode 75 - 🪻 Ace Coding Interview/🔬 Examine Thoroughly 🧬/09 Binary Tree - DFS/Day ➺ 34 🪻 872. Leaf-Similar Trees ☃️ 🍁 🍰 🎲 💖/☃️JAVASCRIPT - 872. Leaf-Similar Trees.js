//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 872

//? ⌚ Time complexity ➺ O(n1 + n2) 👉🏻  n1, n2 = No. of nodes in roo1 and root2

//? 🧺 Space complexity ➺ O(h + l)  👉🏻  h = height of tree , l = No. of leaf nodes

// Helper function to extract leaf values from a binary tree
var getLeafValues = function (root) {
      const leafs = [];
      const stack = [root];

      while (stack.length > 0) {
            const node = stack.pop();
            if (node) {
                  if (!node.left && !node.right) {
                        leafs.push(node.val);
                  }
                  stack.push(node.right);
                  stack.push(node.left);
            }
      }
      return leafs;
}

var leafSimilar = function (root1, root2) {
      // Extract leaf values from both trees
      const leafs1 = getLeafValues(root1);
      const leafs2 = getLeafValues(root2);

      // Compare the leaf values of both trees
      return JSON.stringify(leafs1) === JSON.stringify(leafs2);
}