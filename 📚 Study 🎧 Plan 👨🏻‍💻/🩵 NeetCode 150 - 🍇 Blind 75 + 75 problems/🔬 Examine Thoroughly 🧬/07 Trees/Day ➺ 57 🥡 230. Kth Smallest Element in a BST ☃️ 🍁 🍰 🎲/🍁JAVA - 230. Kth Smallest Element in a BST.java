//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 230

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n) 

class Solution {
      private int count;                         // To track how many nodes we've visited
      private int result;                        // To store the kth smallest value

      public int kthSmallest(TreeNode root, int k) {
            count = k;                           // Initialize counter
            result = root.val;                   // Default result

            dfs(root);                           // Start inorder DFS
            return result;                       // Return the result
      }

      private void dfs(TreeNode node) {
            if (node == null) return;            // Base case: null node

            dfs(node.left);                      // Inorder: visit left subtree

            count--;                             // Visit current node
            if (count == 0) {                    // If it's the kth visited node
                  result = node.val;             // Store result
                  return;
            }

            dfs(node.right);                     // Inorder: visit right subtree
      }
}
