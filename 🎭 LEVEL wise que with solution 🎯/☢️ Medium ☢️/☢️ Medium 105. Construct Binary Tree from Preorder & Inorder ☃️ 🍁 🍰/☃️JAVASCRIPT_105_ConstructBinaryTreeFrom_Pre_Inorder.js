//! https://github.com/Prakhar-002/LEETCODE

var buildTree = function (preorder, inorder) {
      if (preorder.length == 0 || inorder.length == 0) {
            // If we encounter end of one of empty arr
            // root.left = null root.right = null
            return null; 
      }

      // Making root first 
      // because preOrder[0] will be the root of our tree always
      const root = new TreeNode(preorder[0]);
      // find the root value in inOrder array cause 
      // all left values will be left part of tree 
      // and right values will be right part of tree

      let mid = inorder.indexOf(preorder[0])

      //? Left and right part will be called for subpart of preOrder and inOrder array

      // Next part will be from (1 to (mid + 1)) including mid
      // For the inOrder array left part will be (0 to mid) excluding mid 
      root.left = buildTree(preorder.slice(1, mid + 1), inorder.slice(0, mid));

      // For the right part of preOrder & inOrder array will br from (mid + 1 to end of array)
      root.right = buildTree(preorder.slice(mid + 1), inorder.slice(mid + 1));

      // And finally return our root
      return root;;
};