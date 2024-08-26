//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 590

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
      public List<Integer> postorder(Node root) {
            // to store the values of the nodes as they are visited in postorder sequence
            List<Integer> postOrderList = new ArrayList<>();

            postOrderTraversal(root, postOrderList);

            // return postOrderList: After the traversal is complete
            return postOrderList;
      }

      private void postOrderTraversal(Node root, List<Integer> postOrderList) {
            // if the `root` is `null`
            if (root == null) {
                  // returns immediately
                  return;
            }

            // iterates over each child of the current node
            for (Node child : root.children) {
                  // calling `postOrderTraversal` for each child
                  // This ensures that all children of the current node are processed
                  // before the current node itself
                  postOrderTraversal(child, postOrderList);
            }

            // value of the node (`root.val`) is added to `postOrderList`
            postOrderList.add(root.val);
      }
}