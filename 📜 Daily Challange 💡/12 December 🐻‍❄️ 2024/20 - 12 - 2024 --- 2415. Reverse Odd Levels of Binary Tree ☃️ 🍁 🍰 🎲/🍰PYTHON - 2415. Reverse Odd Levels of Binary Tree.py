#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2415

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of node

#? 🧺 Space complexity ➺ O(n)

from collections import deque

class Solution:
      def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            # Initialize a deque with the root node for level order traversal
            q = deque([root])

            # Flag to track whether the current level is odd (False for even, True for odd)
            level = False

            while q:
                  # If the current level is odd, reverse the node values at this level
                  if level:
                        l, r = 0, len(q) - 1
                        while l < r:
                              # Swap the values of nodes at positions l and r
                              q[l].val, q[r].val = q[r].val, q[l].val
                              l += 1
                              r -= 1

                  # Traverse the current level and add child nodes to the deque
                  for _ in range(len(q)):
                        node = q.popleft()  # Get the next node in the level
                        if node.left:
                              q.append(node.left)  # Add the left child to the deque
                        if node.right:
                              q.append(node.right)  # Add the right child to the deque

                  # Toggle the level flag to switch between even and odd levels
                  level = not level

            # Return the modified root node
            return root
