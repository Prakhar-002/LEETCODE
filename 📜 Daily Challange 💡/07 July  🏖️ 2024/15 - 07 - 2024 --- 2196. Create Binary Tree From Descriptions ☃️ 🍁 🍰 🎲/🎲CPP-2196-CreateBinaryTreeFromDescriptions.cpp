//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2196

//? ⌚ Time complexity -> O(n) 👉 description length

//? 🧺 Space complexity -> O(n) 👉 using nodes hashMap and Children HashSet

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
      TreeNode *createBinaryTree(vector<vector<int>> &descriptions) {
            unordered_map<int, TreeNode *> treeNodes;
            unordered_set<int> children;
            TreeNode *root = nullptr;

            for (const auto &description : descriptions) {
                  int parent = description[0];
                  int child = description[1];
                  int isLeft = description[2];

                  // add every child to our set
                  children.insert(child);

                  // if parent is not yet in our unordered_map create it
                  if (treeNodes.find(parent) == treeNodes.end()) {
                        treeNodes[parent] = new TreeNode(parent);
                  }

                  // if child is not yet in our unordered_map create it
                  if (treeNodes.find(child) == treeNodes.end()) {
                        treeNodes[child] = new TreeNode(child);
                  }

                  if (isLeft == 1) {
                        // link our left child
                        treeNodes[parent]->left = treeNodes[child];
                  } else {
                        // link our right child
                        treeNodes[parent]->right = treeNodes[child];
                  }
            }

            for (const auto &description : descriptions) {
                  int parent = description[0];
                  // check our children set our root node would not be a child
                  if (children.find(parent) == children.end()) {
                        root = treeNodes[parent];
                        break;
                  }
            }

            return root;
      }
};