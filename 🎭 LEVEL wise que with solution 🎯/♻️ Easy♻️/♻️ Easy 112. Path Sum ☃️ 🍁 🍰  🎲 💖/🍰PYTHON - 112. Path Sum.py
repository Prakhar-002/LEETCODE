#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 112

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#* Recursive Modify targetSum

class Solution:
      def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
            # If the tree is empty, there is no path, so return False
            if not root:
                  return False

            # Subtract the current node's value from the target sum
            targetSum -= root.val

            # If the current node is a leaf (no left or right children)
            # Check if the running sum equals the target sum
            if not root.left and not root.right:
                  return targetSum == 0

            # Recursively check the left and right subtrees
            # Return True if either subtree has a valid path
            return (self.hasPathSum(root.left, targetSum) or 
                        self.hasPathSum(root.right, targetSum))

#!---------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#* Iterative way

class Solution:
      def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
            # If the tree is empty, there is no path, so return False
            if not root:
                  return False

            # Stack to hold pairs of (node, cur_sum)
            stack = [(root, root.val)]

            # Perform iterative DFS
            while stack:
                  # Pop a node and its corresponding running sum from the stack
                  node, cur_sum = stack.pop()

                  # If the current node is a leaf, check if the path sum equals the target
                  if not node.left and not node.right:
                        if cur_sum == targetSum:
                              return True

                  # If the current node has a right child, add it to the stack
                  if node.right:
                        stack.append((node.right, cur_sum + node.right.val))

                  # If the current node has a left child, add it to the stack
                  if node.left:
                        stack.append((node.left, cur_sum + node.left.val))

            # If no path with the target sum was found, return False
            return False

#!---------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#* Recursive with cur_sum 

class Solution:
      def hasPathSum(self, root: Optional[TreeNode], target_sum: int) -> bool:
            # Variable to track if a path with the given sum exists
            path_exists = False

            # Helper function for Depth-First Search (DFS)
            def dfs(node, current_sum):
                  nonlocal path_exists  # Allow modification of the outer variable

                  # If the node is null, simply return
                  if not node:
                        return

                  # Add the current node's value to the running sum
                  current_sum += node.val

                  # Check if the current node is a leaf node
                  if not node.left and not node.right:
                        # If the sum matches target_sum, set path_exists to True
                        if current_sum == target_sum:
                              path_exists = True
                        return

                  # Recursively check the left and right subtrees
                  dfs(node.left, current_sum)
                  dfs(node.right, current_sum)

            # Start DFS from the root node with an initial sum of 0
            dfs(root, 0)

            # Return the result indicating whether a path exists
            return path_exists
