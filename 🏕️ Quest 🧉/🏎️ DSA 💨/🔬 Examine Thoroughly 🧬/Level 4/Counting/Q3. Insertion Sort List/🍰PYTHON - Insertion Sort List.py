#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L4.2 Q3

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution(object):
      def insertionSortList(self, head):
            # If the list is empty or has only one node, it is already sorted
            if not head or not head.next:
                  return head

            # Dummy node with -inf value to simplify insertion at the head
            dummy = ListNode(-float('inf'))
            dummy.next = head

            # 'cur' is the last node of the current sorted portion
            cur = head

            # Traverse the list while there is a node after 'cur'
            while cur and cur.next:
                  # If the next node is already in correct order (>= current),
                  # just move 'cur' forward
                  if cur.next.val >= cur.val:
                        cur = cur.next
                  else:
                        # Node cur.next is out of order and needs to be reinserted
                        tmp = cur.next                 # Node to be repositioned
                        cur.next = tmp.next            # Remove tmp from its current place

                        # Start from dummy to find correct insertion position for tmp
                        pre = dummy
                        # Move 'pre' forward until the next value is >= tmp.val
                        while pre.next.val < tmp.val:
                              pre = pre.next

                        # Insert tmp between pre and pre.next
                        tmp.next = pre.next
                        pre.next = tmp

            # The sorted list starts after dummy
            return dummy.next
