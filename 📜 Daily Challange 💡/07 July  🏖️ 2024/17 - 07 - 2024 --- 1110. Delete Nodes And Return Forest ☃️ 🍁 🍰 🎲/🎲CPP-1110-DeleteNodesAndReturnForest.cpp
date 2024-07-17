//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1110

//? ⌚ Time complexity -> O(n) 👉 Total Nodes

//? 🧺 Space complexity -> O(n) 👉 Using Node's HashSet

#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
private:
      TreeNode *dltNodes(TreeNode *node, unordered_set<int> &toDeleteSet, unordered_set<TreeNode *> &forest) {
            if (node == nullptr) {
                  return nullptr;
            }

            // variable for rather we dlt node or not
            TreeNode *curNode = node;

            // if our curNode's value in to_delete then dlt it
            if (toDeleteSet.find(curNode->val) != toDeleteSet.end()) {
                  // dlt our curNode
                  curNode = nullptr;
                  // remove it from our forest
                  forest.erase(node);
                  // add It's left child if exist
                  if (node->left != nullptr) {
                        forest.insert(node->left);
                  }
                  // add It's right child if exist
                  if (node->right != nullptr) {
                        forest.insert(node->right);
                  }
            }

            // call for the left tree weather we dlt curNode or not
            if (node->left != nullptr) {
                  node->left = dltNodes(node->left, toDeleteSet, forest);
            }
            // call for the right tree
            if (node->right != nullptr) {
                  node->right = dltNodes(node->right, toDeleteSet, forest);
            }
            // return curNode deleted or not deleted
            return curNode;
      }

public:
      vector<TreeNode *> delNodes(TreeNode *root, vector<int> &to_delete) {
            // Making unordered_set of to_delete
            unordered_set<int> toDeleteSet(to_delete.begin(), to_delete.end());

            // making a set of all value of root
            unordered_set<TreeNode *> forest;
            forest.insert(root);

            dltNodes(root, toDeleteSet, forest);

            return vector<TreeNode *>(forest.begin(), forest.end());
      }
};