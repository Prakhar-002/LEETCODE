//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 700

//? ⌚ Time complexity ➺ O(h) 👉🏻  h = Height Of Tree

//? 🧺 Space complexity ➺ O(1)

var searchBST = function (root, val) {
      let cur = root;

      while (cur !== null) {
            if (cur.val === val) {
                  return cur; // Return the current node if the value matches
            } else if (cur.val > val) {
                  cur = cur.left; // Move to the left subtree if the value is smaller
            } else {
                  cur = cur.right; // Move to the right subtree if the value is greater
            }
      }

      return null; // Return null if the value is not found
}