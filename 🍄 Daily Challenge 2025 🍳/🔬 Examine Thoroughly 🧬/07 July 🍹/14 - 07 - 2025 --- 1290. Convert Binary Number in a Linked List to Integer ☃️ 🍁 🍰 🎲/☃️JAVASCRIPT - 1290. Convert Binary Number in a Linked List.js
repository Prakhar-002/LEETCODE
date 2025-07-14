//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1290

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(1)

var getDecimalValue = function (head) {
      let result = 0;

      while (head !== null) {
            result = (result << 1) | head.val; // Multiply by 2 and add bit
            head = head.next;
      }

      return result;
};