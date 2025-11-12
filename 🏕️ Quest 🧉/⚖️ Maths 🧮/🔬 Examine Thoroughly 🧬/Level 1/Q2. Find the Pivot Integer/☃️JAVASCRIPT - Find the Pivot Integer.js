//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q2

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(1)

function pivotInteger(n) {
      const total = (n * (n + 1)) / 2;  // Total sum 1 through n
      let curSum = 0;                   // Running sum from 1 to i

      for (let i = 1; i <= n; i++) {
            curSum += i;

            // Check if sum from 1 to i equals sum from i to n
            if (curSum === total - curSum + i) {
                  return i;  // Found the pivot integer
            }
      }
      return -1;  // No pivot integer found
}
