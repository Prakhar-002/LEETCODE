//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 515

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  ->   w <= n

var largestValues = function (root) {
      // If the tree is empty, return an empty array
      if (!root) {
            return [];
      }

      // Initialize a queue with the root node
      const queue = [root];

      // Initialize the result array to store the largest values in each row
      const levelMaxes = [];

      // Perform level-order traversal
      while (queue.length > 0) {
            // Initialize the maximum value for the current level
            let curMax = -Infinity;

            // Traverse all nodes in the current level
            const levelSize = queue.length;
            for (let i = 0; i < levelSize; i++) {
                  const node = queue.shift();

                  // Update the maximum value for the current level
                  curMax = Math.max(curMax, node.val);

                  // Add the left child to the queue if it exists
                  if (node.left) {
                        queue.push(node.left);
                  }

                  // Add the right child to the queue if it exists
                  if (node.right) {
                        queue.push(node.right);
                  }
            }

            // Append the largest value of the current level to the result array
            levelMaxes.push(curMax);
      }

      // Return the result array containing the largest values in each row
      return levelMaxes;
}