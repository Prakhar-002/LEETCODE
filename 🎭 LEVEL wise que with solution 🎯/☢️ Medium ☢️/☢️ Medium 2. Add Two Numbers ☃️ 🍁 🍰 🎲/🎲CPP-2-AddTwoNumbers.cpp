//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2

#include <memory>

class Solution {
      public:
            ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                  ListNode* temp1 = l1;
                  ListNode* temp2 = l2;
                  int sum = 0;
                  int carry = 0;
                  ListNode dummy(0);
                  ListNode* head = &dummy;

                  while (temp1 != nullptr && temp2 != nullptr) {
                        sum = temp1->val + temp2->val + carry;
                        head->next = new ListNode(sum % 10);
                        carry = sum > 9 ? sum / 10 : 0;
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                        head = head->next;
                  }

                  while (temp1 != nullptr) {
                        sum = temp1->val + carry;
                        head->next = new ListNode(sum % 10);
                        carry = sum > 9 ? sum / 10 : 0;
                        temp1 = temp1->next;
                        head = head->next;
                  }

                  while (temp2 != nullptr) {
                        sum = temp2->val + carry;
                        head->next = new ListNode(sum % 10);
                        carry = sum > 9 ? sum / 10 : 0;
                        temp2 = temp2->next;
                        head = head->next;
                  }

                  if (carry != 0) {
                        head->next = new ListNode(carry);
                  }

                  return dummy.next;
      }
};

