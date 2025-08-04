
#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2 

class Solution:
      def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
            temp1 = l1
            temp2 = l2
            sum_val = 0
            carry = 0
            dummy = ListNode(0)
            head = dummy

            while temp1 and temp2:
                  sum_val = temp1.val + temp2.val + carry
                  head.next = ListNode(sum_val % 10)
                  carry = sum_val // 10 if sum_val > 9 else 0
                  temp1 = temp1.next
                  temp2 = temp2.next
                  head = head.next

            while temp1:
                  sum_val = temp1.val + carry
                  head.next = ListNode(sum_val % 10)
                  carry = sum_val // 10 if sum_val > 9 else 0
                  temp1 = temp1.next
                  head = head.next

            while temp2:
                  sum_val = temp2.val + carry
                  head.next = ListNode(sum_val % 10)
                  carry = sum_val // 10 if sum_val > 9 else 0
                  temp2 = temp2.next
                  head = head.next

            if carry != 0:
                  head.next = ListNode(carry)

            return dummy.next