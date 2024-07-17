//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1110

//? ⌚ Time complexity -> O(n) 👉 Total Nodes 

//? 🧺 Space complexity -> O(n) 👉 Using Node's HashSet 

import java.util.*;

class Solution {
      private TreeNode dltNodes(TreeNode node, Set<Integer> toDeleteSet, Set<TreeNode> forest) {
            if (node == null) {
                  return null;
            }

            // variable for rather we dlt node or not
            TreeNode curNode = node;

            // if our curNode's value in to_delete then dlt it
            if (toDeleteSet.contains(curNode.val)) {
                  // dlt our curNode
                  curNode = null;
                  // remove it from our forest
                  forest.remove(node);
                  // add It's left child if exist
                  if (node.left != null) {
                        forest.add(node.left);
                  }
                  // add It's right child if exist
                  if (node.right != null) {
                        forest.add(node.right);
                  }
            }

            // call for the left tree weather we dlt curNode or not
            if (node.left != null) {
                  node.left = dltNodes(node.left, toDeleteSet, forest);
            }
            // call for the right tree
            if (node.right != null) {
                  node.right = dltNodes(node.right, toDeleteSet, forest);
            }
            // return curNode deleted or not deleted
            return curNode;
      }

      public List<TreeNode> delNodes(TreeNode root, int[] to_delete) {
            // Making HashSet of to_delete
            Set<Integer> toDeleteSet = new HashSet<>();
            for (int val : to_delete) {
                  toDeleteSet.add(val);
            }

            // making a set of all value of root
            Set<TreeNode> forest = new HashSet<>();
            forest.add(root);

            dltNodes(root, toDeleteSet, forest);

            return new ArrayList<>(forest);
      }
}
