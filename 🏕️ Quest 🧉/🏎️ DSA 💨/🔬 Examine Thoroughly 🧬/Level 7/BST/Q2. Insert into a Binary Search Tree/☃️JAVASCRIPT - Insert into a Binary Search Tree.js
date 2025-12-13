//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)  

var insertIntoBST = function (root, val) {
      /**
       * Insert value into BST recursively.
       * BST property: all left < root < all right.
       */

      // Base case: empty tree → create node
      if (!root) {
            return new TreeNode(val);
      }

      // Recursive traversal based on BST property
      if (root.val > val) {
            // Left subtree: smaller values
            root.left = insertIntoBST(root.left, val);
      } else {
            // Right subtree: larger values
            root.right = insertIntoBST(root.right, val);
      }

      return root;
};
