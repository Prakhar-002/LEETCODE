#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 590

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
      def postorder(self, root: 'Node') -> List[int]:
            # to store the values of the nodes as they are visited in postorder sequence
            postOrderList = []

            def postOrderTraversal(root):
                  #  if the `root` is `None`
                  if not root:
                        # returns immediately
                        return 

                  # iterates over each child of the current node
                  for children in root.children:
                        # calling `postOrderTraversal` for each child
                        # This ensures that all children of the current node are processed 
                        # before the current node itself
                        postOrderTraversal(children)

                  # value of the node (`root.val`) is appended to `postOrderList`
                  postOrderList.append(root.val)

            # calls the `postOrderTraversal`
            postOrderTraversal(root)

            # `return postOrderList`: After the traversal is complete
            return postOrderList