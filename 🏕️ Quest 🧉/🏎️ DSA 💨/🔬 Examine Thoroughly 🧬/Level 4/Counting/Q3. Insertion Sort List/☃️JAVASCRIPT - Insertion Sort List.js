//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.2 Q3

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var insertionSortList = function (head) {
      // Empty list or single node is already sorted
      if (!head || !head.next) {
            return head;
      }

      // Dummy node with minimal value (-Infinity equivalent)
      const dummy = { val: -Infinity, next: head };

      // 'cur' points to end of currently sorted portion
      let cur = head;

      // Continue while nodes exist after cur
      while (cur && cur.next) {
            // Next node is correctly positioned, move forward
            if (cur.next.val >= cur.val) {
                  cur = cur.next;
            } else {
                  // Remove misplaced node
                  let tmp = cur.next;
                  cur.next = tmp.next;

                  // Find insertion position from dummy
                  let pre = dummy;
                  while (pre.next.val < tmp.val) {
                        pre = pre.next;
                  }

                  // Insert tmp at correct position
                  tmp.next = pre.next;
                  pre.next = tmp;
            }
      }

      // Return sorted list (skip dummy)
      return dummy.next;
};
