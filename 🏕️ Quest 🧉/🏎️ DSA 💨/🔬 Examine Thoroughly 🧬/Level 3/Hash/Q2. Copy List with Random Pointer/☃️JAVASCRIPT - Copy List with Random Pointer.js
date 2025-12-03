//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 138

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var copyRandomList = function (head) {
      // Map original node to its copy
      const map = new Map();

      // Base case: null maps to null
      map.set(null, null);

      let cur = head;

      // First pass: clone each node (value only)
      while (cur !== null) {
            const copy = new Node(cur.val); // Create new copy
            map.set(cur, copy);             // Map original to copy
            cur = cur.next;
      }

      cur = head; // Reset pointer for second pass

      // Second pass: link next and random
      while (cur !== null) {
            const copy = map.get(cur);
            copy.next = map.get(cur.next);       // Link to copied next
            copy.random = map.get(cur.random);   // Link to copied random
            cur = cur.next;
      }

      return map.get(head); // Return copied head
};