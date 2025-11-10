//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3542

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Counts minimum operations to build the heights in nums using a stack
var minOperations = function (nums) {
      const stack = [];  // Stack to maintain non-decreasing heights
      let res = 0;       // Result to count number of operations

      // Iterate over each number in nums array
      for (let n of nums) {
            // Pop elements from stack while top element is greater than current number n
            while (stack.length && stack[stack.length - 1] > n) {
                  stack.pop();  // Remove layers that exceed current height
            }
            // If current number n is positive, and stack is empty or top differs
            // Count adding this new height layer as an operation
            if (n > 0 && (stack.length === 0 || stack[stack.length - 1] !== n)) {
                  res += 1;
                  stack.push(n);  // Add new height layer to stack
            }
      }
      return res;  // Return total operations performed
}
