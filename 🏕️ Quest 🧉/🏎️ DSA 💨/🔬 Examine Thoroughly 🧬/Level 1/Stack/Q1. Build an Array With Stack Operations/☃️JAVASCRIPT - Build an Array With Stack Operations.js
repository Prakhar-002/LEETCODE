//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

// JavaScript version
var buildArray = function (target, n) {
      const operations = [];
      let cur = 0;

      // Iterate numbers from 1 to n
      for (let i = 1; i <= n; i++) {
            if (cur === target.length) break;

            if (target[cur] === i) {
                  // Push matching number
                  operations.push("Push");
                  cur++;
            } else {
                  // Push then Pop for numbers not in target
                  operations.push("Push");
                  operations.push("Pop");
            }
      }

      return operations;
};
