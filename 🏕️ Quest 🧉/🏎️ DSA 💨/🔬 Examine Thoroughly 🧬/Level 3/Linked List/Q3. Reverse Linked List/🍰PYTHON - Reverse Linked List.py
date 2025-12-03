#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 206

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def reverseList(self, head):
            # Initialize pointers for reversing the list
            cur = head  # Current node being processed
            prev = None  # Previous node (initially None for the new tail)
            next = None  # Temporary pointer to store the next node

            # Traverse the list until the current node is None
            while cur:
                  # Store the next node before changing the current node's `next` pointer
                  next = cur.next

                  # Reverse the `next` pointer of the current node
                  cur.next = prev

                  # Move the `prev` pointer one step forward to the current node
                  prev = cur

                  # Move the `cur` pointer one step forward to the stored `next` node
                  cur = next

            # Return the new head of the reversed list
            return prev