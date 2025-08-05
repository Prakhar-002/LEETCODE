//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 572

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Nodes in subRoot  👉🏻 m => No. of Nodes in Root

//? 🧺 Space complexity ➺ O(h)    👉🏻   H => height of  recursion stack

var isSubtree = function (root, subRoot) {
      // an empty tree is a subtree of any tree
      if (!subRoot) {
            // If `subRoot` is `null`, returns `true`
            return true;
      }

      // An empty tree cannot contain a non-empty subtree
      if (!root) {
            // If `root` is `null` but `subRoot` is not, returns `false`
            return false;
      }

      // It checks if the tree rooted at `root` is the same as the tree rooted at `subRoot` 
      // by calling the function `isSameTree`
      if (isSameTree(root, subRoot)) {
            // If they are the same, it returns `true`
            return true;
      }

      // recursively checks whether `subRoot` is a subtree 
      return (
            // of either the left child of `root`
            isSubtree(root.left, subRoot) ||
            // of either the right child of `root`
            isSubtree(root.right, subRoot)
      );
};

var isSameTree = function (root, subRoot) {
      // If both `root` and `subRoot` are `null`
      if (!root && !subRoot) {
            // returns `true`
            return true;
      }

      // If both `root` and `subRoot` are not `null` and their values (`val`) are the same
      if (root && subRoot && root.val === subRoot.val) {
            return (
                  // checks if the left subtree of `root` is the same as the left subtree of `subRoot`
                  isSameTree(root.left, subRoot.left) &&
                  // checks if the right subtree of `root` is the same as the right subtree of `subRoot`.
                  isSameTree(root.right, subRoot.right)
            );
      }

      // If none of the above conditions are met, it returns `false`
      return false;
};

