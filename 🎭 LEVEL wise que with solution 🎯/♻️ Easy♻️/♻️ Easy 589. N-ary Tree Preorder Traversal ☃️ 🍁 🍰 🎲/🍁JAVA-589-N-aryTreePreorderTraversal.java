//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 589

//? ⌚ Time complexity ➺ O(n)  👉🏻 n = number of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻 H = height of tree

/*
* Definition for a Node.

class Node {
      public int val;
      public List<Node> children;

      public Node() {}

      public Node(int _val) {
            val = _val;
      }

      public Node(int _val, List<Node> _children) {
            val = _val;
            children = _children;
      }
};
*/

import java.util.ArrayList;
import java.util.List;

class Solution {
      public List<Integer> preorder(Node root) {
            // to store the values of the nodes as they are visited in preorder sequence
            List<Integer> preOrderList = new ArrayList<>();

            preOrderTraversal(root, preOrderList);

            // return preOrderList: After the traversal is complete
            return preOrderList;
      }

      private void preOrderTraversal(Node root, List<Integer> preOrderList) {
            // if the `root` is `null`
            if (root == null) {
                  // returns immediately
                  return;
            }

            // value of the node (`root.val`) is added to `preOrderList`
            preOrderList.add(root.val);

            // iterates over each child of the current node
            for (Node child : root.children) {
                  // calling `preOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // after the current node itself
                  preOrderTraversal(child, preOrderList);
            }
      }
}