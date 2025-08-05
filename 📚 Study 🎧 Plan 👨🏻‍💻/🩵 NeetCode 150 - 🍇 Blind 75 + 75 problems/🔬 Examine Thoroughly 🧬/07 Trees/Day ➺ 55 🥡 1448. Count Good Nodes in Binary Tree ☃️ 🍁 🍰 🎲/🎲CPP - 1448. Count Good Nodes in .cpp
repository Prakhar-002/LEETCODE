//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1448

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Recursive Way

class Solution {
      public:
            int dfs(TreeNode* node, int maxVal) {
                  // Base case: if the node is null, return 0
                  if (node == nullptr) {
                        return 0;
                  }

                  // Count this node as "good" if its value is greater than or equal to maxVal
                  int goodNode = (node->val >= maxVal) ? 1 : 0;

                  // Update maxVal to the maximum value encountered so far
                  maxVal = max(maxVal, node->val);

                  // Recursively count the good nodes in the left and right subtrees
                  goodNode += dfs(node->left, maxVal);
                  goodNode += dfs(node->right, maxVal);

                  return goodNode;
            }

            int goodNodes(TreeNode* root) {
                  // Start the DFS with the root value as the initial maxVal
                  return dfs(root, root->val);
            }
};

//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Iterative Version

class Solution {
      public:
            int goodNodes(TreeNode* root) {
                  if (root == nullptr) {
                        return 0;
                  }

                  // Stack to store pairs of nodes and their maximum value encountered so far
                  stack<pair<TreeNode*, int>> stk;
                  stk.push({root, root->val});

                  int goodNodeCount = 0;

                  while (!stk.empty()) {
                        // Pop the top element of the stack (current node and its maxVal)
                        auto nodeData = stk.top();
                        stk.pop();
                        TreeNode* node = nodeData.first;
                        int maxVal = nodeData.second;

                        // Count this node as "good" if its value is greater than or equal to maxVal
                        if (node->val >= maxVal) {
                              goodNodeCount++;
                        }

                        // Update maxVal to the maximum value encountered so far
                        maxVal = max(maxVal, node->val);

                        // Push the left and right children to the stack
                        if (node->right != nullptr) {
                              stk.push({node->right, maxVal});
                        }
                        if (node->left != nullptr) {
                              stk.push({node->left, maxVal});
                        }
                  }

                  return goodNodeCount;
            }
};
