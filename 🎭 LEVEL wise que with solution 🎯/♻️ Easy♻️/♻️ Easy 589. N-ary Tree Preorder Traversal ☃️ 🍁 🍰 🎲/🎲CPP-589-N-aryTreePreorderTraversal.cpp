//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 589

//? ⌚ Time complexity ➺ O(n)  👉🏻 n = number of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻 H = height of tree

/*
* Definition for a Node.
class Node {
public:
      int val;
      vector<Node*> children;

      Node() {}

      Node(int _val) {
            val = _val;
      }

      Node(int _val, vector<Node*> _children) {
            val = _val;
            children = _children;
      }
};
*/

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> preorder(Node* root) {
            // to store the values of the nodes as they are visited in preorder sequence
            vector<int> preOrderList;

            preOrderTraversal(root, preOrderList);

            // return preOrderList: After the traversal is complete
            return preOrderList;
      }

private:
      void preOrderTraversal(Node* root, vector<int>& preOrderList) {
            // if the `root` is `nullptr`
            if (root == nullptr) {
                  // returns immediately
                  return;
            }

            // value of the node (`root->val`) is added to `preOrderList`
            preOrderList.push_back(root->val);

            // iterates over each child of the current node
            for (Node* child : root->children) {
                  // calling `preOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // after the current node itself
                  preOrderTraversal(child, preOrderList);
            }
      }
};