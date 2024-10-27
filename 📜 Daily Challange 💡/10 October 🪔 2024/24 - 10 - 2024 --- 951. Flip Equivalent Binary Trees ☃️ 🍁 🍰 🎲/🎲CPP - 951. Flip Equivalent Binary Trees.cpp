//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 951

//? ⌚ Time complexity ➺ O(h) 👉🏻  h = Height of tree

//? 🧺 Space complexity ➺ O(h)

#include <cstddef>

class Solution {
public:
      bool flipEquiv(TreeNode* root1, TreeNode* root2) {
            // Base case: If both roots are null, 
            if (root1 == nullptr && root2 == nullptr) {
                  // they are equivalent (both trees are empty)
                  return true;
            }

            // If only one of the roots is null or the values do not match, 
            if (root1 == nullptr || root2 == nullptr || root1->val != root2->val) {
                  // they are not equivalent
                  return false;
            }

            // Recursive check: Compare the children by flipping or not flipping.
            return 
                  // 1. Check if left child of root1 is equivalent to left child of root2 AND
                  // right child of root1 to right child of root2.
                  (flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right)) 

                        || 

                  // 2. Or check if left child of root1 is equivalent to right child of root2 AND
                  // right child of root1 to left child of root2.
                  (flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left));
      }
};

