#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 437

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
            # Dictionary to store the frequency of prefix sums encountered
            sums = defaultdict(int)
            sums[0] = 1  # Base case: there's one way to get a sum of 0 (empty path)

            def dfs(root, cur_sum):
                  # If the node is None, no path is possible
                  if not root:
                        return 0

                  # Add the current node's value to the running cur_sum
                  cur_sum += root.val

                  # The number of valid paths to the current node is the number of times
                  # (cur_sum - targetSum) has been seen as a prefix sum
                  count = sums[cur_sum - targetSum]

                  # Record the current cur_sum in the prefix sum map
                  sums[cur_sum] += 1

                  # Recursively check the left and right subtrees for more paths
                  count += dfs(root.left, cur_sum) + dfs(root.right, cur_sum)

                  # Backtrack: remove the current cur_sum from the prefix sum map
                  sums[cur_sum] -= 1

                  return count

            return dfs(root, 0)

#!---------------------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(H)    👉🏻  h = Height of Tree

#* Dual DFS

class Solution:
      def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
            # Helper function to count paths starting from the current node
            def dfs(node, target):
                  if not node:
                        return 0
                  
                  # Check if the current node itself matches the target
                  count = 1 if node.val == target else 0

                  # Recursively check the left and right subtrees
                  count += dfs(node.left, target - node.val)
                  count += dfs(node.right, target - node.val)

                  return count

            # Main function to count all paths in the tree
            def pathFromNode(node):
                  if not node:
                        return 0
                  # Start DFS from the current node and check all paths
                  count = dfs(node, targetSum)
                  # Recursively check the left and right subtrees for paths
                  count += pathFromNode(node.left)
                  count += pathFromNode(node.right)
                  return count

            return pathFromNode(root)
