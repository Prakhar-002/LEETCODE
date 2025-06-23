//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3085

//? ⌚ Time complexity ➺ O(m ^ 2) 👉🏻  m = unique alphabet

//? 🧺 Space complexity ➺ O(m)

var minimumDeletions = function (word, k) {
      const freq = {};

      // Step 1: Count frequency of each character
      for (let ch of word) {
            freq[ch] = (freq[ch] || 0) + 1;
      }

      const values = Object.values(freq);
      let res = word.length;  // Max possible deletions

      // Step 2: Try each frequency as the base target
      for (let target of values) {
            let deleted = 0;

            for (let f of values) {
                  if (f < target) {
                        deleted += f;  // Remove all smaller ones
                  } else if (f > target + k) {
                        deleted += f - (target + k);  // Reduce excess
                  }
            }

            res = Math.min(res, deleted);
      }

      return res;
};
