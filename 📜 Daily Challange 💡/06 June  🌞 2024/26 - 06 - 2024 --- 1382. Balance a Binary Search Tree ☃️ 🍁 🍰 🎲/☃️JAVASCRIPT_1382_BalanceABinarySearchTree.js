//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1382 

//? ⌚ Time complexity -> O(n) => n is number of nodes

//? 🧺 Space complexity -> O(n) => n is number of nodes

const inOrderTraversal = function(root, inOrder){
      if (!root) {
            return;
      }

      // traverse left first
      inOrderTraversal(root.left, inOrder);
      // push the value in our array
      inOrder.push(root.val);
      // then traverse right 
      inOrderTraversal(root.right, inOrder);
}

const buildBinarySearch = function(inOrder, st, end){
      // if start > end out of bound
      if (st > end) {
            return null;
      }

      // find mid and make it our root
      let mid = st + Math.floor((end - st) / 2);
      // make a node with mid value of our array
      let curNode = new TreeNode(inOrder[mid]);
      // call function for left part with st to mid - 1 and assign to left of our curNode
      curNode.left = buildBinarySearch(inOrder, st, mid - 1);
      // call function for right part with mid + 1 to end and assign to right of our curNode
      curNode.right = buildBinarySearch(inOrder, mid + 1, end);
      // return our curNode
      return curNode;
}

var balanceBST = function(root) {
      // make a array list to store all the values from our tree
      let inOrder = [];
      // function that traverse InOrder 
      inOrderTraversal(root, inOrder);

      // return new binary tree we'll build from our array
      return buildBinarySearch(inOrder, 0, inOrder.length - 1);
};
