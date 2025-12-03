//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 138

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      Node* copyRandomList(Node* head) {
            // Map original node to its copied version
            unordered_map<Node*, Node*> mp;

            // Base case: map NULL to NULL
            mp[nullptr] = nullptr;

            Node* cur = head;

            // First pass: create copy nodes
            while (cur != nullptr) {
                  Node* copy = new Node(cur->val); // Create copy with same value
                  mp[cur] = copy;                  // Store mapping
                  cur = cur->next;                 // Move ahead
            }

            cur = head; // Reset pointer for second pass

            // Second pass: set next and random
            while (cur != nullptr) {
                  Node* copy = mp[cur];
                  copy->next = mp[cur->next];       // Set 'next' using map
                  copy->random = mp[cur->random];   // Set 'random' using map
                  cur = cur->next;
            }

            return mp[head]; // Return copied head
      }
};