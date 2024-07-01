//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 108

//? ⌚ Time complexity -> O(n) 👉 length of nums array 

//? 🧺 Space complexity -> O(1) 

struct TreeNode *treeMaker(int *nums, int left, int right){
      // base case
      if (left > right){
            return NULL;
      }

      // finding mid
      int mid = left + (right - left) / 2;
      // making root
      struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
      root->val = nums[mid];
      // call for left tree
      root->left = treeMaker(nums, left, mid - 1);
      // call for right tree
      root->right = treeMaker(nums, mid + 1, right);
      return root;
}

struct TreeNode *sortedArrayToBST(int *nums, int numsSize){
      return treeMaker(nums, 0, numsSize - 1);
}