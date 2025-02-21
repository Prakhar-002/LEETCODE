//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1261

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* DFS 

import java.util.*;

class FindElements {
      private Set<Integer> seen;  // Set to store recovered values

      public FindElements(TreeNode root) {
            seen = new HashSet<>();
            // Start DFS traversal to reconstruct tree
            dfs(root, 0);
      }

      /* 
            Check if the target value exists in the recovered tree.
            Returns True if the target exists, otherwise False.
      */
      public boolean find(int target) {
            // Check if target exists in the recovered set
            return seen.contains(target);
      }

      /*
            Recovers the tree using DFS traversal.
            cur_node: Current node being processed
            cur_val: Corrected value of the current node
      */
      private void dfs(TreeNode curNode, int curVal) {
            if (curNode == null) {
                  return; // Base case: if node is null, stop recursion
            }

            // Store the recovered value
            seen.add(curVal);

            // Recursively recover left and right children
            dfs(curNode.left, curVal * 2 + 1);
            dfs(curNode.right, curVal * 2 + 2);
      }
}

//!------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* BFS 

class FindElements {
      private Set<Integer> seen;  // HashSet to store recovered values

      /* 
            Constructor to recover the tree.
            Uses BFS to reconstruct the tree and store valid values.
      */
      public FindElements(TreeNode root) {
            seen = new HashSet<>();
            bfs(root);  // Start BFS traversal to recover tree
      }

      /*
            Check if the target value exists in the recovered tree.
            Returns True if found, otherwise False.
      */
      public boolean find(int target) {
            // Check if the target exists in the recovered set
            return seen.contains(target);
      }

      /*
            Recovers the tree using Breadth-First Search (BFS).
            root: Root node of the contaminated tree.
      */
      private void bfs(TreeNode root) {
            Queue<TreeNode> q = new LinkedList<>();
            root.val = 0;  // Set root value to 0
            q.add(root);  // Add root to the queue

            while (!q.isEmpty()) {
                  TreeNode curNode = q.poll();  // Get front node
                  seen.add(curNode.val);  // Store recovered value

                  // Process left child if it exists
                  if (curNode.left != null) {
                        curNode.left.val = curNode.val * 2 + 1;
                        q.add(curNode.left);
                  }

                  // Process right child if it exists
                  if (curNode.right != null) {
                        curNode.right.val = curNode.val * 2 + 2;
                        q.add(curNode.right);
                  }
            }
      }
}
