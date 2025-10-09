//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3494

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minTime = function (skill, mana) {
      const n = skill.length, m = mana.length;

      // 'done' array stores intermediate max times: done[i] for first i skills
      const done = new Array(n + 1).fill(0);

      // Iterate over each mana value
      for (let j = 0; j < m; j++) {
            // Forward pass: update done for skills from left to right
            for (let i = 0; i < n; i++)
                  done[i + 1] = Math.max(done[i], done[i + 1]) + skill[i] * mana[j];

            // Backward pass: subtract overlapping costs
            for (let i = n - 1; i > 0; i--)
                  done[i] = done[i + 1] - skill[i] * mana[j];
      }

      // Final answer: accumulated value for all skills used
      return done[n];
};
