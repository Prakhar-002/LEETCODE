// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q1

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean checkTree(TreeNode root) {
            // Problem guarantees the tree has exactly 3 nodes:
            // root, root.left, and root.right.
            // Return true if root.val equals the sum of its children.
            return root.val == (root.left.val + root.right.val);
      }
}