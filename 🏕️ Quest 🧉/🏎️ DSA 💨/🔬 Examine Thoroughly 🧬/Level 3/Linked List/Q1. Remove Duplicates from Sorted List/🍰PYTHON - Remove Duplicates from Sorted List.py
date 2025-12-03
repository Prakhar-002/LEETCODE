#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L3.1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = No. of Nodes

#  Space complexity -> O(1) 

class Solution:
      def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
            # If list is empty, nothing to do
            if not head:
                  return head

            current = head  # Pointer to traverse the list

            # While there is a next node to compare with
            while current.next:
                  # If current and next have same value, skip the next node
                  if current.val == current.next.val:
                        current.next = current.next.next
                  else:
                        # Move to next node if values differ
                        current = current.next

            # Return head of modified list
            return head
