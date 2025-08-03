//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 206

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>

struct ListNode {
      int val;
      struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
      // Initialize pointers for reversing the list
      struct ListNode* cur = head;  // Current node being processed
      struct ListNode* prev = NULL; // Previous node (initially NULL for the new tail)
      struct ListNode* next = NULL; // Temporary pointer to store the next node

      // Traverse the list until the current node is NULL
      while (cur != NULL) {
            // Store the next node before changing the current node's `next` pointer
            next = cur->next;

            // Reverse the `next` pointer of the current node
            cur->next = prev;

            // Move the `prev` pointer one step forward to the current node
            prev = cur;

            // Move the `cur` pointer one step forward to the stored `next` node
            cur = next;
      }

      // Return the new head of the reversed list
      return prev;
}
