#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2181

#? ⌚ Time complexity -> O(n) 👉 Total nodes 

#? 🧺 Space complexity -> O(1) 

class Solution:
      def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
            # for new modification
            modify = head
            # for traversing whole linked list
            cur = head.next

            Sum = 0

            # traverse whole linkedList
            while cur is not None:
                  # if we hit 0 then we ...
                  if cur.val == 0:
                        # modify the value from 0 to curSum
                        modify.val = Sum
                        # for calculating next window sum
                        Sum = 0
                        # if it's last 0 then ...
                        if cur.next is None:
                              # end new list here
                              modify.next = None
                              break
                        # else linked current 0th node with modify
                        modify.next = cur
                        # traverse next
                        modify = modify.next
                        # for next window
                        cur = cur.next
                        continue

                  Sum += cur.val
                  cur = cur.next

            return head