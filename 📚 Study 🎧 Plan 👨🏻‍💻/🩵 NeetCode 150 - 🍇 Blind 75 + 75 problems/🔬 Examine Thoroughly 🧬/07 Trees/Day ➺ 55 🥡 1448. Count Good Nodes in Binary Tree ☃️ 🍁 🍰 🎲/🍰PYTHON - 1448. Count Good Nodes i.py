#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1448

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

#* Recursive Way

class Solution:
      # Helper function to perform depth-first search (DFS)
      def dfs(self, node, maxVal):
            # Base case: If the node is None, return 0 as there are no good nodes
            if not node:
                  return 0 

            # Check if the current node is a "good" node
            # A node is "good" if its value is greater than or equal to the maxVal seen so far
            goodNodeCount = 1 if node.val >= maxVal else 0

            # Update maxVal to the maximum value encountered so far
            maxVal = max(maxVal, node.val)

            # Recursively check the left and right subtrees for good nodes
            goodNodeCount += self.dfs(node.left, maxVal)
            goodNodeCount += self.dfs(node.right, maxVal)

            # Return the total count of good nodes for the current subtree
            return goodNodeCount

      # Main function to calculate the total number of good nodes in the tree
      def goodNodes(self, root: TreeNode) -> int:
            # Start DFS with the root value as the initial maximum value
            return self.dfs(root, root.val)

#!---------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

#* Iterative Version

class Solution:
      def goodNodes(self, root: TreeNode) -> int:
            if not root:
                  return 0

            # Stack to store pairs of nodes and their maximum value encountered so far
            stack = [(root, root.val)]
            goodNodeCount = 0

            while stack:
                  # Pop the top element of the stack (current node and its maxVal)
                  node, maxVal = stack.pop()

                  # Count this node as "good" if its value is greater than or equal to maxVal
                  if node.val >= maxVal:
                        goodNodeCount += 1

                  # Update maxVal to the maximum value encountered so far
                  maxVal = max(maxVal, node.val)

                  # Push the left and right children to the stack
                  if node.right:
                        stack.append((node.right, maxVal))
                  if node.left:
                        stack.append((node.left, maxVal))

            return goodNodeCount
