#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 589

#? ⌚ Time complexity ➺ O(n)  👉🏻 n = number of nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻 H = height of tree

"""
#* Definition for a Node. 

class Node:
      def __init__(self, val=None, children=None):
            self.val = val
            self.children = children
"""

class Solution:
      def preorder(self, root: 'Node') -> List[int]:
            # to store the values of the nodes as they are visited in preorder sequence
            preOrderList = []

            def preOrderTraversal(root):
                  #  if the `root` is `None`
                  if not root:
                        # returns immediately
                        return 

                  # value of the node (`root.val`) is appended to `preOrderList`
                  preOrderList.append(root.val)

                  # iterates over each child of the current node
                  for children in root.children:
                        # calling `preOrderTraversal` for each child
                        # This ensures that all children of the current node are processed 
                        # after the current node itself
                        preOrderTraversal(children)

            # calls the `preOrderTraversal`
            preOrderTraversal(root)

            # `return preOrderList`: After the traversal is complete
            return preOrderList