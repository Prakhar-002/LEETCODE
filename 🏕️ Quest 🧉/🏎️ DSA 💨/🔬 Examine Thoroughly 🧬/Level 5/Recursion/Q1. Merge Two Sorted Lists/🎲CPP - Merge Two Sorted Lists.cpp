//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 21

//? ⌚ Time complexity -> O(n)  👉 nodes of min(list1, list2)

//? 🧺 Space complexity -> O(n + m) 👉 n = len(list1), m = Len(list2) 

#include <iostream>

class Solution {
public:
      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* newNode = new ListNode(0);
            ListNode* head = newNode;

            while (list1 != nullptr && list2 != nullptr) {
                  if (list1->val <= list2->val) {
                        head->next = list1;
                        list1 = list1->next;
                  } else {
                        head->next = list2;
                        list2 = list2->next;
                  }
                  head = head->next;
            }

            if (list1 != nullptr) {
                  head->next = list1;
            }
            if (list2 != nullptr) {
                  head->next = list2;
            }
            return newNode->next;
      }
};