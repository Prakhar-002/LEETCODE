//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 Number of nodes

//? 🧺 Space complexity -> O(1) 

var isBalanced = function(root) {

      var checkBalance = function(root){
            // if null return tree for balance and height of tree till that
            if (!root) {
                  return [true, 0];
            }

            var left = checkBalance(root.left);
            var right = checkBalance(root.right);

            // what ever we get from our left and right tree T\F 
            var balanced = (left[0] && 
                  right[0] && 
                  // checking the condition of binary search tree
                  (Math.abs(left[1] - right[1]) <= 1)
            )

            // height of our tree will be self + max of left and right
            return [balanced, 1 + Math.max(left[1], right[1])];
      }

      return checkBalance(root)[0];
};