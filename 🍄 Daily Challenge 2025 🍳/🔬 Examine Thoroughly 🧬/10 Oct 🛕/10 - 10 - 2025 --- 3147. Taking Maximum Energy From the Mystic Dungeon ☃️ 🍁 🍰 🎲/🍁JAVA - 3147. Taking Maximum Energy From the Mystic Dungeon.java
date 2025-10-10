//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(energy)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maximumEnergy(int[] energy, int k) {
            // Initialize answer to smallest integer value
            int ans = Integer.MIN_VALUE;
            int n = energy.length;

            // For each possible end position in the last k indices
            for (int i = n - k; i < n; i++) {
                  int total = 0;
                  int j = i;

                  // Move backward by steps of k, summing energy values
                  while (j >= 0) {
                        total += energy[j];
                        ans = Math.max(ans, total);
                        j -= k;
                  }
            }

            // Return the maximum energy that can be collected
            return ans;
      }
}
