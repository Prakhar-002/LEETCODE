//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var hasCycle = function (head) {
      // Initialize two pointers at the head:
      // slow moves 1 step, fast moves 2 steps.
      let slow = head;
      let fast = head;

      // Traverse while fast and fast.next are valid.
      // If there is a cycle, fast will eventually meet slow.
      while (fast !== null && fast.next !== null) {
            slow = slow.next;           // Move slow by 1
            fast = fast.next.next;      // Move fast by 2

            // If the two pointers meet, there is a cycle.
            if (slow === fast) {
                  return true;
            }
      }

      // If fast reaches the end (null), there is no cycle.
      return false;
};
