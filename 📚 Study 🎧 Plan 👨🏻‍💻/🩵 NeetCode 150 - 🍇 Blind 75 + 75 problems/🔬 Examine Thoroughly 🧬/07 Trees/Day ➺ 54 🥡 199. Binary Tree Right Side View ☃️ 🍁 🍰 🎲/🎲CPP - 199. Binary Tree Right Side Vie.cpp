//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 199

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)   ->  m = max width 

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      vector<int> rightSideView(TreeNode* root) {
            // Vector to store the right-side view
            vector<int> rightSideArr;

            // Queue for level-order traversal (BFS)
            queue<TreeNode*> q;
            if (root != nullptr) {
                  q.push(root);
            }

            // Perform BFS
            while (!q.empty()) {
                  TreeNode* rightSide = nullptr;

                  // Iterate over all nodes at the current level
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; i++) {
                        TreeNode* node = q.front();
                        q.pop();
                        if (node != nullptr) {
                              // Update the rightmost node
                              rightSide = node;
                              // Add left and right children to the queue
                              if (node->left != nullptr) {
                                    q.push(node->left);
                              }
                              if (node->right != nullptr) {
                                    q.push(node->right);
                              }
                        }
                  }

                  // Append the rightmost node's value if it exists
                  if (rightSide != nullptr) {
                        rightSideArr.push_back(rightSide->val);
                  }
            }

            // Return the right-side view
            return rightSideArr;
      }
};
