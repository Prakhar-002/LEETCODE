//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 898

//? ⌚ Time complexity ➺ O(N log W) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(N log W)

var subarrayBitwiseORs = function (A) {
      // Set to store unique OR values
      let ans = new Set();

      // Set to store OR results ending at current position
      let cur = new Set([0]);

      // Iterate through each element in A
      for (let x of A) {
            let next = new Set();

            // Compute OR with all previous values
            for (let y of cur) {
                  next.add(x | y);
            }

            // Add current element as standalone
            next.add(x);

            // Add all results to final answer set
            for (let val of next) {
                  ans.add(val);
            }

            // Move to next index
            cur = next;
      }

      // Return the size of result set
      return ans.size;
};
