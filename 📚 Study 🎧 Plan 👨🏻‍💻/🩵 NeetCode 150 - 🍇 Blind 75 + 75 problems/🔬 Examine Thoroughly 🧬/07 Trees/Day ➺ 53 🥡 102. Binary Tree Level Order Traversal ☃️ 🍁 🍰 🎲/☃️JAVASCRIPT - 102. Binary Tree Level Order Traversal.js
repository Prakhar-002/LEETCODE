//! https://github.com/Prakhar-002/LEETCODE

var levelOrder = function (root) {
      // making a 2d list
      let wrapList = [];
      // queue for level order
      let q = [];

      // if we got null we'll return our wrapList
      if (root === null) {
            return wrapList; 
      }

      // adding root to our queue first
      q.push(root);

      // apply loop until it gets empty
      while (q.length !== 0) {
            let levelNo = q.length;
            let subList = [];

            while (levelNo > 0) {
                  // Extracting peek node
                  let curNode = q.shift();

                  // insert left node if exist
                  if (curNode.left !== null) {
                        q.push(curNode.left);
                  }

                  // insert right node if exist
                  if (curNode.right !== null) {
                        q.push(curNode.right);
                  }

                  // adding val in our subList
                  subList.push(curNode.val);
                  levelNo -= 1;
            }

            // adding subList to our wrapList
            wrapList.push(subList);
      }

      return wrapList;
};