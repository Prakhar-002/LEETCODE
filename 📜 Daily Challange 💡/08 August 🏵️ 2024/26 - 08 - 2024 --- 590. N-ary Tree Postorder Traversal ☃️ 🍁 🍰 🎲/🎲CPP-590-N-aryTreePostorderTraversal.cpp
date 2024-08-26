//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 590

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
      vector<int> postorder(Node* root) {
            // to store the values of the nodes as they are visited in postorder sequence
            vector<int> postOrderList;

            postOrderTraversal(root, postOrderList);

            // return postOrderList: After the traversal is complete
            return postOrderList;
      }

private:
      void postOrderTraversal(Node* root, vector<int>& postOrderList) {
            // if the `root` is `nullptr`
            if (root == nullptr) {
                  // returns immediately
                  return;
            }

            // iterates over each child of the current node
            for (Node* child : root->children) {
                  // calling `postOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // before the current node itself
                  postOrderTraversal(child, postOrderList);
            }

            // value of the node (`root->val`) is added to `postOrderList`
            postOrderList.push_back(root->val);
      }
};