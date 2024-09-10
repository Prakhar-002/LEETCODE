//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2807

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

// Method to find gcd of two integers using the Euclidean algorithm
function gcd(a, b) {
      // The loop continues until `b` equals 0 ...
      while (b > 0) {
            // repeatedly sets `a` to `b`,
            let temp = a;
            a = b;
            // and `b` to `temp % b` (the remainder of `a` divided by `b`)
            b = temp % b;
      }

      //  ... at which point `a` will contain the gcd.
      return a;
}

function insertGreatestCommonDivisors(head) {
      // Initialize a pointer 'cur' to keep track of the current position
      let cur = head;

      // Loop continues as long as the current node (cur) has a next node
      while (cur.next !== null) {
            // Store the values of the current node and its next node
            let numOne = cur.val;
            let numTwo = cur.next.val;

            // Create a new ListNode with the value set to the gcd of numOne and numTwo
            // The 'next' pointer of this new node points to what was originally cur.next
            cur.next = new ListNode(gcd(numOne, numTwo), cur.next);

            // Move the 'cur' pointer to skip the newly inserted node
            cur = cur.next.next;
      }

      // Return the linked list after insertion
      return head;
}