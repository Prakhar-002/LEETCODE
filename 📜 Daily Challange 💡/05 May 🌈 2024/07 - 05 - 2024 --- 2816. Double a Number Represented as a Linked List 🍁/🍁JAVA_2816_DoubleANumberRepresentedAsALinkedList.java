//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2816 

class Solution {
      public ListNode reverse(ListNode node) {
            ListNode prev = null;
            ListNode cur = node;
            ListNode next = null;
            while (cur != null) {
                  next = cur.next;
                  cur.next = prev;
                  prev = cur;
                  cur = next;
            }
            node = prev;
            return node;
      }

      public ListNode doubleIt(ListNode head) {

            head = reverse(head);

            ListNode headPtr = head;
            ListNode ptr = null;

            int sum = 0;
            int carry = 0;

            while (head != null) {
                  sum = head.val * 2 + carry;

                  head.val = sum % 10;
                  carry = sum / 10 != 0 ? sum / 10 : 0;

                  ptr = head;
                  head = head.next;
            }

            if (carry != 0) {
                  ptr.next = new ListNode(carry);
            }

            headPtr = reverse(headPtr);

            return headPtr;

      }
}