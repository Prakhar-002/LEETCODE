//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1367

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Tree Node  

//? 🧺 Space complexity ➺ O(h) 👉🏻 h = Height of Tree 👉🏻  m = No. of LinkedList Node

var isSubPath = function (head, root) {
      // Helper function to check if starting from a given tree node, 
      // the remaining list forms a subpath in the tree.
      const helper = (listNode, treeNode) => {
            // If we've reached the end of the list successfully
            if (!listNode) {
                  // The subList is contained in the tree path. Thus, it returns true
                  return true;
            }

            // If treeNode is null or the values of the listNode and treeNode don't match
            if (!treeNode || listNode.val !== treeNode.val) {
                  // Means the current path does not match the list. It returns false
                  return false;
            }

            // It tries to continue the match in two directions. If any path matches, it returns true
            return (
                  // Left child of the current treeNode
                  helper(listNode.next, treeNode.left) ||
                  // Right child of the current treeNode
                  helper(listNode.next, treeNode.right)
            );
      };

      // Check if the tree starting at root contains a path that is the list starting at head
      if (helper(head, root)) {
            // If helper returns true, then it returns true
            return true;
      }

      // If the root is null indicating we have traversed the tree without finding the subpath
      if (!root) {
            // It returns false
            return false;
      }

      // Check if any contain the list as a subpath
      return (
            // Recursively checks left sub-trees
            isSubPath(head, root.left) ||
            // Recursively checks right sub-trees
            isSubPath(head, root.right)
      );
};

