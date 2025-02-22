//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1028

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var recoverFromPreorder = function (traversal) {
      let stack = [];
      let i = 0;  // Pointer for traversal

      while (i < traversal.length) {
            let dashes = 0; // Depth level of the current node

            // Count dashes to determine depth
            while (i < traversal.length && traversal[i] === '-') {
                  dashes++;
                  i++;
            }

            // Extract the numeric value of the node
            let j = i;
            while (j < traversal.length && !isNaN(traversal[j])) {
                  j++;
            }
            let val = parseInt(traversal.substring(i, j));
            let node = new TreeNode(val);
            i = j;  // Move pointer forward

            // Pop stack to correct depth level
            while (stack.length > dashes) {
                  stack.pop();
            }

            // Attach node to its parent based on availability
            if (stack.length > 0) {
                  if (!stack[stack.length - 1].left) {
                        stack[stack.length - 1].left = node;
                  } else {
                        stack[stack.length - 1].right = node;
                  }
            }

            // Push current node to stack
            stack.push(node);
      }

      return stack[0];  // Root node is the first element in the stack
}