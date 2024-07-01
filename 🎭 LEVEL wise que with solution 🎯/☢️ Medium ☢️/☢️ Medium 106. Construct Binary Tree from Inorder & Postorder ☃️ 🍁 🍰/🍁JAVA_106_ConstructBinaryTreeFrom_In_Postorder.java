//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {

      // Function to convert arr to arrayList
      public List<Integer> arrToList(int[] arr){
            List<Integer> list = new ArrayList<>();
            for (int i : arr) {
                  list.add(i);
            }

            return list;
      }

      // main Function
      public TreeNode buildTree(int[] inorder, int[] postorder) {
            return buildTree(arrToList(inorder), arrToList(postorder));
      }

      // using arrayList instead of array
      public TreeNode buildTree(List<Integer> inOrder, List<Integer> postOrder){
            // If we got out inOrder empty then we'll return false 
            if (inOrder.isEmpty()) {
                  return null;
            }

            // Making the last of postOrder to our main root
            TreeNode root = new TreeNode(postOrder.remove(postOrder.size() - 1));

            // Finding position of root.val in our in inOrder array
            int idx = inOrder.indexOf(root.val);
            // Right of our root's value's index will be the right of of our tree
            root.right = buildTree(inOrder.subList(idx + 1, inOrder.size()), postOrder);
            // left of our root's value's index will be the left of of our tree
            root.left = buildTree(inOrder.subList(0, idx), postOrder);
            // return tree
            return root;
      }
}