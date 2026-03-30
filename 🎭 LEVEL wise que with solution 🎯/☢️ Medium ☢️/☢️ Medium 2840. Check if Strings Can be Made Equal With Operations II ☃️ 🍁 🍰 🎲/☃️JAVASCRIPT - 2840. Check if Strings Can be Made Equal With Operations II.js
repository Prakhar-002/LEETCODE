//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2840

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1)

//? 🧺 Space complexity ➺ O(26)

var checkStrings = function (s1, s2) {
      // even[i] tracks net frequency of char i at even positions
      // odd[i]  tracks net frequency of char i at odd  positions
      const even = new Array(26).fill(0);
      const odd = new Array(26).fill(0);

      for (let i = 0; i < s1.length; i++) {
            if (i % 2 === 0) {
                  // Add s1 char, subtract s2 char at even index
                  even[s1.charCodeAt(i) - 97]++;
                  even[s2.charCodeAt(i) - 97]--;
            } else {
                  // Add s1 char, subtract s2 char at odd index
                  odd[s1.charCodeAt(i) - 97]++;
                  odd[s2.charCodeAt(i) - 97]--;
            }
      }

      // All frequencies must cancel out for a valid rearrangement
      for (let i = 0; i < 26; i++) {
            if (even[i] !== 0 || odd[i] !== 0)
                  return false;
      }

      return true;
};