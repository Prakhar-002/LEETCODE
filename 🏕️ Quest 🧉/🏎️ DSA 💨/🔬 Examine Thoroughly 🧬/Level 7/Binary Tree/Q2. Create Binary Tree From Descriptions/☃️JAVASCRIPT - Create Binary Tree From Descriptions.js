
//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2196

//? ⌚ Time complexity -> O(n) 👉 descriptions length 

//? 🧺 Space complexity -> O(n) 👉 using nodes hashMap and Children HashSet

var createBinaryTree = function (descriptions) {
      const treeNodes = new Map();
      const children = new Set();
      let root = null;

      for (const [parent, child, isLeft] of descriptions) {
            // add every child to our set
            children.add(child);

            // if parent is not yet in our Map create it
            if (!treeNodes.has(parent)) {
                  treeNodes.set(parent, new TreeNode(parent));
            }

            // if child is not yet in our Map create it
            if (!treeNodes.has(child)) {
                  treeNodes.set(child, new TreeNode(child));
            }

            if (isLeft) {
                  // link our left child
                  treeNodes.get(parent).left = treeNodes.get(child);
            } else {
                  // link our right child
                  treeNodes.get(parent).right = treeNodes.get(child);
            }
      }

      for (const [p, c, l] of descriptions) {
            // check our children set our root node would not be a child
            if (!children.has(p)) {
                  root = treeNodes.get(p);
                  break;
            }
      }

      return root;
};
