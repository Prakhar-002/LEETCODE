//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public List<List<Integer>> levelOrder(TreeNode root) {
            // making a 2d list 
            List<List<Integer>> wrapList = new LinkedList<>();
            // queue for level order
            Queue<TreeNode> q = new LinkedList<>();
            // if we got null we'll return our wrapList
            if (root == null) {
                  return wrapList;
            }

            // adding root to our queue first
            q.offer(root);

            // apply loop unTill it get empty
            while (!q.isEmpty()) {
                  int levelNo = q.size();
                  List<Integer> subList = new LinkedList<>();

                  while (levelNo-- > 0) {
                        // Extracting peek node
                        TreeNode curNode = q.poll();
                        // insert left node if exist 
                        if (curNode.left != null) {
                              q.offer(curNode.left);
                        }
                        // insert right node if exist
                        if (curNode.right != null) {
                              q.offer(curNode.right);
                        }
                        // adding val in our subList
                        subList.add(curNode.val);
                  }
                  // adding subList to our wrapList
                  wrapList.add(subList);
            }
            return wrapList;
      }
}
