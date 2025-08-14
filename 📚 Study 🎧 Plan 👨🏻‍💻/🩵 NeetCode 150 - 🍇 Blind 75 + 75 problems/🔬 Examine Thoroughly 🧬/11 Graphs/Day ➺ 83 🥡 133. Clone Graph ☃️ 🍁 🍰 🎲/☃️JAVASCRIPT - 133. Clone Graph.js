//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 133

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Edge + Vertex

//? 🧺 Space complexity ➺ O(n)

/**
 * // Definition for a Node.
 * function Node(val, neighbors) {
 *    this.val = val === undefined ? 0 : val;
 *    this.neighbors = neighbors === undefined ? [] : neighbors;
 * };
 */

var cloneGraph = function (node) {
      // Map to store mapping: original node → cloned node
      const oldToNew = new Map();

      // ----------------------------------------------------------
      // DFS helper to clone nodes and their neighbors recursively
      // ----------------------------------------------------------
      function clone(node) {
            // If already cloned → return it
            if (oldToNew.has(node)) {
                  return oldToNew.get(node);
            }

            // Create a copy of the current node
            const copy = new Node(node.val);
            oldToNew.set(node, copy);

            // Recursively clone all neighbors
            for (let nei of node.neighbors) {
                  copy.neighbors.push(clone(nei));
            }

            return copy;
      }

      // Start cloning from given node if it's not null
      return node ? clone(node) : null;
};
