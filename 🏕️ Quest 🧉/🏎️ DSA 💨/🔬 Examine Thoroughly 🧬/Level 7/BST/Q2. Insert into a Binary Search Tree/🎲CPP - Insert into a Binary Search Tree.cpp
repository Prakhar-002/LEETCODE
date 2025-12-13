
//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)

class Solution {
public:
      TreeNode* insertIntoBST(TreeNode* root, int val) {
            /**
             * Insert into BST: recursive traversal → leaf insertion.
             * Maintains BST property: left < root < right.
             */
            
            // Base case: empty tree
            if (!root) {
                  return new TreeNode(val);
            }

            // Traverse based on BST property
            if (root->val > val) {
                  // Insert in left subtree (smaller values)
                  root->left = insertIntoBST(root->left, val);
            } else {
                  // Insert in right subtree (larger values)
                  root->right = insertIntoBST(root->right, val);
            }

            return root;  // Return updated node
      }
};
