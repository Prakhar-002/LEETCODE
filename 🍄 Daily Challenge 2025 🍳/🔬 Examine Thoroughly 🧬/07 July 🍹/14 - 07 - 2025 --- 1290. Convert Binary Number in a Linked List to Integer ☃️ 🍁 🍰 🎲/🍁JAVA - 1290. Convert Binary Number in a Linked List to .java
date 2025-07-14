//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1290

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int getDecimalValue(ListNode head) {
            int result = 0;

            // Traverse the linked list
            while (head != null) {
                  result = (result << 1) | head.val; // Shift left and add current bit
                  head = head.next; // Move to the next node
            }

            return result; // Final decimal value
      }
}