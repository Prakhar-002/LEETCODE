#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 104

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

#? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

#* Iterative DFS 

class Solution:
      def maxDepth(self, root: TreeNode) -> int:
            # Initialize a stack to perform depth-first search (DFS)
            # Each element in the stack is a list containing a node and its depth
            stack = [[root, 1]]

            # Variable to track the maximum depth of the tree
            level = 0

            # Process nodes until the stack is empty
            while stack:
                  # Pop the top element of the stack (current node and its depth)
                  node, depth = stack.pop()

                  # If the node is not None, process it
                  if node:
                        # Update the maximum depth encountered so far
                        level = max(level, depth)

                        # Add the left child to the stack with depth incremented by 1
                        stack.append([node.left, depth + 1])

                        # Add the right child to the stack with depth incremented by 1
                        stack.append([node.right, depth + 1])

            # Return the maximum depth of the binary tree
            return level

#!-------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

#? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

#* BFS 

from collections import deque

class Solution:
      def maxDepth(self, root: TreeNode) -> int:
            # If the tree is empty, return 0 as the depth
            if not root:
                  return 0

            # Initialize the level (depth) of the tree to 0
            level = 0

            # Use a deque (double-ended queue) to perform BFS, starting with the root node
            q = deque([root])

            # Continue while there are nodes in the queue
            while q:
                  # Iterate over all nodes at the current level
                  for i in range(len(q)):
                        # Remove the current node from the front of the queue
                        node = q.popleft()

                        # If the current node has a left child, add it to the queue
                        if node.left:
                              q.append(node.left)

                        # If the current node has a right child, add it to the queue
                        if node.right:
                              q.append(node.right)

                  # Increment the level counter after processing all nodes at this level
                  level += 1

            # Return the maximum depth of the binary tree
            return level

#!-------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

#? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

#* Recursive DFS 

class Solution:
      # Function to compute the maximum depth of a binary tree
      def maxDepth(self, root: TreeNode) -> int:
            # If the tree is empty, return 0 (no depth)
            if root is None:
                  return 0

            # Recursively compute the depth of the left subtree
            leftHeight = self.maxDepth(root.left)

            # Recursively compute the depth of the right subtree
            rightHeight = self.maxDepth(root.right)

            # Find the maximum depth between the left and right subtrees
            max_depth = max(leftHeight, rightHeight)

            # Return the maximum depth plus 1 for the current node
            return max_depth + 1

