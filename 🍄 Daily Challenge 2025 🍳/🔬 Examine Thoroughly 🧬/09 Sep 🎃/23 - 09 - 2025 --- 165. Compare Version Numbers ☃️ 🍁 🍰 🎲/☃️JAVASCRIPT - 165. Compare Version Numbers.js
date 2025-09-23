//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 165

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var compareVersion = function (version1, version2) {
      // Split versions into arrays of string segments
      const s1 = version1.split('.');
      const s2 = version2.split('.');
      const maxLength = Math.max(s1.length, s2.length);

      for (let i = 0; i < maxLength; i++) {
            // Parse each segment as integer (default to 0 if missing)
            const v1 = i < s1.length ? parseInt(s1[i], 10) : 0;
            const v2 = i < s2.length ? parseInt(s2[i], 10) : 0;
            // Compare segments and return result if different
            if (v1 !== v2) return v1 > v2 ? 1 : -1;
      }

      // All segments are equal
      return 0;
};