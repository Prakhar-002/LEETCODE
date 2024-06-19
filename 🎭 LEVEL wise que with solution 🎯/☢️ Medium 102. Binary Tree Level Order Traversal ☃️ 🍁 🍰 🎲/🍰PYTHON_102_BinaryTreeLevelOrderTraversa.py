class Solution:
      def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
            # making a 2d list
            wrap_list = []
            #  queue for level order
            q = []

            # if we got null we'll return our wrapList
            if root == None:
                  return wrap_list

            # adding root to our queue first
            q.append(root)

            # apply loop unTill it get empty
            while len(q) != 0:
                  level_no = len(q)
                  sub_list = []

                  while(level_no > 0):
                        # Extracting peek node
                        curNode = q.pop(0)

                        # insert left node if exist
                        if curNode.left != None:
                              q.append(curNode.left)

                        # insert right node if exist
                        if curNode.right != None:
                              q.append(curNode.right)

                        # adding val in our subList
                        sub_list.append(curNode.val)
                        level_no -= 1

                  # adding subList to our wrapList
                  wrap_list.append(sub_list)

            return wrap_list