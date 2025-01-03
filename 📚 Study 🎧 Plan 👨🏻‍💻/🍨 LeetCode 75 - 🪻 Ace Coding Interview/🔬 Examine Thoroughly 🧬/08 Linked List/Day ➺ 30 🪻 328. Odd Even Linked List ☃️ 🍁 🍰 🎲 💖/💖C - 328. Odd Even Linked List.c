//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 328

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>

struct ListNode {
      int val;
      struct ListNode* next;
};

struct ListNode* oddEvenList(struct ListNode* head) {
      if (!head || !head->next) {
            // If the list is empty or has only one node, return as is
            return head;
      }

      // Initialize pointers for odd and even lists
      struct ListNode* odd = head;
      struct ListNode* even = head->next;
      struct ListNode* evenHead = even; // Store the head of the even list

      // Traverse the list, separating odd and even nodes
      while (even && even->next) {
            odd->next = even->next; // Connect odd nodes
            odd = odd->next; // Move odd pointer
            even->next = odd->next; // Connect even nodes
            even = even->next; // Move even pointer
      }

      // Attach the even list to the end of the odd list
      odd->next = evenHead;

      return head; // Return the modified head of the list
}
