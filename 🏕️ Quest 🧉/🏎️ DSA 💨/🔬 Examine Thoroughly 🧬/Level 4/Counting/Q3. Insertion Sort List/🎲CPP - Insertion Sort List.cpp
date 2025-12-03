//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.2 Q3

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      ListNode* insertionSortList(ListNode* head) {
            // Handle empty list or single node (already sorted)
            if (!head || !head->next) {
                  return head;
            }

            // Dummy node with minimal value (-INF equivalent)
            ListNode* dummy = new ListNode(INT_MIN);
            dummy->next = head;

            // 'cur' tracks end of sorted portion
            ListNode* cur = head;

            // Process while nodes remain after cur
            while (cur && cur->next) {
                  // Next node is in correct position, advance
                  if (cur->next->val >= cur->val) {
                        cur = cur->next;
                  } else {
                        // Remove out-of-order node
                        ListNode* tmp = cur->next;
                        cur->next = tmp->next;

                        // Find insertion point from dummy
                        ListNode* pre = dummy;
                        while (pre->next->val < tmp->val) {
                              pre = pre->next;
                        }

                        // Insert tmp at correct position
                        tmp->next = pre->next;
                        pre->next = tmp;
                  }
            }

            return dummy->next;
      }
};
