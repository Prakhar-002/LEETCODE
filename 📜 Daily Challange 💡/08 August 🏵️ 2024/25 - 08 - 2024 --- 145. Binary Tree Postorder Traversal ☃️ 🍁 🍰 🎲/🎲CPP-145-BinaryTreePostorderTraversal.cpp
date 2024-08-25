//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      void postOrderTraversal(TreeNode* root, vector<int>& postArr) {
            // If (`root`) is `nullptr`. If it is, the function returns immediately
            if (root == nullptr) {
                  return;
            }

            // `postOrderTraversal` on the left children of the current node.
            postOrderTraversal(root->left, postArr);
            // `postOrderTraversal` on the right children of the current node.
            postOrderTraversal(root->right, postArr);
            // current node's value is appended to the `postArr`
            postArr.push_back(root->val);
      }

public:
      vector<int> postorderTraversal(TreeNode* root) {
            // An empty vector `postOrderArr` is created to store the result of the traversal
            vector<int> postOrderArr;

            // calls the helper method `postOrderTraversal`
            postOrderTraversal(root, postOrderArr);

            // returns the `postOrderArr` which contains the values of the nodes in post-order
            return postOrderArr;
      }
};