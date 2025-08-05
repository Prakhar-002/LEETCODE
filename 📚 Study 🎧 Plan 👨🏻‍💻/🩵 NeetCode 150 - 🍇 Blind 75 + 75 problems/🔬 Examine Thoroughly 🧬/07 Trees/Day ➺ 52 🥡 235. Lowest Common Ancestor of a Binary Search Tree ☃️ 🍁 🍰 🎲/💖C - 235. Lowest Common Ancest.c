//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 235

//? ⌚ Time complexity ➺ O(h) 👉🏻  h = Height Of Tree

//? 🧺 Space complexity ➺ O(1)

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
      // Start with the root node
      struct TreeNode* cur = root;

      // Traverse the tree to find the lowest common ancestor
      while (cur != NULL) {
            // If both p and q are greater than the current node's value,
            // move to the right subtree
            if (p->val > cur->val && q->val > cur->val) {
                  cur = cur->right;
            }

            // If both p and q are less than the current node's value,
            // move to the left subtree
            else if (p->val < cur->val && q->val < cur->val) {
                  cur = cur->left;
            }

            // If p and q are on opposite sides (or one matches the current node),
            // the current node is the lowest common ancestor
            else {
                  return cur;
            }
      }

      return NULL; // Shouldn't reach here for valid inputs
}