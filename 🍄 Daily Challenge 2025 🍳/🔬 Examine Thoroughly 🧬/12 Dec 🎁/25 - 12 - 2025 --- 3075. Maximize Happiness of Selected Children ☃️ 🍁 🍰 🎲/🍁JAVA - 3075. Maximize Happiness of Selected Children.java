//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3075

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(happiness)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public long maximumHappinessSum(int[] happiness, int k) {
            // Sort in ascending order
            Arrays.sort(happiness);

            long ans = 0;

            // Select the k largest values from the end
            // Turn index: 0 (first selected), 1 (second selected), ..., k-1 (last selected)
            for (int i = 0; i < k; i++) {
                  // Pick the i-th largest value (from the end)
                  int child = happiness[happiness.length - 1 - i] - i;
                  // Add only if positive
                  ans += Math.max(0, child);
            }

            return ans;
      }
}

