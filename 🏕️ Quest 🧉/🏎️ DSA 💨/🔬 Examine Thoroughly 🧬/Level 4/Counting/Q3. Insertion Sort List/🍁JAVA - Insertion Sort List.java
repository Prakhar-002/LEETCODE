//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.2 Q3

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public ListNode insertionSortList(ListNode head) {
            // If the list is empty or has only one node, it is already sorted
            if (head == null || head.next == null) {
                  return head;
            }

            // Dummy node with very small value to simplify insertion at the head
            ListNode dummy = new ListNode(Integer.MIN_VALUE);
            dummy.next = head;

            // 'cur' points to the last node of the current sorted portion
            ListNode cur = head;

            // Traverse while there is a node after 'cur'
            while (cur != null && cur.next != null) {
                  // If next node is already in correct order, move forward
                  if (cur.next.val >= cur.val) {
                        cur = cur.next;
                  } else {
                        // Next node is out of order, needs reinsertion
                        ListNode tmp = cur.next; // Node to reposition
                        cur.next = tmp.next; // Remove tmp from current position

                        // Find correct insertion position starting from dummy
                        ListNode pre = dummy;
                        while (pre.next.val < tmp.val) {
                              pre = pre.next;
                        }

                        // Insert tmp between pre and pre.next
                        tmp.next = pre.next;
                        pre.next = tmp;
                  }
            }

            // Sorted list starts after dummy node
            return dummy.next;
      }
}
