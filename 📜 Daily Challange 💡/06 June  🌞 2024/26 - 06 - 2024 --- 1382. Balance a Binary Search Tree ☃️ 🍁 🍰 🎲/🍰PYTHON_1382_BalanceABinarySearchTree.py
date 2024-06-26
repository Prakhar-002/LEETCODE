#! https://github.com/Prakhar-002/LEETCODE

#? Time complexity -> O(n) => n is number of nodes

#? Space complexity -> O(n) => n is number of nodes

class Solution:

      def inOrderTraversal(self, root, inOrder):
            if not root:
                  return

            # traverse left first
            self.inOrderTraversal(root.left, inOrder)
            # push the value in our array
            inOrder.append(root.val)
            # then traverse right 
            self.inOrderTraversal(root.right, inOrder)

      def buildBinarySearch(self, inOrder, st, end):
            # if start > end out of bound
            if st > end:
                  return 

            # find mid and make it our root
            mid = st + (end - st) // 2
            #  make a node with mid value of our array
            curNode = TreeNode(inOrder[mid])
            # call function for left part with st to mid - 1 and assign to left of our curNode
            curNode.left = self.buildBinarySearch(inOrder, st, mid - 1)
            # call function for right part with mid + 1 to end and assign to right of our curNode
            curNode.right = self.buildBinarySearch(inOrder, mid + 1, end)
            # return our curNode
            return curNode

      def balanceBST(self, root: TreeNode) -> TreeNode:
            # make a array list to store all the values from our tree
            inOrder = []
            # function that traverse InOrder 
            self.inOrderTraversal(root, inOrder)

            # return new binary tree we'll build from our array
            return self.buildBinarySearch(inOrder, 0, len(inOrder) - 1)