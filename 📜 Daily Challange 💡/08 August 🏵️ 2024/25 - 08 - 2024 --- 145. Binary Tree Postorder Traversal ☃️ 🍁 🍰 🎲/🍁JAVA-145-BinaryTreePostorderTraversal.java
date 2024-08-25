//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class Solution {
      private void postOrderTraversal(TreeNode root, List<Integer> postArr) {
            // If (`root`) is null, the function returns immediately
            if (root == null) {
                  return;
            }

            // Recursive call on the left children of the current node
            postOrderTraversal(root.left, postArr);
            // Recursive call on the right children of the current node
            postOrderTraversal(root.right, postArr);
            // Current node's value is added to the `postArr`
            postArr.add(root.val);
      }

      public List<Integer> postorderTraversal(TreeNode root) {
            // An empty ArrayList `postOrderArr` is created to store the result of the
            // traversal
            List<Integer> postOrderArr = new ArrayList<>();

            // Calls the helper method `postOrderTraversal`
            postOrderTraversal(root, postOrderArr);

            // Returns the `postOrderArr` which contains the values of the nodes in
            // post-order
            return postOrderArr;
      }
}