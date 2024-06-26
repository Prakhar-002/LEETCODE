//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 237 

class Solution {
      public void deleteNode(ListNode node) {
            ListNode ptr = node;
            ListNode prev = null;

            while (ptr.next != null) {
                  int temp = ptr.val;
                  ptr.val = ptr.next.val;
                  ptr.next.val = temp;

                  prev = ptr;
                  ptr = ptr.next;
            }

            prev.next = null;
      }
}