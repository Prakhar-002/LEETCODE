//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2414

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)


var longestContinuousSubstring = function (s) {
      // If the string is empty, no substring can be formed.
      if (!s) {
            return 0;
      }

      // `total` stores the maximum length found so far, initialized to 1.
      let total = 1;
      // `count` tracks the length of the current continuous substring.
      let count = 1;

      // Iterate from the second character to the end of the string.
      for (let i = 1; i < s.length; i++) {
            // Check if the current character's ASCII code is one greater than the previous one's.
            if (s.charCodeAt(i) === s.charCodeAt(i - 1) + 1) {
                  // If the streak continues, increment the current count.
                  count++;
                  // Update the overall maximum length if needed.
                  total = Math.max(count, total);
            } else {
                  // If the streak is broken, reset the current count to 1.
                  count = 1;
            }
      }

      // Return the maximum length found.
      return total;
};