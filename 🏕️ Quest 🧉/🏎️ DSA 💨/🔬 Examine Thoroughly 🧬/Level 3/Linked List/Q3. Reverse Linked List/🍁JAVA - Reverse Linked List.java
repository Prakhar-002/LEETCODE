//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 206

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public ListNode reverseList(ListNode head) {
            // Initialize pointers for reversing the list
            ListNode cur = head; // Current node being processed
            ListNode prev = null; // Previous node (initially null for the new tail)
            ListNode next = null; // Temporary pointer to store the next node

            // Traverse the list until the current node is null
            while (cur != null) {
                  // Store the next node before changing the current node's `next` pointer
                  next = cur.next;

                  // Reverse the `next` pointer of the current node
                  cur.next = prev;

                  // Move the `prev` pointer one step forward to the current node
                  prev = cur;

                  // Move the `cur` pointer one step forward to the stored `next` node
                  cur = next;
            }

            // After the loop, `prev` will be pointing to the new head of the reversed list
            head = prev;

            // Return the new head of the reversed list
            return head;
      }
}