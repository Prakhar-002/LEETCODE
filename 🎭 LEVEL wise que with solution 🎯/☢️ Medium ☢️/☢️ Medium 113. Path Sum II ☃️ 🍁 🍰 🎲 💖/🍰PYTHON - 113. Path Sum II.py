#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 113

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

class Solution:
      def pathSum(self, root, targetSum):
            # List to store all the valid paths
            res = []

            # Helper function to traverse the tree and find paths
            def findPath(node, path, cur_sum):
                  # Base case: If the node is None, return
                  if not node:
                        return

                  # Add the current node's value to the cumulative sum
                  cur_sum += node.val

                  # Add the current node's value to the path
                  path.append(node.val)

                  # Check if the current node is a leaf and the path sum equals the target
                  if not node.left and not node.right and cur_sum == targetSum:
                        # If so, append a copy of the path to the result
                        res.append(list(path))
                  else:
                        # Otherwise, recursively call for the left and right child nodes
                        findPath(node.left, path, cur_sum)
                        findPath(node.right, path, cur_sum)

                  # Backtrack: Remove the current node from the path before returning to the caller
                  path.pop()

            # Start the recursive search from the root with an empty path and sum of 0
            findPath(root, [], 0)

            # Return the list of all valid paths
            return res

#!-------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#* Iterative Way 

class Solution:
      def pathSum(self, root, targetSum):
            if not root:
                  return []

            # List to store all valid paths
            res = []

            # Stack for DFS, storing tuples (node, current path, current sum)
            stack = [(root, [root.val], root.val)]

            while stack:
                  node, path, cur_sum = stack.pop()

                  # Check if the current node is a leaf and the path sum equals the target
                  if not node.left and not node.right and cur_sum == targetSum:
                        res.append(path)

                  # Add the right child to the stack if it exists
                  if node.right:
                        stack.append((node.right, path + [node.right.val], cur_sum + node.right.val))

                  # Add the left child to the stack if it exists
                  if node.left:
                        stack.append((node.left, path + [node.left.val], cur_sum + node.left.val))

            return res
