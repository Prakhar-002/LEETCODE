
#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2196

#? ⌚ Time complexity -> O(n) 👉 descriptions length 

#? 🧺 Space complexity -> O(n) 👉 using nodes hashMap and Children HashSet

class Solution:
      def createBinaryTree(self, description):
            treeNodes = {}
            children = set()
            root = None

            for parent, child, isLeft in description:
                  # add every child to our set
                  children.add(child)

                  # if parent is not yet in our hashmap create it
                  if parent not in treeNodes:
                        treeNodes[parent] = TreeNode(parent)

                  # if child is not yet in our hashmap create it
                  if child not in treeNodes :
                        treeNodes[child] = TreeNode(child)

                  # link our left child
                  if isLeft :
                        treeNodes[parent].left = treeNodes[child]

                  # link our right child
                  else :
                        treeNodes[parent].right = treeNodes[child]

            for p, c, l in description:
                  # check our children set our root node would not we a child 
                  if p not in children:
                        root = treeNodes[p]
                        break

            return root
