//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2181

//? ⌚ Time complexity -> O(n) 👉 Total nodes

//? 🧺 Space complexity -> O(1)

#include <stdio.h>
#include <stdlib.h>

struct ListNode *mergeNodes(struct ListNode *head){
      // for new modification
      struct ListNode *modify = head;
      // for traversing whole linked list
      struct ListNode *cur = head->next;

      int Sum = 0;

      // traverse whole linkedList
      while (cur != NULL){
            // if we hit 0 then we ...
            if (cur->val == 0){
                  // modify the value from 0 to curSum
                  modify->val = Sum;
                  // for calculating next window sum
                  Sum = 0;
                  // if it's last 0 then ...
                  if (cur->next == NULL){
                        // end new list here
                        modify->next = NULL;
                        break;
                  }
                  // else linked current 0Th node with modify
                  modify->next = cur;
                  // traverse next
                  modify = modify->next;
                  // for next window
                  cur = cur->next;
                  continue;
            }

            Sum += cur->val;
            cur = cur->next;
      }

      return head;
}
