//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 455

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(g)

//? 🧺 Space complexity ➺ O(1)  👉🏻 m = len(s)

class Solution {
      public int findContentChildren(int[] g, int[] s) {
            // Sort greed factors and cookie sizes
            Arrays.sort(g);
            Arrays.sort(s);

            int gIdx = 0, sIdx = 0, content = 0;

            // Loop through both arrays
            while (gIdx < g.length && sIdx < s.length) {
                  // Find a cookie that satisfies current child
                  while (sIdx < s.length && g[gIdx] > s[sIdx]) {
                        sIdx++;
                  }
                  // If a valid cookie is found
                  if (sIdx < s.length) {
                        content++; // Assign the cookie
                        sIdx++; // Move to next cookie
                  }
                  gIdx++; // Move to next child
            }
            return content; // Return total content children
      }
}
