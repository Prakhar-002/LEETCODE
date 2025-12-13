//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2196

//? ⌚ Time complexity -> O(n) 👉 descriptions length 

//? 🧺 Space complexity -> O(n) 👉 using nodes hashMap and Children HashSet

import java.util.*;

class Solution {
      public TreeNode createBinaryTree(int[][] descriptions) {
            HashMap<Integer, TreeNode> treeNodes = new HashMap<>();
            HashSet<Integer> children = new HashSet<>();
            TreeNode root = null;

            for (int[] description : descriptions) {
                  int parent = description[0];
                  int child = description[1];
                  int isLeft = description[2];

                  // add every child to our set
                  children.add(child);

                  // if parent is not yet in our hashmap create it
                  if (!treeNodes.containsKey(parent)) {
                        treeNodes.put(parent, new TreeNode(parent));
                  }

                  // if child is not yet in our hashmap create it
                  if (!treeNodes.containsKey(child)) {
                        treeNodes.put(child, new TreeNode(child));
                  }

                  if (isLeft == 1) {
                        // link our left child
                        treeNodes.get(parent).left = treeNodes.get(child);
                  } else {
                        // link our right child
                        treeNodes.get(parent).right = treeNodes.get(child);
                  }
            }

            for (int[] description : descriptions) {
                  int parent = description[0];
                  // check our children set our root node would not we a child
                  if (!children.contains(parent)) {
                        root = treeNodes.get(parent);
                        break;
                  }
            }

            return root;
      }
}