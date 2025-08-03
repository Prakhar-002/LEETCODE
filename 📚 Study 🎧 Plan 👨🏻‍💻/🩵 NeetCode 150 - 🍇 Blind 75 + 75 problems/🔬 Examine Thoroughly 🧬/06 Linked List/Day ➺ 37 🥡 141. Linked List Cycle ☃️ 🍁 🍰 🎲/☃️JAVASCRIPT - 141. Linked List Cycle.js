//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 141

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var hasCycle = function (head) {
      // Initialize slow and fast pointers
      let slow = head;
      let fast = head;

      // Traverse while fast and fast.next are valid
      while (fast !== null && fast.next !== null) {
            // Move slow one step forward
            slow = slow.next;

            // Move fast two steps forward
            fast = fast.next.next;

            // If slow meets fast, cycle exists
            if (slow === fast) {
                  return true;
            }
      }

      // If traversal ends, no cycle exists
      return false;
};
