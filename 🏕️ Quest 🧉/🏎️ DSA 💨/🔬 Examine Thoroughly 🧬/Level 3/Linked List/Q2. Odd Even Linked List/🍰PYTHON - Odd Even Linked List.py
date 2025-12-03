#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 328

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def oddEvenList(self, head):
            if not head or not head.next:
                  # If the list is empty or has only one node, return as is
                  return head

            # Initialize pointers for odd and even lists
            odd = head
            even = head.next
            evenHead = even  # Store the head of the even list

            # Traverse the list, separating odd and even nodes
            while even and even.next:
                  odd.next = even.next  # Connect odd nodes
                  odd = odd.next  # Move odd pointer
                  even.next = odd.next  # Connect even nodes
                  even = even.next  # Move even pointer

            # Attach the even list to the end of the odd list
            odd.next = evenHead

            return head  # Return the modified head of the list