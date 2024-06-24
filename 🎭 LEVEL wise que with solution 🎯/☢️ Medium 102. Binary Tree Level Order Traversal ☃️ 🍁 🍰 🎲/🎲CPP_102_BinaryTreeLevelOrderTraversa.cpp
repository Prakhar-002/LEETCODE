//! https://github.com/Prakhar-002/LEETCODE

class Solution {
public:
      vector<vector<int>> levelOrder(TreeNode* root) {
            // making a 2d vector
            vector<vector<int>> wrapList;
            // queue for level order
            queue<TreeNode*> q;

            // if we got null we'll return our wrapList
            if (root == NULL){
                  return wrapList;
            }

            // adding root to our queue first
            q.push(root);

            // apply loop until it gets empty
            while (!q.empty()){
                  int levelNo = q.size();
                  vector<int> subList;

                  while (levelNo-- > 0){
                        // Extracting peek node
                        TreeNode* curNode = q.front();
                        q.pop();

                        // insert left node if exist
                        if (curNode->left != NULL){
                              q.push(curNode->left);
                        }

                        // insert right node if exist
                        if (curNode->right != NULL){
                              q.push(curNode->right);
                        }

                        // adding val in our subList
                        subList.push_back(curNode->val);
                  }

                  // adding subList to our wrapList
                  wrapList.push_back(subList);
            }
            
            return wrapList;
      }
};