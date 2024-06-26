//! https://github.com/Prakhar-002/LEETCODE

// ? Time complexity -> O(n) => n is number of nodes

// ? Space complexity -> O(n) => n is number of nodes

#include<vector>
using namespace std;

class Solution {

private:
      void inOrderTraversal(TreeNode* root , vector<int>& inOrder){
            if (!root) {
                  return;
            }

            // traverse left first
            inOrderTraversal(root->left, inOrder);
            // push the value in our array
            inOrder.push_back(root->val);
            // then traverse right 
            inOrderTraversal(root->right, inOrder);
      }

private:
      TreeNode* buildBinarySearch(vector<int>& inOrder, int st, int end) {
            // if start > end out of bound
            if (st > end){
                  return nullptr;
            }

            // find mid and make it our root
            int mid = st + (end - st) / 2;
            // make a node with mid value of our array
            TreeNode* curNode = new TreeNode(inOrder[mid]);
            // call function for left part with st to mid - 1 and assign to left of our curNode
            curNode->left = buildBinarySearch(inOrder, st, mid - 1);
            // call function for right part with mid + 1 to end and assign to right of our curNode
            curNode->right = buildBinarySearch(inOrder, mid + 1, end);
            // return our curNode
            return curNode;
      }

public:
      TreeNode* balanceBST(TreeNode* root) {
            // make a array list to store all the values from our tree
            vector<int> inOrder;
            // function that traverse InOrder 
            inOrderTraversal(root, inOrder);

            // return new binary tree we'll build from our array
            return buildBinarySearch(inOrder, 0, inOrder.size() - 1);
      }
};