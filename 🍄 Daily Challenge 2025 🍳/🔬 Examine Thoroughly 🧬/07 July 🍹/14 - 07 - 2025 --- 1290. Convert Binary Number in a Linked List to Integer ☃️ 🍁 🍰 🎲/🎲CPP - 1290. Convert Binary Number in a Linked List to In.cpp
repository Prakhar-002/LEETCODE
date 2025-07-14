//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1290

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int getDecimalValue(ListNode *head) {
            int result = 0;

            while (head != nullptr) {
                  result = (result << 1) | head->val; // Multiply by 2 and add current bit
                  head = head->next;
            }

            return result;
      }
};