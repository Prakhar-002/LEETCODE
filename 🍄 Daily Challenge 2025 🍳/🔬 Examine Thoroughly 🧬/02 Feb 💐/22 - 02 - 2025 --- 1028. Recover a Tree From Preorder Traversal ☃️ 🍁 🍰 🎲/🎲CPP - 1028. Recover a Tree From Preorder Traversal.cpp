//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1028

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
      TreeNode* recoverFromPreorder(string traversal) {
            stack<TreeNode*> nodeStack;  // Stack to manage tree nodes
            int i = 0;  // Pointer for traversal

            while (i < traversal.length()) {
                  int depth = 0;  // Depth level of the current node

                  // Count dashes to determine depth
                  while (i < traversal.length() && traversal[i] == '-') {
                        depth++;
                        i++;
                  }

                  // Extract the numeric value of the node
                  int j = i;
                  while (j < traversal.length() && isdigit(traversal[j])) {
                        j++;
                  }
                  int val = stoi(traversal.substr(i, j - i));  // Convert substring to integer
                  TreeNode* node = new TreeNode(val);  // Create a new TreeNode
                  i = j;  // Move pointer forward

                  // Pop stack until reaching the correct depth
                  while (nodeStack.size() > depth) {
                        nodeStack.pop();
                  }

                  // Attach node to its parent based on availability
                  if (!nodeStack.empty()) {
                        if (!nodeStack.top()->left) {
                              nodeStack.top()->left = node;
                        } else {
                              nodeStack.top()->right = node;
                        }
                  }

                  // Push the current node to the stack
                  nodeStack.push(node);
            }

            // The root node is at the bottom of the stack
            while (nodeStack.size() > 1) {
                  nodeStack.pop();
            }

            return nodeStack.top();  // Return the root node
      }
};
