//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2770

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maximumJumps = function(nums, target) {
      const n = nums.length;
      // Fill memo table with null as "not yet computed" sentinel
      const t = new Array(n + 1).fill(null);

      function solve(i) {
            // Reached last index — no more jumps needed
            if (i === n - 1) {
                  t[i] = 0;
                  return 0;
            }

            // Return cached result if already computed
            if (t[i] !== null)
                  return t[i];

            let result = -Infinity;

            // Try every index ahead as a potential next jump
            for (let j = i + 1; j < n; j++) {
                  // Only jump if difference is within target
                  if (Math.abs(nums[i] - nums[j]) <= target) {
                        const temp = 1 + solve(j);
                        result     = Math.max(result, temp);
                  }
            }

            t[i] = result;
            return result;
      }

      const result = solve(0);
      // Negative result means no valid path to last index
      return result < 0 ? -1 : result;
};