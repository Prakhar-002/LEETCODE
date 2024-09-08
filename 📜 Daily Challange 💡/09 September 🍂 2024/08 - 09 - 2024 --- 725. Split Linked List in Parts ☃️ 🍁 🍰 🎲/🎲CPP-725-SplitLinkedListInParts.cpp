//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 725

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(k)

#include <vector>
using namespace std;

class Solution {
public:
      vector<ListNode*> splitListToParts(ListNode* head, int k) {
            // `length` is initialized to `0` to keep track of the total number of nodes in the linked list
            int length = 0;
            // `cur` is initialized to `head` and iterates over the linked list to count the nodes
            ListNode* cur = head;

            // while cur is not `nullptr`
            while (cur) {
                  // update the cur pointer
                  cur = cur->next;
                  // increment the length of linked list by 1 for each node
                  length++;
            }

            //  `base_len`: the base length for each part
            int base_len = length / k;
            // `remainingNode`: any left-over nodes after equally dividing the nodes
            int remainingNode = length % k;

            // Initialize `cur` again to start from the `head` of the linked list
            cur = head;
            //  Define `partsArr` to store each part of the split linked list
            vector<ListNode*> partsArr;

            // For each part from `0` to `k-1`
            for (int i = 0; i < k; i++) {
                  // Append the current node (`cur`) to `partsArr` to mark the beginning of this part
                  partsArr.push_back(cur);

                  // Move the pointer `cur` forward by `base_len - 1` nodes
                  // If there are `remainingNode`s, one additional node is included in the current part by checking 
                  for (int j = 0; j < base_len - 1 + (remainingNode > 0 ? 1 : 0); j++) {
                        if (!cur) {
                              break;
                        }
                        cur = cur->next;
                  }

                  // If `remainingNode` is positive, decrement it to distribute the remaining nodes among the initial parts.
                  remainingNode -= (remainingNode > 0 ? 1 : 0);

                  // After setting the last node of the current part, if `cur` is not `nullptr`, detach this part from the rest by:
                  if (cur) {
                        //  Setting the `next` pointer of `cur` to `nullptr`.
                        //  Moving `cur` to the next node.
                        ListNode* temp = cur->next;
                        cur->next = nullptr;
                        cur = temp;
                  }
            }

            // return `partsArr` containing the head nodes of each part.
            return partsArr;
      }
};

