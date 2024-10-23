#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2641

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Number of Nodes

#? 🧺 Space complexity ➺ O(h) -> h = Height of Tree

from collections import deque

class Solution:
      def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            # This list will store the sum of values at each level of the tree.
            level_sum = []

            # Initialize a queue (q) with the root node to perform level order traversal.
            q = deque([root])

            # First, traverse the tree to calculate the sum of nodes at each level.
            while q:
                  cur_sum = 0  # Initialize the sum for the current level.
                  
                  # Loop through all the nodes at the current level.
                  for _ in range(len(q)):
                        node = q.popleft()  # Remove and get the first node in the queue.
                        cur_sum += node.val  # Add the node's value to the current sum.

                        # Add the node's children to the queue if they exist.
                        if node.left:
                              q.append(node.left)

                        if node.right:
                              q.append(node.right)

                  # After processing the entire level, add the sum of this level to the list.
                  level_sum.append(cur_sum)

            # Reinitialize the queue with root node and its original value.
            q = deque([(root, root.val)])

            level = 0  # To track the current level.

            # Traverse the tree again to replace node values.
            while q:
                  # Process all the nodes at the current level.
                  for _ in range(len(q)):
                        node, val = q.popleft()  # Remove the node and its value from the queue.

                        # Replace the current node's value with the sum of its level 
                        # minus the node's original value (val).
                        node.val = level_sum[level] - val

                        # Calculate the sum of values of its child nodes (left and right).
                        child_sum = 0

                        if node.left:
                              child_sum += node.left.val

                        if node.right:
                              child_sum += node.right.val

                        # Add the left and right children to the queue along with the calculated child sum.
                        if node.left:
                              q.append((node.left, child_sum))

                        if node.right:
                              q.append((node.right, child_sum))

                  # Move to the next level.
                  level += 1

            # Return the modified tree.
            return root
