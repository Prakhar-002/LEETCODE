//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 25

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      ListNode* reverseKGroup(ListNode* head, int k) {
            // Create dummy node to simplify edge cases
            ListNode* dummy = new ListNode(0);
            dummy->next = head;

            // groupPrev points to the node before the current group
            ListNode* groupPrev = dummy;

            while (true) {
                  // Get kth node from groupPrev
                  ListNode* kth = getKth(groupPrev, k);

                  // If we can't get k nodes, stop the process
                  if (!kth) break;

                  // Save the next node after kth
                  ListNode* groupNext = kth->next;

                  // Start reversing from groupPrev->next to kth
                  ListNode* prev = groupNext;
                  ListNode* cur = groupPrev->next;

                  // Reverse current group
                  while (cur != groupNext) {
                        ListNode* tmp = cur->next;  // Save next node
                        cur->next = prev;           // Reverse pointer
                        prev = cur;                 // Move prev
                        cur = tmp;                  // Move cur
                  }

                  // Reconnect with the reversed portion
                  ListNode* temp = groupPrev->next; // Tail of reversed group
                  groupPrev->next = kth;            // Point to new head
                  groupPrev = temp;                 // Move groupPrev to new tail
            }

            // Return new head
            return dummy->next;
      }

      // Helper to find kth node from current
      ListNode* getKth(ListNode* cur, int k) {
            while (cur && k > 0) {
                  cur = cur->next;
                  k--;
            }
            return cur;  // Return kth node or nullptr
      }
};
