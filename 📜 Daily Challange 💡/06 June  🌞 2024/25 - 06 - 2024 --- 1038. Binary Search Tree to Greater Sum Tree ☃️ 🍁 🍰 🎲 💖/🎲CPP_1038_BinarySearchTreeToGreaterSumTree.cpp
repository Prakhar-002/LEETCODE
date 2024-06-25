//! https://github.com/Prakhar-002/LEETCODE

//? Time complexity -> O(n)

//? Space complexity -> O(1)

class Solution {
public:
      TreeNode* bstToGst(TreeNode* root) {
            // Initiate curSum that store sum of all nodes
            int curSum = 0;
            // Call the function to update values of tree
            dfs(root, curSum);
            // Return new tree
            return root;
      }

private:
      // making a function that update all the value of our tree
      void dfs(TreeNode* root, int& curSum) {
            // if we get null well return from there
            if (!root) {
                  return;
            }

            //? Step 1 right most
            // go to right most child of node cause that will content highest value in our tree
            // cause that is a binary search tree property
            dfs(root->right, curSum);

            // ? Step 2 update
            // add value of curNode in our sum
            // cause we have to update the val of tree with it's value + sum
            curSum += root->val;
            root->val = curSum;

            // Step 3: Traverse the left subtree
            dfs(root->left, curSum);
      }
};