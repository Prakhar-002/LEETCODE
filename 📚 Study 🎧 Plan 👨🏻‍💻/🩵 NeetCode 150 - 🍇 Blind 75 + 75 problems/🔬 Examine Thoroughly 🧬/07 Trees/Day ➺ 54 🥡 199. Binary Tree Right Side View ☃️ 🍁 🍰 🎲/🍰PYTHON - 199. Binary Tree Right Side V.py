#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 199

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(w)   ->  m = max width 

from collections import deque

class Solution:
      def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
            # List to store the right-side view
            rightSideArr = []

            # Queue for level-order traversal (BFS)
            q = deque([root])

            # Perform BFS
            while q:
                  # Variable to track the rightmost node at the current level
                  rightSide = None 

                  # Iterate over all nodes at the current level
                  for i in range(len(q)):
                        node = q.popleft()
                        if node:
                              # Update the rightmost node
                              rightSide = node
                              # Add left and right children to the queue
                              q.append(node.left)
                              q.append(node.right)

                  # Append the rightmost node's value if it exists
                  if rightSide:
                        rightSideArr.append(rightSide.val) 

            # Return the right-side view
            return rightSideArr
