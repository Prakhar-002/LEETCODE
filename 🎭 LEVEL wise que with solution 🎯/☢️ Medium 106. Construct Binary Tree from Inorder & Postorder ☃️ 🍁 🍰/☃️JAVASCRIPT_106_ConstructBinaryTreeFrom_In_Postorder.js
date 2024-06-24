//! https://github.com/Prakhar-002/LEETCODE

var buildTree = function (inOrder, postOrder) {
      // If we got out inOrder empty then we'll return false 
      if (!inOrder.length) {
            return null;
      }

      // Making the last of postOrder to our main root
      const root = new TreeNode(postOrder.pop());

      // Finding position of root.val in our inOrder array
      const idx = inOrder.indexOf(root.val);
      // Right of our root's value's index will be the right of our tree
      root.right = buildTree(inOrder.slice(idx + 1), postOrder);
      // Left of our root's value's index will be the left of our tree
      root.left = buildTree(inOrder.slice(0, idx), postOrder);
      // return tree
      return root;
}