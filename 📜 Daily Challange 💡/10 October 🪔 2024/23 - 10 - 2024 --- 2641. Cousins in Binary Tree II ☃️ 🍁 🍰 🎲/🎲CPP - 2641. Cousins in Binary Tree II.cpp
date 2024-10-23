//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2641

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Number of Nodes

//? 🧺 Space complexity ➺ O(h) -> h = Height of Tree

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      TreeNode* replaceValueInTree(TreeNode* root) {
            // Vector to store the sum of values at each level of the tree
            vector<int> levelSum;

            // Queue for level-order traversal
            queue<TreeNode*> q;

            // Add root to the queue
            q.push(root);

            // First traversal: Calculate the sum of nodes at each level
            while (!q.empty()) {
                  int curSum = 0; // Sum of values at current level
                  int size = q.size(); // Number of nodes at current level

                  for (int i = 0; i < size; i++) {
                        TreeNode* node = q.front(); // Get the first node in the queue
                        q.pop(); // Remove the first node from the queue
                        curSum += node->val; // Add node's value to current sum

                        // Add children to queue if they exist
                        if (node->left != nullptr)
                              q.push(node->left);

                        if (node->right != nullptr)
                              q.push(node->right);
                  }

                  levelSum.push_back(curSum); // Add sum of current level to vector
            }

            // Second traversal: Replace node values
            q.push(root); // Add root back to queue for second traversal
            int level = 0; // Track current level

            while (!q.empty()) {
                  // Number of nodes at current level
                  int size = q.size(); 

                  for (int i = 0; i < size; i++) {
                        // Get the first node in the queue
                        TreeNode* node = q.front(); 
                        q.pop(); // Remove the first node from the queue

                        // Calculate the sum of values of its child nodes
                        int siblingSum = (node->left != nullptr ? node->left->val : 0) +
                                    (node->right != nullptr ? node->right->val : 0);

                        // Replace left child's value and add to queue
                        if (node->left != nullptr) {
                              node->left->val = levelSum[level + 1] - siblingSum;
                              q.push(node->left);
                        }

                        // Replace right child's value and add to queue
                        if (node->right != nullptr) {
                              node->right->val = levelSum[level + 1] - siblingSum;
                              q.push(node->right);
                        }
                  }

                  level++; // Move to next level
            }

            root->val = 0; // Set root's value to 0
            return root; // Return the modified tree
      }
};

