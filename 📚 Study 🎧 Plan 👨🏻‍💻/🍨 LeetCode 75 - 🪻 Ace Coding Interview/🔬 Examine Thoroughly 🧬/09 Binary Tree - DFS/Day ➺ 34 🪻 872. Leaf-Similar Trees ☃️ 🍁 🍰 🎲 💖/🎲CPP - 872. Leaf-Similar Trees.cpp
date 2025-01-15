//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 872

//? ⌚ Time complexity ➺ O(n1 + n2) 👉🏻  n1, n2 = No. of nodes in roo1 and root2

//? 🧺 Space complexity ➺ O(h + l)  👉🏻  h = height of tree , l = No. of leaf nodes

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
      // Helper function to extract leaf values from a binary tree
      vector<int> getLeafValues(TreeNode* root) {
            vector<int> leafs;
            stack<TreeNode*> stack;
            stack.push(root);

            while (!stack.empty()) {
                  TreeNode* node = stack.top();
                  stack.pop();

                  if (node) {
                        if (!node->left && !node->right) {
                              leafs.push_back(node->val);
                        }
                        stack.push(node->right);
                        stack.push(node->left);
                  }
            }
            return leafs;
      }

      bool leafSimilar(TreeNode* root1, TreeNode* root2) {
            // Extract leaf values from both trees
            vector<int> leafs1 = getLeafValues(root1);
            vector<int> leafs2 = getLeafValues(root2);

            // Compare the leaf values of both trees
            return leafs1 == leafs2;
      }
};
