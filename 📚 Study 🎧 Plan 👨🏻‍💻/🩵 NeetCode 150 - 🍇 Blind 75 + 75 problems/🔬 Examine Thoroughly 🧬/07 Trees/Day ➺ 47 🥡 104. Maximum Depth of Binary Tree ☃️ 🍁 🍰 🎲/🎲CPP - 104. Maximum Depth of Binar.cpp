//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Recursive DFS

class Solution {
public:
      // Function to compute the maximum depth of a binary tree
      int maxDepth(TreeNode* root) {
            // If the tree is empty, return 0 (no depth)
            if (root == nullptr) {
                  return 0;
            }

            // Recursively compute the depth of the left subtree
            int leftHeight = maxDepth(root->left);

            // Recursively compute the depth of the right subtree
            int rightHeight = maxDepth(root->right);

            // Find the maximum depth between the left and right subtrees
            int max = std::max(leftHeight, rightHeight);

            // Return the maximum depth plus 1 for the current node
            return max + 1;
      }
};

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* BFS 

class Solution {
      public:
            int maxDepth(TreeNode* root) {
                  // Initialize a stack to perform depth-first search (DFS)
                  // Each element in the stack is a pair containing a node and its depth
                  stack<pair<TreeNode*, int>> stk;
                  stk.push({root, 1});

                  // Variable to track the maximum depth of the tree
                  int level = 0;

                  // Process nodes until the stack is empty
                  while (!stk.empty()) {
                        // Pop the top element of the stack (current node and its depth)
                        auto nodeData = stk.top();
                        stk.pop();
                        TreeNode* node = nodeData.first;
                        int depth = nodeData.second;

                        // If the node is not null, process it
                        if (node) {
                              // Update the maximum depth encountered so far
                              level = max(level, depth);

                              // Add the left child to the stack with depth incremented by 1
                              stk.push({node->left, depth + 1});

                              // Add the right child to the stack with depth incremented by 1
                              stk.push({node->right, depth + 1});
                        }
                  }

                  // Return the maximum depth of the binary tree
                  return level;
            }
};

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Iterative DFS 

class Solution {
      public:
            int maxDepth(TreeNode* root) {
                  // Initialize a stack to perform depth-first search (DFS)
                  // Each element in the stack is a pair containing a node and its depth
                  stack<pair<TreeNode*, int>> stk;
                  if (root != nullptr) {
                        stk.push({root, 1});
                  }

                  // Variable to track the maximum depth of the tree
                  int level = 0;

                  // Process nodes until the stack is empty
                  while (!stk.empty()) {
                        // Pop the top element of the stack (current node and its depth)
                        auto nodeData = stk.top();
                        stk.pop();
                        TreeNode* node = nodeData.first;
                        int depth = nodeData.second;

                        // Update the maximum depth encountered so far
                        level = max(level, depth);

                        // If the node has a left child, add it to the stack with depth incremented by 1
                        if (node->left != nullptr) {
                              stk.push({node->left, depth + 1});
                        }

                        // If the node has a right child, add it to the stack with depth incremented by 1
                        if (node->right != nullptr) {
                              stk.push({node->right, depth + 1});
                        }
                  }

                  // Return the maximum depth of the binary tree
                  return level;
            }
};
