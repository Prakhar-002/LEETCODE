//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3228

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

function maxOperations(s) {
      let opr = 0;   // Total operations count
      let ones = 0;  // Count of '1's encountered

      for (let i = 0; i < s.length - 1; i++) {
            if (s[i] === '1') {
                  ones++;  // Increment count of '1's

                  // When next char is '0', add current ones count to operations
                  if (s[i + 1] === '0') {
                        opr += ones;
                  }
            }
      }
      return opr;  // Return total operations after processing
}
