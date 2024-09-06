#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 203

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
            # A dummy node `dummy` is created with the value 0 and pointing to `head`
            dummy = ListNode(0, head)
            # variable `dummyHead` is used to traverse the linked list
            dummyHead = dummy
            # The loop continues as long as the next node after `dummyHead` is not `None`
            while dummyHead.next:
                  # whether the value of the next node (`dummyHead.next.val`) is same as given `val`
                  if dummyHead.next.val == val:
                        # the next pointer of `dummyHead` is updated to point to the node after `dummyHead.next`,
                        # effectively skipping over the node to be removed
                        dummyHead.next = dummyHead.next.next

                  else:  # If the value is not given `val`
                        # The `dummyHead` pointer is moved to the next node in the list
                        dummyHead = dummyHead.next

            return dummy.next


