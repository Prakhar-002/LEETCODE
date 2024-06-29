//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 95

/**
 ** Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include<vector>
using namespace std;

class Solution {

private:
      vector<TreeNode*> generate(int left, int right){
            // base case for storing null
            if (left > right){
                  return {nullptr};
            }

            vector<TreeNode*> res;

            //  traverse for every value in given range
            for (int val = left; val <= right; val++){
                  // for every leftTree 
                  for (TreeNode*  leftTree : generate(left, val - 1)){
                        // for every rightTree
                        for (TreeNode* rightTree : generate(val + 1, right)){
                              // we generate a root of val, leftVal, rightVal
                              TreeNode* root = new TreeNode(val, leftTree, rightTree);
                              // and append the root in our vector
                              res.push_back(root);
                        }
                  }
            }
            return res;
      } 

public:
      vector<TreeNode*> generateTrees(int n) {
            return generate(1, n);
      }
};