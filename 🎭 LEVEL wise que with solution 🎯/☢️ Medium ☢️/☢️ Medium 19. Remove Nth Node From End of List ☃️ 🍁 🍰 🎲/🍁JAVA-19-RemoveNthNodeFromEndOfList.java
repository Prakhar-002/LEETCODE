//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 19

//? ⌚ Time complexity -> O(n) 👉 Total nodes

//? 🧺 Space complexity -> O(1) 

class Solution {
      public ListNode removeNthFromEnd(ListNode head, int n) {
            if (head.next == null) {
                  return null;
            }
            ListNode temp = head;
            int count = 0;
            while (temp != null) {
                  count++;
                  temp = temp.next;
            }

            if (count == n) {
                  head = head.next;
                  return head;
            }

            temp = head;

            for (int i = 1; i < count - n; i++) {
                  temp = temp.next;
            }

            temp.next = temp.next.next;

            return head;
      }
}