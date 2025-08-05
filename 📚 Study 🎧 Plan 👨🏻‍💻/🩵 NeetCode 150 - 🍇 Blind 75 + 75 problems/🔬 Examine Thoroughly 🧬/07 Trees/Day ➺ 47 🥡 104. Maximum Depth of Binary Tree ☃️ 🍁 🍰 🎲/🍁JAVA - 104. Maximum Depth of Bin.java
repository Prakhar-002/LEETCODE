//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Recursive DFS

class Solution {
      // Function to compute the maximum depth of a binary tree
      public int maxDepth(TreeNode root) {
            // If the tree is empty, return 0 (no depth)
            if (root == null) {
                  return 0;
            }

            // Recursively compute the depth of the left subtree
            int leftHeight = maxDepth(root.left);

            // Recursively compute the depth of the right subtree
            int rightHeight = maxDepth(root.right);

            // Find the maximum depth between the left and right subtrees
            int max = Math.max(leftHeight, rightHeight);

            // Return the maximum depth plus 1 for the current node
            return max + 1;
      }
}

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* BFS 

class Solution {
      public int maxDepth(TreeNode root) {
            // Initialize a stack to perform depth-first search (DFS)
            // Each element in the stack is an array containing a node and its depth
            Deque<TreeNodeDepthPair> stack = new ArrayDeque<>();
            if (root != null) {
                  stack.push(new TreeNodeDepthPair(root, 1));
            }

            // Variable to track the maximum depth of the tree
            int level = 0;

            // Process nodes until the stack is empty
            while (!stack.isEmpty()) {
                  // Pop the top element of the stack (current node and its depth)
                  TreeNodeDepthPair nodeData = stack.pop();
                  TreeNode node = nodeData.node;
                  int depth = nodeData.depth;

                  // Update the maximum depth encountered so far
                  level = Math.max(level, depth);

                  // If the node has a left child, add it to the stack with depth incremented by 1
                  if (node.left != null) {
                        stack.push(new TreeNodeDepthPair(node.left, depth + 1));
                  }

                  // If the node has a right child, add it to the stack with depth incremented by 1
                  if (node.right != null) {
                        stack.push(new TreeNodeDepthPair(node.right, depth + 1));
                  }
            }

            // Return the maximum depth of the binary tree
            return level;
      }
}

// Helper class to hold a TreeNode and its corresponding depth
class TreeNodeDepthPair {
      TreeNode node;
      int depth;

      // Constructor to initialize the pair
      public TreeNodeDepthPair(TreeNode node, int depth) {
            this.node = node;
            this.depth = depth;
      }
}

//!-------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

//* Iterative DFS 

class Solution {
      public int maxDepth(TreeNode root) {
            // Initialize a stack to perform depth-first search (DFS)
            // Each element in the stack is a TreeNodeDepthPair containing a node and its depth
            Deque<TreeNodeDepthPair> stack = new ArrayDeque<>();
            if (root != null) {
                  stack.push(new TreeNodeDepthPair(root, 1));
            }

            // Variable to track the maximum depth of the tree
            int level = 0;

            // Process nodes until the stack is empty
            while (!stack.isEmpty()) {
                  // Pop the top element of the stack (current node and its depth)
                  TreeNodeDepthPair nodeData = stack.pop();
                  TreeNode node = nodeData.node;
                  int depth = nodeData.depth;

                  // Update the maximum depth encountered so far
                  level = Math.max(level, depth);

                  // If the node has a left child, add it to the stack with depth incremented by 1
                  if (node.left != null) {
                        stack.push(new TreeNodeDepthPair(node.left, depth + 1));
                  }

                  // If the node has a right child, add it to the stack with depth incremented by 1
                  if (node.right != null) {
                        stack.push(new TreeNodeDepthPair(node.right, depth + 1));
                  }
            }

            // Return the maximum depth of the binary tree
            return level;
      }
}
