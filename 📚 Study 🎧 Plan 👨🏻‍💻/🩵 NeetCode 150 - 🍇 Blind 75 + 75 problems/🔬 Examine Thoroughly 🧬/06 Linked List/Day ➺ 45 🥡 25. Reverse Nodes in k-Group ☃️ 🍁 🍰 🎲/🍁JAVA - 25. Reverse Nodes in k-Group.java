//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 25

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public ListNode reverseKGroup(ListNode head, int k) {
            // Create a dummy node pointing to the head of the list
            ListNode dummy = new ListNode(0);
            dummy.next = head;

            // This pointer will track the node before the current group
            ListNode groupPrev = dummy;

            while (true) {
                  // Get the kth node from groupPrev
                  ListNode kth = getKth(groupPrev, k);

                  // If kth is null, it means fewer than k nodes left — break
                  if (kth == null) break;

                  // Store the next node after the kth (start of next group)
                  ListNode groupNext = kth.next;

                  // Start reversing the group
                  ListNode prev = groupNext;
                  ListNode cur = groupPrev.next;

                  // Reverse all nodes in the current group
                  while (cur != groupNext) {
                        ListNode tmp = cur.next;  // Save next node
                        cur.next = prev;          // Reverse current's pointer
                        prev = cur;               // Move prev one step
                        cur = tmp;                // Move cur one step
                  }

                  // Reconnect reversed group with previous part
                  ListNode temp = groupPrev.next;  // Store start of this group (will become the tail)
                  groupPrev.next = kth;            // Point to the new head (kth)
                  groupPrev = temp;                // Move groupPrev to the tail of the reversed group
            }

            // Return the new head
            return dummy.next;
      }

      // Helper method to find the kth node from the given node
      private ListNode getKth(ListNode cur, int k) {
            while (cur != null && k > 0) {
                  cur = cur.next;  // Move to next node
                  k--;             // Decrease count
            }
            return cur;  // Returns kth node or null
      }
}
