//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      ListNode* deleteDuplicates(ListNode* head) {
            // If the list is empty, nothing to remove
            if (!head) return head; 

            // Pointer to traverse the list
            ListNode* current = head;

            // Iterate while there is a next node to compare
            while (current->next) {
                  // If current and next node have the same value, skip the next node
                  if (current->val == current->next->val) {
                        // Bypass the duplicate node
                        current->next = current->next->next;
                  } else {
                        // Move to the next distinct value
                        current = current->next;
                  }
            }            

            // Return the modified head of the list
            return head;
      }
};
