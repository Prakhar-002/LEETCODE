#! https://github.com/Prakhar-002/LEETCODE

class Solution:
      def buildTree(self, inOrder: List[int], postOrder: List[int]) -> Optional[TreeNode]:
            # If we got out inOrder empty then we'll return false 
            if not inOrder:
                  return None 

            # Making the last of postOrder to our main root
            root = TreeNode(postOrder.pop())

            # Finding position of root.val in our in inOrder array
            idx = inOrder.index(root.val)
            # Right of our root's value's index will be the right of of our tree
            root.right = self.buildTree(inOrder[idx + 1:], postOrder)
            # left of our root's value's index will be the left of of our tree
            root.left = self.buildTree(inOrder[ : idx], postOrder)
            # return tree
            return root