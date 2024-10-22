//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2583

//? ⌚ Time complexity ➺ O(n + h Log k) 👉🏻  n = Total Nodes

//? 🧺 Space complexity ➺ O(k) h = Height of tree

import java.util.*;

class Solution {
      public long kthLargestLevelSum(TreeNode root, int k) {
            // Initialize a queue with the root node to perform level order traversal
            Queue<TreeNode> q = new LinkedList<>();
            q.offer(root);

            // Initialize a PriorityQueue to use as a min-heap
            PriorityQueue<Long> minHeap = new PriorityQueue<>();

            // Loop to process each level in the binary tree
            while (!q.isEmpty()) {
                  // Initialize the sum of the current level's nodes
                  long levelSum = 0;

                  // Loop through all nodes in the current level
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; i++) {
                        // Remove the node from the front of the queue
                        TreeNode node = q.poll();
                        // Add the node's value to the current level sum
                        levelSum += node.val;

                        // Add the left child to the queue if it exists
                        if (node.left != null) {
                              q.offer(node.left);
                        }

                        // Add the right child to the queue if it exists
                        if (node.right != null) {
                              q.offer(node.right);
                        }
                  }

                  // Add the current level sum to the min-heap
                  minHeap.offer(levelSum);

                  // If the heap size exceeds k, remove the smallest element
                  if (minHeap.size() > k) {
                        minHeap.poll();
                  }
            }

            // If there are fewer than k levels, return -1; otherwise, return the kth
            // largest level sum
            return minHeap.size() < k ? -1 : minHeap.peek();
      }
}
