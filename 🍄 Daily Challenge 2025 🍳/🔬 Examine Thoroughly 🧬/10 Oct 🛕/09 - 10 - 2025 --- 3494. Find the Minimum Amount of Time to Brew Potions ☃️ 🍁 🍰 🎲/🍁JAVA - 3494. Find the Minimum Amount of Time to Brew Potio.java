//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3494

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long minTime(int[] skill, int[] mana) {
            int n = skill.length, m = mana.length;

            // 'done' array stores intermediate DP states,
            // done[i] is the maximum result considering first i skills
            long[] done = new long[n + 1];

            // Iterate each mana value (outer loop)
            for (int j = 0; j < m; j++) {
                  // Forward pass: update done for all skill indices
                  for (int i = 0; i < n; i++)
                        done[i + 1] = Math.max(done[i], done[i + 1]) + skill[i] * mana[j];

                  // Backward pass: update done for overlapping states
                  for (int i = n - 1; i > 0; i--)
                        done[i] = done[i + 1] - skill[i] * mana[j];
            }

            // Result is the value for all skills covered
            return done[n];
      }
}

