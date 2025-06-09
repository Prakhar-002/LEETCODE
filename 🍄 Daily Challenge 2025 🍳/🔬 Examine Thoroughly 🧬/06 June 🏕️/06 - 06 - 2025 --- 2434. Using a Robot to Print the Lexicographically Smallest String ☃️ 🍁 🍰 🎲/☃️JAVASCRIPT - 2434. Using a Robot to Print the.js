//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2434

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var robotWithString = function (s) {
      const cnt = new Array(26).fill(0);  // Count of each character

      // Count frequency of each character
      for (const c of s) {
            cnt[c.charCodeAt(0) - 97]++;
      }

      const stack = [];              // Stack to hold characters
      let res = "";                  // Final result string
      let minChar = 'a';            // Current expected smallest character

      for (const c of s) {
            stack.push(c);                // Robot picks up the character
            cnt[c.charCodeAt(0) - 97]--;  // Mark one occurrence used

            // Move minChar forward if it's not available anymore
            while (
                  minChar <= 'z' &&
                  cnt[minChar.charCodeAt(0) - 97] === 0
            ) {
                  minChar = String.fromCharCode(minChar.charCodeAt(0) + 1);
            }

            // While we can write from stack (top <= minChar), do it
            while (
                  stack.length > 0 &&
                  stack[stack.length - 1] <= minChar
            ) {
                  res += stack.pop();
            }
      }

      return res;
};
