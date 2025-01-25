#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1161

#? ⌚ Time complexity ➺ O(n)   👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(w)  👉🏻  m = max width 

from collections import deque

class Solution:
      def maxLevelSum(self, root: Optional[TreeNode]) -> int:
            # Variables to track the minimum level and the maximum sum
            minLevel = 0
            maxSum = float("-inf")
            curLevel = 0

            # Queue for level-order traversal (BFS)
            q = deque([root])

            while q:
                  curSum = 0  # Sum of the current level

                  for i in range(len(q)):
                        node = q.popleft()
                        curSum += node.val  # Add the node's value to the current level's sum

                        # Add left and right children to the queue
                        if node.left:
                              q.append(node.left)
                        if node.right:
                              q.append(node.right)

                  # Update the level counter
                  curLevel += 1

                  # Check if the current level has a larger sum
                  if maxSum < curSum:
                        maxSum = curSum
                        minLevel = curLevel

            return minLevel
