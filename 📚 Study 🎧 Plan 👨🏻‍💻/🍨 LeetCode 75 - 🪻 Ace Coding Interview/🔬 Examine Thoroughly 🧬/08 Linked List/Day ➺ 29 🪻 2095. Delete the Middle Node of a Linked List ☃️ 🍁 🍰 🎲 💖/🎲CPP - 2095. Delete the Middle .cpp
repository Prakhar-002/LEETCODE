//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2095

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution { 
public:
      ListNode* deleteMiddle(ListNode* head) {
            // If the list has only one node, return null as deleting the middle means no nodes remain.
            if (head->next == nullptr) {
                  return nullptr;
            }

            // Initialize two pointers: `fast` moves two steps at a time, 
            ListNode* fast = head;
            // and `slow` moves one step.
            ListNode* slow = head;
            // `prev` is used to keep track of the node before `slow`.
            ListNode* prev = nullptr;

            // Traverse the list using `fast` and `slow`.
            // `fast` moves twice as fast as `slow`, so when `fast` reaches the end,
            // `slow` will be at the middle of the list.
            while (fast != nullptr && fast->next != nullptr) {
                  prev = slow;             // Keep track of the previous node before `slow`.
                  fast = fast->next->next; // Move `fast` two steps ahead.
                  slow = slow->next;       // Move `slow` one step ahead.
            }

            // At this point, `slow` points to the middle node.
            // `prev->next` is updated to skip the middle node (`slow`) and point to the node after it.
            prev->next = slow->next;

            // Return the modified head of the list.
            return head;
      }
};
