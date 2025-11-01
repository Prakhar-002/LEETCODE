//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3217

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums),  m = No. of nodes

//? 🧺 Space complexity ➺ O(n)

# include <unordered_set>
# include <vector>
using namespace std;

class Solution {
public:
      ListNode* modifiedList(vector<int>& nums, ListNode* head) {
            // `nums` is converted into an unordered_set, done for efficient lookup
            unordered_set<int> numSet(nums.begin(), nums.end());

            // A dummy node `dummy` is created with the value 0 and pointing to `head`
            ListNode* dummy = new ListNode(0, head);

            // variable `dummyHead` is used to traverse the linked list
            ListNode* dummyHead = dummy;

            // The loop continues as long as the next node after `dummyHead` is not `nullptr`
            while (dummyHead->next) {
                  // whether the value of the next node (`dummyHead->next->val`) is in the `numSet`
                  if (numSet.find(dummyHead->next->val) != numSet.end()) {
                        // If the value is in the set, it implies that the current node should be removed
                        // the next pointer of `dummyHead` is updated to point to the node after `dummyHead->next`, 
                        // effectively skipping over the node to be removed
                        dummyHead->next = dummyHead->next->next;
                  } else { // If the value is not in the set
                        // The `dummyHead` pointer is moved to the next node in the list
                        dummyHead = dummyHead->next;
                  }
            }

            // returns the `next` node of the dummy
            ListNode* result = dummy->next;
            delete dummy;  // Clean up the dummy node
            return result;
      }
};