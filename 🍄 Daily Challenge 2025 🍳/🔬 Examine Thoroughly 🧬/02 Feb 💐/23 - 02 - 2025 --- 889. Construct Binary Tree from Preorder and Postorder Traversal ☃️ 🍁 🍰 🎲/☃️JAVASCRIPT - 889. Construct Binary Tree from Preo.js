//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 889

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var constructFromPrePost = function (preorder, postorder) {
      let postMap = new Map(); // Map to store value -> index mapping for postorder traversal
      let N = preorder.length; // Number of nodes in the tree

      // Populate the postorder index map for quick lookup
      for (let i = 0; i < N; i++) {
            postMap.set(postorder[i], i);
      }

      function build(preStart, preEnd, postStart, postEnd) {
            // Base case: If start index exceeds end index, return null
            if (preStart > preEnd || postStart > postEnd) {
                  return null;
            }

            // Create the root node using the first element of preorder
            let root = new TreeNode(preorder[preStart]);

            // If only one node is present, return it
            if (preStart !== preEnd) {
                  // Find the value of the left child (next element in preorder)
                  let leftVal = preorder[preStart + 1];

                  // Get the index of left child in postorder traversal
                  let mid = postMap.get(leftVal);

                  // Calculate the size of the left subtree
                  let leftSize = mid - postStart + 1;

                  // Recursively build left and right subtrees
                  root.left = build(preStart + 1, preStart + leftSize, postStart, mid);
                  root.right = build(preStart + leftSize + 1, preEnd, mid + 1, postEnd - 1);
            }

            return root; // Return the constructed root node
      }

      // Start tree construction from the full range of preorder and postorder arrays
      return build(0, N - 1, 0, N - 1);
}