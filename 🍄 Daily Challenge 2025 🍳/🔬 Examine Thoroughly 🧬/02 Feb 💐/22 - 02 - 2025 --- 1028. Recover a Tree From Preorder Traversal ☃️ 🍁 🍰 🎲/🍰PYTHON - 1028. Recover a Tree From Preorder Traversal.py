#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1028

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import Optional

class Solution:
      def recoverFromPreorder(self, traversal: str) -> Optional[TreeNode]:
            dashes = 0  # Depth level of the current node
            stack = []  # Stack to maintain nodes in a depth-based order
            i = 0  # Pointer to traverse the string

            while i < len(traversal):
                  if traversal[i] == '-':  
                        # Counting dashes to determine depth
                        dashes += 1
                        i += 1
                  else:
                        # Extract the numeric value of the node
                        j = i
                        while j < len(traversal) and traversal[j] != '-':
                              j += 1
                              
                        val = int(traversal[i:j])  # Convert substring to integer
                        node = TreeNode(val)  # Create new TreeNode

                        # Pop stack to correct depth level
                        while len(stack) > dashes:
                              stack.pop()

                        # Attach node to its parent based on availability
                        if stack and not stack[-1].left:
                              stack[-1].left = node
                        elif stack:
                              stack[-1].right = node 

                        # Push current node to stack
                        stack.append(node)
                        i = j  # Move pointer forward
                        dashes = 0  # Reset depth counter

            return stack[0]  # Root node is the first element in the stack
