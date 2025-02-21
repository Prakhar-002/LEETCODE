//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1261

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* DFS 

class FindElements {
      constructor(root) {
            // Initialize a set to store recovered values
            this.seen = new Set();
            // Start DFS traversal to reconstruct tree
            this.dfs(root, 0);
      }

      /*
      * Check if the target value exists in the recovered tree.
      * Returns True if the target exists, otherwise False.
      */
      find(target) {
            // Check if target exists in the recovered set
            return this.seen.has(target);
      }

      /*
      * Recovers the tree using DFS traversal.
      * cur_node: Current node being processed
      * cur_val: Corrected value of the current node
      */
      dfs(curNode, curVal) {
            if (!curNode) {
                  return; // Base case: if node is null, stop recursion
            }

            // Store the recovered value
            this.seen.add(curVal);

            // Recursively recover left and right children
            this.dfs(curNode.left, curVal * 2 + 1);
            this.dfs(curNode.right, curVal * 2 + 2);
      }
}

//!------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* BFS 

class FindElements {
      /*
      * Constructor to recover the tree.
      * Uses BFS to reconstruct the tree and store valid values.
      */
      constructor(root) {
            this.seen = new Set(); // Set to store recovered values
            this.bfs(root); // Start BFS traversal to recover tree
      }

      /*
      * Check if the target value exists in the recovered tree.
      * Returns True if found, otherwise False.
      */
      find(target) {
            // Check if the target exists in the recovered set
            return this.seen.has(target);
      }

      /*
      * Recovers the tree using Breadth-First Search (BFS).
      * root: Root node of the contaminated tree.
      */
      bfs(root) {
            let q = [root]; // Queue for BFS
            root.val = 0; // Set root value to 0

            while (q.length > 0) {
                  let curNode = q.shift(); // Get front node
                  this.seen.add(curNode.val); // Store recovered value

                  // Process left child if it exists
                  if (curNode.left) {
                        curNode.left.val = curNode.val * 2 + 1;
                        q.push(curNode.left);
                  }

                  // Process right child if it exists
                  if (curNode.right) {
                        curNode.right.val = curNode.val * 2 + 2;
                        q.push(curNode.right);
                  }
            }
      }
}
