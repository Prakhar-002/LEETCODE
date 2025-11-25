//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q2

//? ⌚ Time complexity ➺ O(k)

//? 🧺 Space complexity ➺ O(1) 

function smallestRepunitDivByK(k) {
      // If k divisible by 2 or 5, no valid repunit exists
      if (k % 2 === 0 || k % 5 === 0) {
            return -1;
      }

      let r = 0;  // Remainder of repunit modulo k

      // Check lengths from 1 to k
      for (let N = 1; N <= k; N++) {
            // Append '1' and calculate new remainder
            r = (r * 10 + 1) % k;
            if (r === 0) {
                  return N;  // Found smallest length repunit divisible by k
            }
      }
      return -1;  // No such repunit exists
}