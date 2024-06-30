//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 108

//? ⌚ Time complexity -> O(n) 👉 length of nums array

//? 🧺 Space complexity -> O(1)

#include <vector>
using namespace std;

class Solution{

private:
      TreeNode *treeMaker(std::vector<int> &nums, int left, int right){
            // base case
            if (left > right){
                  return nullptr;
            }

            // finding mid
            int mid = left + (right - left) / 2;
            // making root
            TreeNode *root = new TreeNode(nums[mid]);
            // call for left tree
            root->left = treeMaker(nums, left, mid - 1);
            // call for right tree
            root->right = treeMaker(nums, mid + 1, right);
            return root;
      }

public:
      TreeNode *sortedArrayToBST(vector<int> &nums){
            return treeMaker(nums, 0, nums.size() - 1);
      }
};