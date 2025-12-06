//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Quiz Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

function combine(n, k) {
      const res = [];    // Store all combinations
      const comb = [];   // Current combination under construction

      function backtrack(start) {
            // If combination size is k, add a copy and return
            if (comb.length === k) {
                  res.push([...comb]);
                  return;
            }

            // Explore all candidates from 'start' to n
            for (let num = start; num <= n; num++) {
                  comb.push(num);       // Choose
                  backtrack(num + 1);   // Explore next
                  comb.pop();           // Backtrack (undo)
            }
      }

      backtrack(1);  // Start from number 1
      return res;
}