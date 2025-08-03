//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 143

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public void reorderList(ListNode head) {
            // Step 1: Find the middle using slow and fast pointers
            ListNode slow = head; // Slow moves 1 step
            ListNode fast = head; // Fast moves 2 steps

            while (fast != null && fast.next != null) {
                  slow = slow.next;
                  fast = fast.next.next;
            }

            // Step 2: Reverse second half starting from slow.next
            ListNode second = slow.next; // Start of second half
            ListNode prev = null; // Previous pointer for reversal
            slow.next = null; // Cut the list into two halves

            while (second != null) {
                  ListNode temp = second.next; // Store next node
                  second.next = prev; // Reverse link
                  prev = second; // Move prev ahead
                  second = temp; // Move second forward
            }

            // Step 3: Merge two halves: first and reversed second
            ListNode first = head; // Pointer to first half
            second = prev; // Pointer to reversed half

            while (second != null) {
                  ListNode t1 = first.next; // Store next of first
                  ListNode t2 = second.next; // Store next of second

                  first.next = second; // Link first to second
                  second.next = t1; // Link second to t1
                  first = t1; // Move first forward
                  second = t2; // Move second forward
            }
      }
}
