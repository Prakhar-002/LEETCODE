bool isSameTree(struct TreeNode *p, struct TreeNode *q){
      if ((p == NULL) && (q == NULL)){ // IF leaf Node
            return 1;
      }

      if ((p == NULL) || (q == NULL)){ // If one child is Null
            return 0;
      }

      if (p->val == q->val){

            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
      }
      else{

            return 0;
      }
}