//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(energy)

//? 🧺 Space complexity ➺ O(1)

var maximumEnergy = function (energy, k) {
      // Initialize answer to a very small number
      let ans = -Infinity;
      const n = energy.length;

      // Start from each possible end position in last k indices
      for (let i = n - k; i < n; i++) {
            let total = 0;
            let j = i;

            // Move backwards by k in each step, accumulating total
            while (j >= 0) {
                  total += energy[j];
                  ans = Math.max(ans, total);
                  j -= k;
            }
      }

      // Return the maximum sum found
      return ans;
};
