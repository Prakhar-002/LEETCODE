#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 25

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
            # Create a dummy node before the head to simplify edge cases
            dummy = ListNode(0, head)

            # This pointer will always point to the node before the current group
            groupPrev = dummy

            while True:
                  # Get the kth node from the current group's previous node
                  kth = self.getKth(groupPrev, k)

                  # If we can't find k nodes, then we're done
                  if not kth:
                        break

                  # Save the node that comes after the current group
                  groupNext = kth.next

                  # Start reversing nodes from groupPrev.next up to kth
                  prev = kth.next
                  cur = groupPrev.next

                  # Reverse the nodes in the current group
                  while cur != groupNext:
                        tmp = cur.next        # Temporarily store next node
                        cur.next = prev       # Reverse the pointer
                        prev = cur            # Move prev forward
                        cur = tmp             # Move cur forward

                  # After reversing, reconnect the previous group with the current reversed group
                  temp = groupPrev.next      # This will become the tail of the reversed group
                  groupPrev.next = kth       # Point to the new head of the group
                  groupPrev = temp           # Move groupPrev to the end of the reversed group

            # Return the new head of the list
            return dummy.next

      # Helper function to get the kth node from the current node
      def getKth(self, cur, k):
            # Move k steps forward or until the list ends
            while cur and k > 0:
                  cur = cur.next
                  k -= 1

            # Return the kth node or None if not enough nodes
            return cur
