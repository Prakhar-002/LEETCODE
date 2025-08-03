//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 141

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool hasCycle(ListNode *head) {
            // Initialize two pointers - slow and fast
            ListNode* slow = head;
            ListNode* fast = head;

            // Traverse the list
            while (fast != nullptr && fast->next != nullptr) {
                  // Move slow by 1 step
                  slow = slow->next;

                  // Move fast by 2 steps
                  fast = fast->next->next;

                  // If slow and fast meet, there is a cycle
                  if (slow == fast) {
                        return true;
                  }
            }

            // If we reach here, there is no cycle
            return false;
      }
};
