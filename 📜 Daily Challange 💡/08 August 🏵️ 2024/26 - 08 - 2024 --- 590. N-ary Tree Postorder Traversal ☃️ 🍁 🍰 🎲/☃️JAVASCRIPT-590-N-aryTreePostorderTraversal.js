//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 590

//? ⌚ Time complexity ➺ O(n)  👉🏻 n = number of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻 H = height of tree

/**
** Definition for a _Node.

function _Node(val,children) {
      this.val = val;
      this.children = children;
};

*/

const postorder = function (root) {
      // to store the values of the nodes as they are visited in postorder sequence
      const postOrderList = [];

      const postOrderTraversal = (node) => {
            // if the `node` is `null`
            if (node === null) {
                  // returns immediately
                  return;
            }

            // iterates over each child of the current node
            for (let child of node.children) {
                  // calling `postOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // before the current node itself
                  postOrderTraversal(child);
            }

            // value of the node (`node.val`) is added to `postOrderList`
            postOrderList.push(node.val);
      };

      postOrderTraversal(root);

      // return postOrderList: After the traversal is complete
      return postOrderList;
};