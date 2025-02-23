#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 889

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

from typing import List, Optional

class Solution:
      def constructFromPrePost(self, preorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
            N = len(preorder)  # Number of nodes in the tree
            
            # Dictionary to store the index of each value in postorder for quick lookup
            post_val_to_idx = {}

            # Populate the index map for postorder values
            for i, n in enumerate(postorder):
                  post_val_to_idx[n] = i 

            # Recursive function to construct the tree
            def build(preStart, preEnd, postStart, postEnd):
                  if preStart > preEnd or postStart > postEnd:
                        return None  # Base case: invalid range

                  # Create the root node from preorder first element
                  root = TreeNode(preorder[preStart])

                  # If only one element left, return the root
                  if preStart != preEnd:
                        left_val = preorder[preStart + 1]  # Get left child value from preorder

                        mid = post_val_to_idx[left_val]  # Find index in postorder

                        left_size = mid - postStart + 1  # Calculate left subtree size

                        # Recursively build left and right subtrees
                        root.left = build(preStart + 1, preStart + left_size, postStart, mid)
                        root.right = build(preStart + left_size + 1, preEnd, mid + 1, postEnd - 1)

                  return root  # Return constructed root node

            return build(0, N - 1, 0, N - 1)  # Start building the tree
