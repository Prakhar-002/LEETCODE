//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2641

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Number of Nodes

//? 🧺 Space complexity ➺ O(h) -> h = Height of Tree

var replaceValueInTree = function (root) {
      // Array to store the sum of values at each level of the tree
      const levelSum = [];

      // Queue for level-order traversal
      const q = [];

      // Add root to the queue
      q.push(root);

      // First traversal: Calculate the sum of nodes at each level
      while (q.length > 0) {
            let curSum = 0; // Sum of values at current level
            const size = q.length; // Number of nodes at current level

            for (let i = 0; i < size; i++) {
                  const node = q.shift(); // Remove and get the first node in the queue
                  curSum += node.val; // Add node's value to current sum

                  // Add children to queue if they exist
                  if (node.left !== null)
                        q.push(node.left);

                  if (node.right !== null)
                        q.push(node.right);
            }

            levelSum.push(curSum); // Add sum of current level to array
      }

      // Second traversal: Replace node values
      q.push(root); // Add root back to queue for second traversal
      let level = 0; // Track current level

      while (q.length > 0) {
            // Number of nodes at current level
            const size = q.length;

            for (let i = 0; i < size; i++) {
                  // Remove and get the first node in the queue
                  const node = q.shift();

                  // Calculate the sum of values of its child nodes
                  const siblingSum = (node.left !== null ? node.left.val : 0) +
                        (node.right !== null ? node.right.val : 0);

                  // Replace left child's value and add to queue
                  if (node.left !== null) {
                        node.left.val = levelSum[level + 1] - siblingSum;
                        q.push(node.left);
                  }

                  // Replace right child's value and add to queue
                  if (node.right !== null) {
                        node.right.val = levelSum[level + 1] - siblingSum;
                        q.push(node.right);
                  }
            }

            level++; // Move to next level
      }

      root.val = 0; // Set root's value to 0
      return root; // Return the modified tree
}