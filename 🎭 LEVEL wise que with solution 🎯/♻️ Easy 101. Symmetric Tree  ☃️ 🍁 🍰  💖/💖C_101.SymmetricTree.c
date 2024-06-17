bool isEqual(struct TreeNode* l, struct TreeNode* r){
            if ((l == NULL) && (r == NULL)) { // IF leaf Node 
                  return 1;
            }

            if ((l == NULL) || (r == NULL)) { // If one child is Null
                  return 0;
            }

            return ((l->val == r->val) && isEqual(l->left, r->right) && isEqual(l->right, r->left));
}

bool isSymmetric(struct TreeNode* root) {
      return isEqual(root->left, root->right); 
}