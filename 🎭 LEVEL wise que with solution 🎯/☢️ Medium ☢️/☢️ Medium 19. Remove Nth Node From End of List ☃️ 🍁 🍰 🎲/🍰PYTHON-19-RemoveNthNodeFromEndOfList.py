#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 19

#? ⌚ Time complexity -> O(n) 👉 Total nodes

#? 🧺 Space complexity -> O(1) 

class Solution:
      def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
            if head.next is None:
                  return None

            temp = head
            count = 0

            while temp is not None:
                  count += 1
                  temp = temp.next

            if count == n:
                  head = head.next
                  return head

            temp = head

            for i in range(1, count - n):
                  temp = temp.next

            temp.next = temp.next.next

            return head