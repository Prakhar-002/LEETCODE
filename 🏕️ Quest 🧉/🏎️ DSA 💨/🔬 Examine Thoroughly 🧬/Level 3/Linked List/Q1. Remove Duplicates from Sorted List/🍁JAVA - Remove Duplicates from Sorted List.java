//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public ListNode deleteDuplicates(ListNode head) {
            // If the list is empty, nothing to remove
            if (head == null)
                  return head;

            ListNode current = head; // Pointer to traverse the list

            // Traverse while there is a next node
            while (current.next != null) {
                  // If current and next node have same value, skip next
                  if (current.val == current.next.val) {
                        current.next = current.next.next; // Bypass duplicate
                  } else {
                        current = current.next; // Move to next distinct node
                  }
            }

            // Return modified list head
            return head;
      }
}
