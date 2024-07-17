//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1110

//? ⌚ Time complexity -> O(n) 👉 Total Nodes 

//? 🧺 Space complexity -> O(n) 👉 Using Node's HashSet 

var delNodes = function (root, to_delete) {
      // Making Set of to_delete 
      const toDeleteSet = new Set(to_delete);
      // making a set of all value of root
      const forest = new Set([root]);

      const dltNodes = function (node) {
            if (!node) {
                  return null;
            }

            // variable for rather we dlt node or not
            let curNode = node;

            // if our curNode's value in to_delete then dlt it
            if (toDeleteSet.has(curNode.val)) {
                  // dlt our curNode 
                  curNode = null;
                  // remove it from our forest 
                  forest.delete(node);
                  // add It's left child if exist
                  if (node.left) {
                        forest.add(node.left);
                  }
                  // add It's right child if exist
                  if (node.right) {
                        forest.add(node.right);
                  }
            }

            // call for the left tree weather we dlt curNode or not
            if (node.left) {
                  node.left = dltNodes(node.left);
            }
            // call for the right tree
            if (node.right) {
                  node.right = dltNodes(node.right);
            }
            // return curNode deleted or not deleted
            return curNode;
      };

      // calling our function
      dltNodes(root);

      return Array.from(forest);
};