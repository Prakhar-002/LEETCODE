#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 21

# ? ⌚ Time complexity -> O(n)  👉 nodes of min(list1, list2)

# ? 🧺 Space complexity -> O(n + m) 👉 n = len(list1), m = Len(list2)

class Solution:
      def mergeTwoLists(self, list1: ListNode, list2: ListNode) -> ListNode:
            newNode = ListNode(0)
            head = newNode

            while list1 and list2:
                  if list1.val <= list2.val:
                        head.next = list1
                        list1 = list1.next
                  else:
                        head.next = list2
                        list2 = list2.next
                  head = head.next

            if list1:
                  head.next = list1
            if list2:
                  head.next = list2

            return newNode.next