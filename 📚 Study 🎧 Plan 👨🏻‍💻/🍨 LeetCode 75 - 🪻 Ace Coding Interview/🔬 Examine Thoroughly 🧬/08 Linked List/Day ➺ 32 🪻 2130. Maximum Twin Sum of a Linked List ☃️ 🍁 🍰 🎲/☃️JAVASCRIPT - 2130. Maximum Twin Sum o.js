//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2130

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(1)

var pairSum = function (head) {
      // If the list has only two elements, return their sum directly
      if (head.next && head.next.next === null) {
            return head.val + head.next.val;
      }

      // Initialize slow and fast pointers for finding the middle of the list
      let slow = head;
      let fast = head;

      // Move slow by 1 step and fast by 2 steps to reach the middle
      while (fast) {
            slow = slow.next;
            fast = fast.next ? fast.next.next : null;
      }

      // Reverse the second half of the list starting from the slow pointer
      let prev = null;
      while (slow) {
            let next = slow.next;  // Save the next node
            slow.next = prev;      // Reverse the link
            prev = slow;           // Move prev to current node
            slow = next;           // Move slow to the next node
      }

      // At this point, prev points to the head of the reversed second half
      let maxSum = 0;
      let secondHalf = prev;  // The second half of the list

      // Compare nodes from the first half and the reversed second half
      while (secondHalf) {
            maxSum = Math.max(maxSum, head.val + secondHalf.val);  // Calculate max pair sum
            head = head.next;    // Move head to the next node in the first half
            secondHalf = secondHalf.next;  // Move secondHalf to the next node
      }

      // Return the maximum pair sum found
      return maxSum;
}