class Solution {
      public ListNode removeNodes(ListNode head) {
            ListNode prev = null, next;

            // Reverse the linkedList
            while (head != null) {
                  next = head.next;
                  head.next = prev;
                  prev = head;
                  head = next;
            }

            head = prev;
            prev = null;
            int max = head.val;

            while (head.next != null) {
                  if (head.next.val >= max) {
                        max = head.next.val;
                        next = head.next;
                        head.next = prev;
                        prev = head;
                        head = next;
                  } else {
                        head.next = head.next.next;
                  }
            }
            head.next = prev;

            return head;
      }
}