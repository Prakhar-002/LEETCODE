#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1110

#? ⌚ Time complexity -> O(n) 👉 Total Nodes 

#? 🧺 Space complexity -> O(n) 👉 Using Node's HashSet 

class Solution:
      def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
            # Making HashSet of to_delete 
            to_delete = set(to_delete)
            # making a set of all value of root
            forest = set([root])

            def dltNodes(node):
                  if not node:
                        return None

                  # variable for rather we dlt node or not
                  curNode = node 

                  # if our curNode's value in to_delete then dlt it
                  if curNode.val in to_delete:
                        # dlt our curNode 
                        curNode = None
                        # remove it from our forest 
                        forest.discard(node)
                        # add It's left child if exist
                        if node.left : 
                              forest.add(node.left)
                        # add It's right child if exist
                        if node.right : 
                              forest.add(node.right)

                  # call for the left tree weather we dlt curNode or not
                  node.left = dltNodes(node.left)
                  # call for the right tree
                  node.right = dltNodes(node.right)
                  # return curNode deleted or not deleted
                  return curNode

            # calling our function
            dltNodes(root)

            return list(forest)