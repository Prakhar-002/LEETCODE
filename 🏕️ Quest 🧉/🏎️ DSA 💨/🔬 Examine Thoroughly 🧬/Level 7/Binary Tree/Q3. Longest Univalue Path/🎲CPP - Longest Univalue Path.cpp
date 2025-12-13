//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int ans = 0;  // Global maximum univalue path length

      int longestUnivaluePath(TreeNode* root) {
            /**
             * Find longest univalue path in binary tree.
             * Path can go through root: left→root→right.
             */
            dfs(root, -1);  // Start with dummy parent value
            return ans;
      }

private:
      int dfs(TreeNode* node, int parentVal) {
            /**
             * Post-order DFS: returns longest univalue path DOWNWARD from node.
             * Updates global 'ans' with max path through current node.
             */
            if (!node) {
                  return 0;  // Base case: null node
            }

            // Recurse on children (pass current node->val)
            int left = dfs(node->left, node->val);
            int right = dfs(node->right, node->val);

            // Update global maximum path through current node
            ans = max(ans, left + right);

            // Return longest path starting from THIS node downward
            if (node->val == parentVal) {
                  return max(left, right) + 1;  // Extend longer child + current
            }

            return 0;  // Break chain: value doesn't match parent
      }
};
