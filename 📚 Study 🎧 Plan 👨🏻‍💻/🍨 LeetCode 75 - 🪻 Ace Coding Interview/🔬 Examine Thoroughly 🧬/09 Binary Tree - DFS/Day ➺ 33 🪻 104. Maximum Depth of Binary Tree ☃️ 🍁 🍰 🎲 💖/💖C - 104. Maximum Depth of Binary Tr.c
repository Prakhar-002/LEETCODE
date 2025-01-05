//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

// Function to compute the maximum depth of a binary tree
int maxDepth(struct TreeNode* root) {
      // If the tree is empty, return 0 (no depth)
      if (root == NULL) {
            return 0;
      }

      // Recursively compute the depth of the left subtree
      int leftHeight = maxDepth(root->left);

      // Recursively compute the depth of the right subtree
      int rightHeight = maxDepth(root->right);

      // Find the maximum depth between the left and right subtrees
      int max = (leftHeight > rightHeight) ? leftHeight : rightHeight;

      // Return the maximum depth plus 1 for the current node
      return max + 1;
}
