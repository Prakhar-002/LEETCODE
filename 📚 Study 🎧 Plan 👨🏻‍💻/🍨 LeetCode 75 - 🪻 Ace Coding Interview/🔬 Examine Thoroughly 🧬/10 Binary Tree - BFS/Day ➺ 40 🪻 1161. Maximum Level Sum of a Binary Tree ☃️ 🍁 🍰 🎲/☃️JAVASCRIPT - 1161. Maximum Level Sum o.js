//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1161

//? ⌚ Time complexity ➺ O(n)   👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  👉🏻  m = max width 

var maxLevelSum = function (root) {
      let minLevel = 0;          // Level with the maximum sum
      let maxSum = -Infinity;    // Initialize max sum to negative infinity
      let curLevel = 0;          // Current level counter

      const q = [root];

      while (q.length > 0) {
            let curSum = 0;      // Sum of the current level
            const levelSize = q.length;

            for (let i = 0; i < levelSize; i++) {
                  const node = q.shift();
                  curSum += node.val;

                  // Add left and right children to the queue
                  if (node.left) {
                        q.push(node.left);
                  }
                  if (node.right) {
                        q.push(node.right);
                  }
            }

            curLevel++; // Increment the current level

            // Update the level with the maximum sum
            if (maxSum < curSum) {
                  maxSum = curSum;
                  minLevel = curLevel;
            }
      }

      return minLevel;
}