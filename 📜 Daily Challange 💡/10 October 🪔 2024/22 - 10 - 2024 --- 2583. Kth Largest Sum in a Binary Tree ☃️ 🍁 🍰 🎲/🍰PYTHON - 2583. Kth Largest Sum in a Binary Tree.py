#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2583

#? ⌚ Time complexity ➺ O(n + h Log k) 👉🏻  n = Total Nodes

#? 🧺 Space complexity ➺ O(k) h = Height of tree

from collections import deque
import heapq

class Solution:
      def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
            # Initialize a queue with the root node to perform level order traversal
            q = deque([root])
            # Initialize an empty list to use as a min-heap
            min_heap = [] 

            # Loop to process each level in the binary tree
            while q:
                  # Initialize the sum of the current level's nodes
                  level_sum = 0

                  # Loop through all nodes in the current level
                  for _ in range(len(q)):
                        # Remove the node from the front of the queue
                        node = q.popleft()
                        # Add the node's value to the current level sum
                        level_sum += node.val

                        # Add the left child to the queue if it exists
                        if node.left:
                              q.append(node.left)

                        # Add the right child to the queue if it exists
                        if node.right:
                              q.append(node.right)

                  # Add the current level sum to the min-heap
                  heapq.heappush(min_heap, level_sum)

                  # If the heap size exceeds k, remove the smallest element
                  if len(min_heap) > k:
                        heapq.heappop(min_heap)

            # If there are fewer than k levels, return -1; otherwise, return the kth largest level sum
            return -1 if len(min_heap) < k else min_heap[0]
