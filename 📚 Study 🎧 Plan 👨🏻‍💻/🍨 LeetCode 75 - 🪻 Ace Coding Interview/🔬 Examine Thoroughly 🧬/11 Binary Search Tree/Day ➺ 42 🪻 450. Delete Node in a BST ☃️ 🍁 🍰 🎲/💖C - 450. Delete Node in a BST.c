//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 450

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)    👉🏻  log n = (h) = Height of tree

#include <stdlib.h>

// Function to find the minimum value in a subtree
struct TreeNode* findMin(struct TreeNode* node) {
      while (node->left != NULL) {
            node = node->left;
      }
      return node;
}

// Function to delete a node in a BST
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
      // Base case: If the tree is empty
      if (!root) {
            return root;
      }

      // Traverse to the right subtree if the key is greater than the root's value
      if (key > root->val) {
            root->right = deleteNode(root->right, key);

      // Traverse to the left subtree if the key is smaller than the root's value
      } else if (key < root->val) {
            root->left = deleteNode(root->left, key);

      // Node to be deleted is found
      } else {
            // Case 1: Node has no left child
            if (!root->left) {
                  struct TreeNode* temp = root->right;
                  free(root); // Free memory of the current node
                  return temp;

            // Case 2: Node has no right child
            } else if (!root->right) {
                  struct TreeNode* temp = root->left;
                  free(root); // Free memory of the current node
                  return temp;
            }

            // Case 3: Node has two children
            // Find the minimum value in the right subtree (inorder successor)
            struct TreeNode* temp = findMin(root->right);

            // Replace the root's value with the inorder successor's value
            root->val = temp->val;

            // Delete the inorder successor in the right subtree
            root->right = deleteNode(root->right, temp->val);
      }

      return root;
}
