//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L3.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

var deleteDuplicates = function (head) {
      // Empty list, nothing to remove
      if (head === null) return head;

      let current = head; // Pointer to traverse the list

      // While a next node exists
      while (current.next !== null) {
            // If current and next node values are same, skip the next node
            if (current.val === current.next.val) {
                  current.next = current.next.next; // Remove duplicate
            } else {
                  current = current.next; // Move to next distinct node
            }
      }

      // Return head of de-duplicated list
      return head;
};
