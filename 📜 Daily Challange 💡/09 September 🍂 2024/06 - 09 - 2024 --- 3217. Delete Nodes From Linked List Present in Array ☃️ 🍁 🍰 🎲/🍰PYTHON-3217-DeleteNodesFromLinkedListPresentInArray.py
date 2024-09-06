#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3217

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums),  m = No. of nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
            # `nums` is converted into a set, done for efficient lookup
            nums = set(nums)
            # A dummy node `dummy` is created with the value 0 and pointing to `head`
            dummy = ListNode(0, head)
            # variable `dummyHead` is used to traverse the linked list
            dummyHead = dummy

            # The loop continues as long as the next node after `dummyHead` is not `None`
            while dummyHead.next:
                  # whether the value of the next node (`dummyHead.next.val`) is in the `nums` set
                  if dummyHead.next.val in nums:
                        # If the value is in the set, it implies that the current node should be removed
                        # the next pointer of `dummyHead` is updated to point to the node after `dummyHead.next`, 
                        # effectively skipping over the node to be removed
                        dummyHead.next = dummyHead.next.next

                  else: # If the value is not in the set
                        # The `dummyHead` pointer is moved to the next node in the list
                        dummyHead = dummyHead.next

            # returns the `next` node of the dummy
            return dummy.next
