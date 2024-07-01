//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 108

//? ⌚ Time complexity -> O(n) 👉 length of nums array 

//? 🧺 Space complexity -> O(1) 

var sortedArrayToBST = function (nums) {

      function treeMaker(left, right) {
            // base case
            if (left > right) {
                  return null;
            }

            // finding mid
            const mid = left + Math.floor((right - left) / 2);
            // making root
            const root = new TreeNode(nums[mid]);
            // call for left tree
            root.left = treeMaker(left, mid - 1);
            // call for right tree
            root.right = treeMaker(mid + 1, right);
            return root;
      }

      return treeMaker(0, nums.length - 1);
};    