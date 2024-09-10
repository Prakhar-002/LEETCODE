//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2807

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

class Solution {
private:
      // Method to find gcd of two integers. It uses the Euclidean algorithm
      int gcd(int a, int b) {
            // The loop continues until `b` equals 0 ...
            while (b > 0) {
                  // repeatedly sets `a` to `b`,
                  int temp = a;
                  a = b;
                  // and `b` to `temp % b` (the remainder of `a` divided by `b`)
                  b = temp % b;
            }

            //  ... at which point `a` will contain the gcd.
            return a;
      }

public:
      ListNode* insertGreatestCommonDivisors(ListNode* head) {
            // initializes a pointer `cur` to keep track of the current position
            ListNode* cur = head;

            // loop continues as long as the current node (`cur`) has a next node
            while (cur->next != nullptr) {
                  // These variables store the values of the current node and its next node.
                  int numOne = cur->val;
                  int numTwo = cur->next->val;

                  // A new `ListNode` is created with the value set to the gcd of `numOne` and `numTwo`
                  // The `next` pointer of this new node points to what was originally `cur->next`
                  cur->next = new ListNode(gcd(numOne, numTwo), cur->next);

                  // The `cur` pointer then skips the newly inserted node to move to the next original node in the list
                  cur = cur->next->next;
            }

            // Returning the linked list after insertion
            return head;
      }
};