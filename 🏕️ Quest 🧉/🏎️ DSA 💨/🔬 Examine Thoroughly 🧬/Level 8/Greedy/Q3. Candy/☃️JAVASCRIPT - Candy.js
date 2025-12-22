
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 135

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var candy = function (ratings) {
      const n = ratings.length;

      // Initialize candies array with 1 candy each
      const candies = new Array(n).fill(1);

      // Pass 1: Left to right
      for (let i = 1; i < n; i++) {
            // If current rating > previous rating
            if (ratings[i] > ratings[i - 1]) {
                  // Give more candies than previous
                  candies[i] = candies[i - 1] + 1;
            }
      }

      // Pass 2: Right to left
      let total = candies[n - 1]; // Include last child's candies first
      for (let i = n - 2; i >= 0; i--) {
            // If current rating > next rating
            if (ratings[i] > ratings[i + 1]) {
                  // Assign max of current or next + 1 candies
                  candies[i] = Math.max(candies[i], candies[i + 1] + 1);
            }
            total += candies[i];
      }

      return total;
};
