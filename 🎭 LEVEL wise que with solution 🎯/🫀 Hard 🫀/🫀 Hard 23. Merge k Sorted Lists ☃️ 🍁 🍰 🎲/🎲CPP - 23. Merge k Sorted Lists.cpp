//! https://github.com/Prakhar-002/LEETCODE

/* Todo 💎 QUESTION NUMBER 23 */

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = Total Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      ListNode* mergeKLists(vector<ListNode*>& lists) {
            // vector to temporarily store all the values from all linked lists
            vector<int> mergeList;

            // iterates through each linked list in the lists 
            for (ListNode* linkedList : lists) {
                  // a pointer cur for current linked list
                  ListNode* cur = linkedList;
                  // iterates through each node in the current linked list
                  while (cur != nullptr) {
                        // add values of node to mergeList
                        mergeList.push_back(cur->val);
                        // shift the pointer to next node
                        cur = cur->next;
                  }
            }

            // sort values in ascending order
            sort(mergeList.begin(), mergeList.end());

            // new linked list is initialized with a dummy head node
            ListNode* mergeLinkedListNode = new ListNode(0);
            // pointer cur is assigned to this dummy node
            ListNode* cur = mergeLinkedListNode;

            // iterates over mergeList, and for each integer value
            for (int integer : mergeList) {
                  // new node is created and linked to previous node
                  cur->next = new ListNode(integer);
                  // cur pointer is then moved to this new node
                  cur = cur->next;
            }

            // returns the head of the new linked list
            return mergeLinkedListNode->next;
      }
};