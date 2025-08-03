//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 143

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

var reorderList = function (head) {
      // Step 1: Find the middle of the list using slow and fast pointers
      let slow = head;         // Moves one step
      let fast = head;         // Moves two steps

      while (fast && fast.next) {
            slow = slow.next;
            fast = fast.next.next;
      }

      // Step 2: Reverse the second half starting from slow.next
      let second = slow.next;       // Beginning of second half
      let prev = null;              // To reverse the list
      slow.next = null;             // Cut the list into two

      while (second) {
            let temp = second.next; // Save next node
            second.next = prev;     // Reverse the link
            prev = second;          // Move prev forward
            second = temp;          // Move second forward
      }

      // Step 3: Merge the first half and the reversed second half
      let first = head;
      second = prev;

      while (second) {
            let t1 = first.next;     // Save next of first
            let t2 = second.next;    // Save next of second

            first.next = second;     // Link first to second
            second.next = t1;        // Link second to t1
            first = t1;              // Move first
            second = t2;             // Move second
      }
};
