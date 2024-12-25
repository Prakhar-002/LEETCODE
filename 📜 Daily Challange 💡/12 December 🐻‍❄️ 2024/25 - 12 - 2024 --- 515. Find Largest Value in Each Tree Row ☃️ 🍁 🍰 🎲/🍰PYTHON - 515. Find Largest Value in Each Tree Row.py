#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 515

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(w)  ->   w <= n

from collections import deque

class Solution:
      def largestValues(self, root: Optional[TreeNode]) -> List[int]:
            # If the tree is empty, return an empty list
            if not root:
                  return []

            # Initialize a deque (double-ended queue) with the root node
            q = deque([root])

            # Initialize the result list to store the largest values in each row
            levelMaxes = []

            # Perform level-order traversal
            while q:
                  # Initialize the maximum value for the current level
                  curMax = float("-inf")

                  # Traverse all nodes in the current level
                  for _ in range(len(q)):
                        # Pop the node from the front of the deque
                        node = q.popleft()

                        # Update the maximum value for the current level
                        curMax = max(curMax, node.val)

                        # Add the left child to the deque if it exists
                        if node.left:
                              q.append(node.left)

                        # Add the right child to the deque if it exists
                        if node.right:
                              q.append(node.right)

                  # Append the largest value of the current level to the result list
                  levelMaxes.append(curMax)

            # Return the result list containing the largest values in each row
            return levelMaxes
