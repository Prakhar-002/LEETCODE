//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long sumScores(String s) {
            int n = s.length();
            int[] z = new int[n]; // z[i] = LCP(s, s.substring(i))

            int l = 0, r = 0; // Current Z-box [l, r]

            // Build Z-array
            for (int i = 1; i < n; i++) {
                  if (i <= r) {
                        // We are inside a Z-box, reuse previous value
                        z[i] = Math.min(r - i + 1, z[i - l]);
                  }

                  // Extend match starting at i
                  while (i + z[i] < n && s.charAt(z[i]) == s.charAt(i + z[i])) {
                        z[i]++;
                  }

                  // Update Z-box if we extended beyond r
                  if (i + z[i] - 1 > r) {
                        l = i;
                        r = i + z[i] - 1;
                  }
            }

            // Total score: full string contributes n, plus sum of z[i]
            long total = n; // Use long to avoid overflow on large strings
            for (int i = 1; i < n; i++) {
                  total += z[i];
            }
            return total;
      }
}
