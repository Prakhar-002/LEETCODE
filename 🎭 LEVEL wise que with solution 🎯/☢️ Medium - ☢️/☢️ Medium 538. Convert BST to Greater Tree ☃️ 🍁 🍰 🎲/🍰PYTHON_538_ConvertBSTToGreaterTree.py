# //! https://github.com/Prakhar-002/LEETCODE

#? Time complexity -> O(n)

#? Space complexity -> O(1)

class Solution:
      def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            # Initiate curSum that store sum of all nodes
            curSum = 0

            # making a function that update all the value of our tree
            def dfs(root):
                  # if we get null well return from there
                  if not root:
                        return

                  # do not use local curSum and not initialize with 0 all time
                  nonlocal curSum

                  #? Step 1 right most
                  # go to right most child of node cause that will content highest value in our tree
                  # cause that is a binary search tree property
                  dfs(root.right)

                  #? Step 2 update
                  # add value of curNode in our sum 
                  # cause we have to update the val of tree with it's value + sum 
                  curSum += root.val
                  # assign curSum to root.val   
                  root.val = curSum

                  #? Step 3 Left most
                  dfs(root.left)

            # Call the function to update values of tree
            dfs(root)
            # Return new tree
            return root