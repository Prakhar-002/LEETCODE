//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 889

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public TreeNode constructFromPrePost(int[] preorder, int[] postorder) {
            int N = preorder.length; // Number of nodes
            Map<Integer, Integer> postMap = new HashMap<>();

            // Populate postorder index map for quick lookup
            for (int i = 0; i < N; i++) {
                  postMap.put(postorder[i], i);
            }

            // Recursive function to construct the tree
            return build(preorder, postorder, postMap, 0, N - 1, 0, N - 1);
      }

      private TreeNode build(int[] preorder, int[] postorder, Map<Integer, Integer> postMap,
                  int preStart, int preEnd, int postStart, int postEnd) {
            if (preStart > preEnd || postStart > postEnd) {
                  return null; // Base case: invalid range
            }

            // Create the root node from preorder first element
            TreeNode root = new TreeNode(preorder[preStart]);

            // If there's only one node, return it
            if (preStart != preEnd) {
                  int leftVal = preorder[preStart + 1]; // Get left child value

                  int mid = postMap.get(leftVal); // Find index in postorder

                  int leftSize = mid - postStart + 1; // Calculate left subtree size

                  // Recursively build left and right subtrees
                  root.left = build(preorder, postorder, postMap, preStart + 1, preStart + leftSize, postStart, mid);
                  root.right = build(preorder, postorder, postMap, preStart + leftSize + 1, preEnd, mid + 1, postEnd - 1);
            }

            return root; // Return constructed root node
      }
}
