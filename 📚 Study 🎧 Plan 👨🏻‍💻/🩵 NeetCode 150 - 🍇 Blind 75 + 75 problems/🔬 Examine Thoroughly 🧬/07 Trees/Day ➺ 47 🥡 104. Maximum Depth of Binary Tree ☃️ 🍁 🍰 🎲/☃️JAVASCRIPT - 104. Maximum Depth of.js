//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Recursive DFS

var maxDepth = function (root) {
      // If the tree is empty, return 0 (no depth)
      if (root === null) {
            return 0;
      }

      // Recursively compute the depth of the left subtree
      var leftHeight = maxDepth(root.left);

      // Recursively compute the depth of the right subtree
      var rightHeight = maxDepth(root.right);

      // Find the maximum depth between the left and right subtrees
      var max = Math.max(leftHeight, rightHeight);

      // Return the maximum depth plus 1 for the current node
      return max + 1;
};

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* BFS 

var maxDepth = function (root) {
      // Initialize a stack to perform depth-first search (DFS)
      // Each element in the stack is an array containing a node and its depth
      let stack = [[root, 1]];

      // Variable to track the maximum depth of the tree
      let level = 0;

      // Process nodes until the stack is empty
      while (stack.length > 0) {
            // Pop the top element of the stack (current node and its depth)
            let [node, depth] = stack.pop();

            // If the node is not null, process it
            if (node) {
                  // Update the maximum depth encountered so far
                  level = Math.max(level, depth);

                  // Add the left child to the stack with depth incremented by 1
                  stack.push([node.left, depth + 1]);

                  // Add the right child to the stack with depth incremented by 1
                  stack.push([node.right, depth + 1]);
            }
      }

      // Return the maximum depth of the binary tree
      return level;
}

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Iterative DFS 

var maxDepth = function (root) {
      // Initialize a stack to perform depth-first search (DFS)
      // Each element in the stack is an array containing a node and its depth
      let stack = [[root, 1]];

      // Variable to track the maximum depth of the tree
      let level = 0;

      // Process nodes until the stack is empty
      while (stack.length > 0) {
            // Pop the top element of the stack (current node and its depth)
            let [node, depth] = stack.pop();

            // If the node is not null, process it
            if (node) {
                  // Update the maximum depth encountered so far
                  level = Math.max(level, depth);

                  // Add the left child to the stack with depth incremented by 1
                  stack.push([node.left, depth + 1]);

                  // Add the right child to the stack with depth incremented by 1
                  stack.push([node.right, depth + 1]);
            }
      }

      // Return the maximum depth of the binary tree
      return level;
}