//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 143

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      void reorderList(ListNode* head) {
            // Step 1: Find middle of list using slow and fast pointers
            ListNode* slow = head;         // Moves 1 step
            ListNode* fast = head;         // Moves 2 steps

            while (fast && fast->next) {
                  slow = slow->next;
                  fast = fast->next->next;
            }

            // Step 2: Reverse second half starting from slow->next
            ListNode* second = slow->next;    // Start of second half
            ListNode* prev = nullptr;         // For reversal
            slow->next = nullptr;             // Cut the first half

            while (second) {
                  ListNode* temp = second->next; // Save next
                  second->next = prev;           // Reverse link
                  prev = second;                 // Move prev
                  second = temp;                 // Move second
            }

            // Step 3: Merge two halves
            ListNode* first = head;        // First half
            second = prev;                 // Reversed second half

            while (second) {
                  ListNode* t1 = first->next;   // Save next of first
                  ListNode* t2 = second->next;  // Save next of second

                  first->next = second;         // Link first to second
                  second->next = t1;            // Link second to first's next
                  first = t1;                   // Move first forward
                  second = t2;                  // Move second forward
            }
      }
};
