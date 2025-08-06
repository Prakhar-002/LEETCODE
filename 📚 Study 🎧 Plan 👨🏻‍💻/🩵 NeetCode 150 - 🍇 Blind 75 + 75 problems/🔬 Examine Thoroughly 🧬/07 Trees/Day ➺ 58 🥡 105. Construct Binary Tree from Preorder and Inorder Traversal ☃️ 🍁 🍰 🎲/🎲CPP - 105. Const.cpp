
class Solution {
      int preIdx = 0;
      int inIdx = 0;

      TreeNode *dfs(vector<int> &preorder, vector<int> &inorder, int limit) {
            if (preIdx >= preorder.size())
                  return nullptr;
            if (inorder[inIdx] == limit) {
                  inIdx++;
                  return nullptr;
            }

            TreeNode *root = new TreeNode(preorder[preIdx++]);
            root->left = dfs(preorder, inorder, root->val);
            root->right = dfs(preorder, inorder, limit);
            return root;
      }

public:
      TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
            return dfs(preorder, inorder, INT_MAX);
      }
};