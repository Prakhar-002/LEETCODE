//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 199

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)   ->  m = max width 

var rightSideView = function (root) {
      // Array to store the right-side view
      const rightSideArr = [];

      // Queue for level-order traversal (BFS)
      const q = [];
      if (root) {
            q.push(root);
      }

      // Perform BFS
      while (q.length > 0) {
            let rightSide = null;

            // Iterate over all nodes at the current level
            const levelSize = q.length;
            for (let i = 0; i < levelSize; i++) {
                  const node = q.shift();
                  if (node) {
                        // Update the rightmost node
                        rightSide = node;
                        // Add left and right children to the queue
                        if (node.left) {
                              q.push(node.left);
                        }
                        if (node.right) {
                              q.push(node.right);
                        }
                  }
            }

            // Append the rightmost node's value if it exists
            if (rightSide) {
                  rightSideArr.push(rightSide.val);
            }
      }

      // Return the right-side view
      return rightSideArr;
}