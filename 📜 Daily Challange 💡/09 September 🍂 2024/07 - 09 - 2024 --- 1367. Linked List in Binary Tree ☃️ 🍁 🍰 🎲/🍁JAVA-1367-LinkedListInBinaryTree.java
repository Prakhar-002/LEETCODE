//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1367

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Tree Node  

//? 🧺 Space complexity ➺ O(h) 👉🏻 h = Height of Tree 👉🏻  m = No. of LinkedList Node

class Solution {
      // method designed to check if starting from a given tree node,
      // the remaining list forms a subpath in the tree.
      private boolean helper(ListNode listNode, TreeNode treeNode) {
            // it means we've reached the end of the list successfully
            if (listNode == null) {
                  // the subList is contained in the tree path. Thus, it returns true
                  return true;
            }

            // If treeNode is null or the values of the listNode and treeNode don't match
            if (treeNode == null || listNode.val != treeNode.val) {
                  // means the current path does not match the list. it returns false
                  return false;
            }

            // It tries to continue the match in two directions If any path matches, it returns true
            return (
                  // left child of the current treeNode.
                  helper(listNode.next, treeNode.left) ||
                  // right child of the current treeNode.
                  helper(listNode.next, treeNode.right)
            );
      }

      public boolean isSubPath(ListNode head, TreeNode root) {
            // check if the tree starting at root contains a path that is the list starting at head
            if (helper(head, root)) {
                  // If helper returns true, then it returns true
                  return true;
            }

            // If the root is null indicating we have traversed the tree without finding the subpath
            if (root == null) {
                  // it returns false
                  return false;
            }

            // check if any contain the list as a subpath
            return (
                  // recursively checks left sub-trees
                  isSubPath(head, root.left) ||
                  // recursively checks right sub-trees
                  isSubPath(head, root.right)
            );
      }
}
