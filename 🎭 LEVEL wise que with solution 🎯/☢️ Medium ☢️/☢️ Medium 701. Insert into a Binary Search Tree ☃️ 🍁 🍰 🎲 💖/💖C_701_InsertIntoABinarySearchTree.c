//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)

#include<stdlib.h> 
#include<stdio.h>

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
      if (!root) {
            struct TreeNode * root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            root->val = val;
            root->left = NULL;
            root->right = NULL;
            return root;
      }

      if (root->val > val) {
            // insert in left sub tree...
            root->left = insertIntoBST(root->left, val);
      } else {
            // insert in right sub tree...
            root->right = insertIntoBST(root->right, val);
      }

      return root;
}