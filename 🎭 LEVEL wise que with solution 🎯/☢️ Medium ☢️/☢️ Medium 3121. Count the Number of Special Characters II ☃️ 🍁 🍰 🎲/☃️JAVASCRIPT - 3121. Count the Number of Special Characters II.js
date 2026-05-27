//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3121

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

var numberOfSpecialChars = function(word) {
      // lastSmall[i]    = last index where lowercase letter i appeared
      // firstCapital[i] = first index where uppercase letter i appeared
      const lastSmall    = new Array(26).fill(-1);
      const firstCapital = new Array(26).fill(-1);

      for (let i = 0; i < word.length; i++) {
            const ch  = word[i];
            const idx = ch.charCodeAt(0);

            if (ch === ch.toLowerCase() && ch !== ch.toUpperCase()) {
                  // Always update to keep the LAST occurrence of lowercase
                  lastSmall[idx - 97] = i;
            } else {
                  // Only record the FIRST occurrence of uppercase
                  if (firstCapital[idx - 65] === -1)
                        firstCapital[idx - 65] = i;
            }
      }

      let count = 0;

      for (let i = 0; i < 26; i++) {
            // Valid special pair: both exist and last lowercase comes before first uppercase
            if (lastSmall[i] !== -1 && firstCapital[i] !== -1 && lastSmall[i] < firstCapital[i])
                  count++;
      }

      return count;
};