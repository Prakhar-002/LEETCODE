//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3442

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var maxDifference = function (s) {
      const freq = new Array(26).fill(0);               // Array to count 'a' to 'z'

      for (let i = 0; i < s.length; i++) {
            freq[s.charCodeAt(i) - 97]++;               // Update frequency
      }

      let evenFreq = Infinity;                          // Initialize to find min even
      let oddFreq = -Infinity;                          // Initialize to find max odd

      for (let value of freq) {
            if (value === 0) continue;                  // Skip 0 frequencies

            if (value % 2 === 0) {
                  evenFreq = Math.min(evenFreq, value); // Track min even frequency
            } else {
                  oddFreq = Math.max(oddFreq, value);   // Track max odd frequency
            }
      }

      // Edge case check: if no valid even or odd frequency
      if (evenFreq === Infinity || oddFreq === -Infinity) {
            return 0;
      }

      return oddFreq - evenFreq;                        // Return the difference
};
