//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2181

//? ⌚ Time complexity -> O(n) 👉 Total nodes 

//? 🧺 Space complexity -> O(1) 

var mergeNodes = function (head) {
      // for new modification
      let modify = head;
      // for traversing whole linked list
      let cur = head.next;

      let Sum = 0;

      // traverse whole linkedList
      while (cur !== null) {
            // if we hit 0 then we ...
            if (cur.val === 0) {
                  // modify the value from 0 to curSum
                  modify.val = Sum;
                  // for calculating next window sum
                  Sum = 0;
                  // if it's last 0 then ...
                  if (cur.next === null) {
                        // end new list here
                        modify.next = null;
                        break;
                  }
                  // else linked current 0Th node with modify
                  modify.next = cur;
                  // traverse next
                  modify = modify.next;
                  // for next window
                  cur = cur.next;
                  continue;
            }

            Sum += cur.val;
            cur = cur.next;
      }

      return head;
};