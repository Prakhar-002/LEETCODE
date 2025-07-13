//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 455

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(g)

//? 🧺 Space complexity ➺ O(1)  👉🏻 m = len(s)

var findContentChildren = function (g, s) {
      g.sort((a, b) => a - b);  // Sort greed factors
      s.sort((a, b) => a - b);  // Sort cookie sizes

      let gIdx = 0, sIdx = 0, content = 0;

      // Iterate through both arrays
      while (gIdx < g.length && sIdx < s.length) {
            // Skip cookies that are too small
            while (sIdx < s.length && g[gIdx] > s[sIdx]) {
                  sIdx++;
            }
            if (sIdx < s.length) {
                  content++;  // One child is satisfied
                  sIdx++;     // Use one cookie
            }
            gIdx++;  // Move to next child
      }

      return content;
};
