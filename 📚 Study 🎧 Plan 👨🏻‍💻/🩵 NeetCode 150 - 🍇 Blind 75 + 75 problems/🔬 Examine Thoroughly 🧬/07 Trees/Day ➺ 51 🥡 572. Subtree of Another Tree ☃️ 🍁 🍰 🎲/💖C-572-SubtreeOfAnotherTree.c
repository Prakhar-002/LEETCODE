//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 572

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Nodes in subRoot  👉🏻 m => No. of Nodes in Root

//? 🧺 Space complexity ➺ O(h)    👉🏻   H => height of  recursion stack

#include <stdbool.h>
#include <stdlib.h>

bool isSameTree(struct TreeNode* root, struct TreeNode* subRoot) {
      // If both `root` and `subRoot` are `None`
      if (!root && !subRoot) {
            // returns `True`
            return true;
      }

      // If both `root` and `subRoot` are not `None` and their values (`val`) are the same
      if (root && subRoot && root->val == subRoot->val) {
            return (
                  // checks if the left subtree of `root` is the same as the left subtree of `subRoot`
                  isSameTree(root->left, subRoot->left) &&
                  // checks if the right subtree of `root` is the same as the right subtree of `subRoot`.
                  isSameTree(root->right, subRoot->right)
            );
      }

      // If none of the above conditions are met, it returns `False`
      return false;
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
      // an empty tree is a subtree of any tree
      if (!subRoot) {
            // If `subRoot` is `None`, returns `True`
            return true;
      }

      // An empty tree cannot contain a non-empty subtree
      if (!root) {
            // If `root` is `None` but `subRoot` is not, returns `False`
            return false;
      }

      // It checks if the tree rooted at `root` is the same as the tree rooted at `subRoot` 
      // by calling the method `isSameTree
      if (isSameTree(root, subRoot)) {
            // If they are the same, it returns `True`
            return true;
      }

      // recursively checks whether `subRoot` is a subtree 
      return (
            // of either the left child of `root`
            isSubtree(root->left, subRoot) ||
            // of either the right child of `root`
            isSubtree(root->right, subRoot)
      );
}

