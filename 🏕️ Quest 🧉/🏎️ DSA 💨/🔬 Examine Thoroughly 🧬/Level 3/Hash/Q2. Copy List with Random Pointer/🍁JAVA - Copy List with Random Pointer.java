//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 138

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n) 

class Solution {
      public Node copyRandomList(Node head) {
            // Map to store original node to its corresponding copied node
            Map<Node, Node> map = new HashMap<>();

            // Base case: map null to null
            map.put(null, null);

            Node cur = head;

            // First pass: create all node copies (value only)
            while (cur != null) {
                  Node copy = new Node(cur.val); // Create new node
                  map.put(cur, copy); // Store mapping from original to copy
                  cur = cur.next; // Move to next node
            }

            cur = head; // Reset to head for second pass

            // Second pass: assign next and random pointers
            while (cur != null) {
                  Node copy = map.get(cur); // Get the copied node
                  copy.next = map.get(cur.next); // Set its 'next' to the copy of cur.next
                  copy.random = map.get(cur.random); // Set its 'random' to the copy of cur.random
                  cur = cur.next; // Move to next node
            }

            return map.get(head); // Return head of copied list
      }
}