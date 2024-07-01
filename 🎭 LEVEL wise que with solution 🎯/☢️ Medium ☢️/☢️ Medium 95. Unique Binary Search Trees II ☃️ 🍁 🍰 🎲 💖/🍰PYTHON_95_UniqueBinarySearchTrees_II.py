
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 95

#* Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
      def generateTrees(self, n: int) -> List[Optional[TreeNode]]:

            def generate(left, right):
                  # base case for storing null
                  if left > right :
                        return [None]

                  res = []

                  # traverse for every value in given range
                  for val in range(left, right + 1):
                        # for every leftTree 
                        for leftTree in generate(left, val - 1):
                              # for every rightTree
                              for rightTree in generate(val + 1, right):
                                    # we generate a root of val, leftVal, rightVal
                                    root = TreeNode(val, leftTree, rightTree)
                                    # and append to the root in our array
                                    res.append(root)
                  return res

            return generate(1, n)
