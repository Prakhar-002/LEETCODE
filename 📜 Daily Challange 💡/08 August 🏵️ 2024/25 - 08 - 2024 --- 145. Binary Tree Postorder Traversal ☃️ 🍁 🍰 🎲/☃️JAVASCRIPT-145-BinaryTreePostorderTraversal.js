//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Helper function to perform post-order traversal
function postOrderTraversal(root, postArr) {
      // If root is null, return immediately
      if (root === null) {
            return;
      }

      // Traverse left subtree
      postOrderTraversal(root.left, postArr);
      // Traverse right subtree
      postOrderTraversal(root.right, postArr);
      // Add current node's value to the result array
      postArr.push(root.val);
}

//  Perform post-order traversal on a binary tree
function postorderTraversal(root) {
      // Create an empty array to store the traversal result
      const postOrderArr = [];

      // Call the helper function to perform the traversal
      postOrderTraversal(root, postOrderArr);

      // Return the array containing node values in post-order
      return postOrderArr;
}