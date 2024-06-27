//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 979 

int moves;

int countMoves(struct TreeNode *root)
{
      if (root == NULL)
      {
            return 0;
      }

      int leftCoins = countMoves(root->left);
      int rightCoins = countMoves(root->right);

      moves += abs(leftCoins) + abs(rightCoins);

      return root->val - 1 + leftCoins + rightCoins;
}

int distributeCoins(struct TreeNode *root)
{
      moves = 0;
      countMoves(root);
      return moves;
}