//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2141

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(batteries)

//? 🧺 Space complexity ➺ O(1)

var maxRunTime = function (n, batteries) {
      // Total power available
      let sumPower = batteries.reduce((a, b) => a + b, 0);

      // Binary search bounds
      let left = 1;
      let right = Math.floor(sumPower / n);

      while (left < right) {
            // Upper midpoint
            let target = right - Math.floor((right - left) / 2);

            // Usable power if all computers run for 'target' time
            let extra = 0;
            for (let power of batteries) {
                  extra += Math.min(power, target);
            }

            // Can sustain n computers for target time? Try longer
            if (extra >= n * target) {
                  left = target;
            } else {
                  right = target - 1;
            }
      }

      return left;
};
