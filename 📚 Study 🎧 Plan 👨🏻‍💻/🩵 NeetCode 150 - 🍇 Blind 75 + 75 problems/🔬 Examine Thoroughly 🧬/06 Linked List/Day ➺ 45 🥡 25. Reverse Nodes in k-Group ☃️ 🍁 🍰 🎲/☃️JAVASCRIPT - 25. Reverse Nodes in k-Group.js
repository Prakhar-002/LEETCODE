//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 25

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(1)

var reverseKGroup = function (head, k) {
      // Create a dummy node to handle edge cases easily
      const dummy = new ListNode(0);
      dummy.next = head;

      // This points to the node before the group to be reversed
      let groupPrev = dummy;

      while (true) {
            // Get the kth node from groupPrev
            let kth = getKth(groupPrev, k);

            // If fewer than k nodes remain, break the loop
            if (!kth) break;

            // Save the node after kth
            let groupNext = kth.next;

            // Begin reversing the group
            let prev = groupNext;
            let cur = groupPrev.next;

            // Reverse the pointers in the group
            while (cur !== groupNext) {
                  let tmp = cur.next;   // Save next node
                  cur.next = prev;      // Reverse link
                  prev = cur;           // Move prev forward
                  cur = tmp;            // Move cur forward
            }

            // Reconnect reversed group with previous part
            let temp = groupPrev.next;  // Start of group (becomes tail)
            groupPrev.next = kth;       // Point to new head
            groupPrev = temp;           // Move to tail for next round
      }

      // Return new head of the list
      return dummy.next;
};

// Helper function to find the kth node from current node
function getKth(cur, k) {
      while (cur && k > 0) {
            cur = cur.next;
            k--;
      }
      return cur;  // Return kth node or null
}
