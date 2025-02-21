#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1261

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(n)

#* DFS 

from typing import Optional

class FindElements:

      def __init__(self, root: Optional[TreeNode]):
            # Initialize a set to store all the recovered values
            self.seen = set()
            # Start the depth-first search (DFS) to reconstruct the tree
            self.dfs(root, 0)

      def find(self, target: int) -> bool:
            """
            Check if the target value exists in the recovered tree.
            Returns True if the target exists, otherwise False.
            """
            return target in self.seen

      def dfs(self, cur_node, cur_val):
            """
            Recovers the tree using DFS traversal.
            cur_node: Current node being processed
            cur_val: Corrected value of the current node
            """
            if not cur_node:
                  return  # Base case: if node is None, return

            # Store the recovered value in the set
            self.seen.add(cur_val)

            # Recursively process the left child with formula (2 * x + 1)
            self.dfs(cur_node.left, cur_val * 2 + 1)

            # Recursively process the right child with formula (2 * x + 2)
            self.dfs(cur_node.right, cur_val * 2 + 2)

#!------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(n)

#* BFS 

from typing import Optional
from collections import deque

class FindElements:
      def __init__(self, root: Optional[TreeNode]):
            """
            Constructor to recover the tree.
            Uses BFS to reconstruct the tree and store valid values.
            """
            self.seen = set()  # Set to store recovered values
            self.bfs(root)  # Start BFS traversal

      def find(self, target: int) -> bool:
            """
            Check if the target value exists in the recovered tree.
            Returns True if found, otherwise False.
            """
            return target in self.seen

      def bfs(self, root):
            """
            Recovers the tree using Breadth-First Search (BFS).
            root: Root node of the contaminated tree.
            """
            q = deque([root])  # Queue for BFS
            root.val = 0  # Root node is always set to 0

            while q:
                  cur_node = q.popleft()  # Get the front node
                  self.seen.add(cur_node.val)  # Store recovered value

                  # Process the left child if it exists
                  if cur_node.left:
                        cur_node.left.val = cur_node.val * 2 + 1  # Formula for left child
                        q.append(cur_node.left)  # Add to queue

                  # Process the right child if it exists
                  if cur_node.right:
                        cur_node.right.val = cur_node.val * 2 + 2  # Formula for right child
                        q.append(cur_node.right)  # Add to queue
