#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 872

#? ⌚ Time complexity ➺ O(n1 + n2) 👉🏻  n1, n2 = No. of nodes in roo1 and root2

#? 🧺 Space complexity ➺ O(h + l)  👉🏻  h = height of tree , l = No. of leaf nodes

class Solution:
      def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
            # Helper function to extract leaf values from a binary tree
            def get_leaf_values(root: Optional[TreeNode]) -> list:
                  stack = [root]  # Stack for iterative tree traversal
                  leafs = []      # List to store leaf node values

                  while stack:
                        node = stack.pop()  # Process the current node
                        if node:
                              # Add left and right children to the stack
                              stack.append(node.left)
                              stack.append(node.right)
                              # If the node is a leaf, add its value to the list
                              if not node.left and not node.right:
                                    leafs.append(node.val)
                  return leafs

            # Extract leaf values from both trees
            leafs1 = get_leaf_values(root1)
            leafs2 = get_leaf_values(root2)

            # Compare the leaf values of both trees
            return leafs1 == leafs2
