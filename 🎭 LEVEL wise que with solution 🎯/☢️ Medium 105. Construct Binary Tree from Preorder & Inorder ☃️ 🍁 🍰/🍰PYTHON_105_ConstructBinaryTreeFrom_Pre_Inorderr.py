class Solution:
      def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
            if not preorder or not inorder:
                  # If we encounter end of one of empty arr
                  # root.left = null root.right = null
                  return None 

            # Making root first
            # because preOrder[0] will be the root of our tree always
            root = TreeNode(preorder[0])
            # find the root value in inOrder array cause 
            # all left values will be left part of tree 
            # and right values will be right part of tree

            mid = inorder.index(preorder[0])

            #? Left and right part will be called for subpart of preOrder and inOrder array

            # Next part will be from (1 to (mid + 1)) including mid
            # For the inOrder array left part will be (0 to mid) excluding mid 
            root.left = self.buildTree(preorder[1 : mid + 1], inorder[ :mid])

            # For the right part of preOrder & inOrder array will br from (mid + 1 to end of array)
            root.right = self.buildTree(preorder[mid + 1:], inorder[mid + 1 :])

            # And finally return our root
            return root 