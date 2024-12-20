//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2415

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of node

//? 🧺 Space complexity ➺ O(n)

var reverseOddLevels = function (root) {
      // Initialize a queue for level order traversal
      const queue = [root];

      let isOddLevel = false; // Flag to track odd levels

      while (queue.length > 0) {
            const size = queue.length;
            const nodes = [];

            // Store nodes of the current level
            for (let i = 0; i < size; i++) {
                  const node = queue.shift();
                  nodes.push(node);

                  // Add child nodes to the queue
                  if (node.left) queue.push(node.left);
                  if (node.right) queue.push(node.right);
            }

            // Reverse node values if the level is odd
            if (isOddLevel) {
                  let left = 0, right = nodes.length - 1;
                  while (left < right) {
                        const temp = nodes[left].val;
                        nodes[left].val = nodes[right].val;
                        nodes[right].val = temp;
                        left++;
                        right--;
                  }
            }

            // Toggle the level flag
            isOddLevel = !isOddLevel;
      }

      return root;
}