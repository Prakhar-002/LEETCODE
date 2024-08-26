//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 589

//? ⌚ Time complexity ➺ O(n)  👉🏻 n = number of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻 H = height of tree

/**
** Definition for a _Node.

function _Node(val,children) {
      this.val = val;
      this.children = children;
};

*/

const preorder = function (root) {
      // to store the values of the nodes as they are visited in preOrder sequence
      const preOrderList = [];

      const preOrderTraversal = (node) => {
            // if the `node` is `null`
            if (node === null) {
                  // returns immediately
                  return;
            }

            // value of the node (`node.val`) is added to `preOrderList`
            preOrderList.push(node.val);

            // iterates over each child of the current node
            for (let child of node.children) {
                  // calling `preOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // after the current node itself
                  preOrderTraversal(child);
            }
      };

      preOrderTraversal(root);

      // return preOrderList: After the traversal is complete
      return preOrderList;
};