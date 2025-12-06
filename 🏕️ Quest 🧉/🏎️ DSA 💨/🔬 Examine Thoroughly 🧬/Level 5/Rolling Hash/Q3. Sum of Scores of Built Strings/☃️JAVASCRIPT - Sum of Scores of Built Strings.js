//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var sumScores = function (s) {
      const n = s.length;

      // Z-array where z[i] = LCP length of s and s.substring(i)
      const z = new Array(n).fill(0);

      // [l, r] = current Z-box: s[l..r] == s[0..(r-l)]
      let l = 0, r = 0;

      // Compute Z-values for all positions i > 0
      for (let i = 1; i < n; i++) {
            // If i is inside current Z-box, we can reuse previous results
            if (i <= r) {
                  // Mirror index inside the prefix is (i - l)
                  // We cannot go beyond r, so cap with (r - i + 1)
                  z[i] = Math.min(r - i + 1, z[i - l]);
            }

            // Try to extend the match starting from i
            while (i + z[i] < n && s[z[i]] === s[i + z[i]]) {
                  z[i]++;
            }

            // If new match extends beyond current Z-box, update [l, r]
            if (i + z[i] - 1 > r) {
                  l = i;
                  r = i + z[i] - 1;
            }
      }

      // Sum of scores:
      // - Full string contributes n (it matches itself)
      // - Each z[i] is the score of substring starting at i
      let total = n;
      for (let i = 1; i < n; i++) {
            total += z[i];
      }
      return total;
};
