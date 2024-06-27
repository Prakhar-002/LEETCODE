//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1325 

struct TreeNode *removeLeafNodes(struct TreeNode *root, int target){
      if (root == NULL){
            return NULL;
      }

      root->left = removeLeafNodes(root->left, target);
      root->right = removeLeafNodes(root->right, target);

      if (root->val == target && root->left == NULL && root->right == NULL){
            return NULL;
      }

      return root;
}