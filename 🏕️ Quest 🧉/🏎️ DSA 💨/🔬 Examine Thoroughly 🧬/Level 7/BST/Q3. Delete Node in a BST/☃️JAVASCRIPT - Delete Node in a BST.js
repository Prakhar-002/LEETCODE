
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 450

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)    👉🏻  log n = (h) = Height of tree

var deleteNode = function (root, key) {
      // Base case: If the tree is empty
      if (!root) {
            return root;
      }

      // Traverse to the right subtree if the key is greater than the root's value
      if (key > root.val) {
            root.right = deleteNode(root.right, key);

            // Traverse to the left subtree if the key is smaller than the root's value
      } else if (key < root.val) {
            root.left = deleteNode(root.left, key);

            // Node to be deleted is found
      } else {
            // Case 1: Node has no left child
            if (!root.left) {
                  return root.right;

                  // Case 2: Node has no right child
            } else if (!root.right) {
                  return root.left;
            }

            // Case 3: Node has two children
            // Find the minimum value in the right subtree (inorder successor)
            let cur = root.right;
            while (cur.left) {
                  cur = cur.left;
            }

            // Replace the root's value with the inorder successor's value
            root.val = cur.val;

            // Delete the inorder successor in the right subtree
            root.right = deleteNode(root.right, cur.val);
      }

      return root;
}
