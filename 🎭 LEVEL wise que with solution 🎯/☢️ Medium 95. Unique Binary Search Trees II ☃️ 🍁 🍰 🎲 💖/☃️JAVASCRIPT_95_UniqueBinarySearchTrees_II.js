//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 95

var generate = function(left, right){
      // base case for storing null
      if (left > right) {
            return [null];
      }

      let res = [];

      //  traverse for every value in given range
      for (let val = left; val < right + 1; val++) {
            // for every leftTree 
            for (const leftTree of generate(left, val - 1)) {
                  // for every rightTree
                  for (const rightTree of generate(val + 1, right)) {
                        // we generate a root of val, leftVal, rightVal
                        let root = new TreeNode(val, leftTree, rightTree);
                        // and push to the root in our array
                        res.push(root);
                  }
            }
      }
      return res;
}

var generateTrees = function(n) {
      return generate(1, n);
};
