//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var shiftingLetters = function (s, shifts) {
      // Create a difference array to track shift operations
      const diff = Array(s.length + 1).fill(0);

      // Populate the difference array based on the shifts
      for (const [l, r, d] of shifts) {
            // If direction is 1 (right shift), increase diff[r + 1] and decrease diff[l]
            // If direction is 0 (left shift), decrease diff[r + 1] and increase diff[l]
            diff[r + 1] += d ? 1 : -1;
            diff[l] += d ? -1 : 1;
      }

      let shift = 0;
      // Convert string characters to numerical values (a -> 0, ..., z -> 25)
      const nums = Array.from(s, c => c.charCodeAt(0) - 97);

      // Apply the cumulative shifts in reverse order
      for (let i = diff.length - 1; i > 0; i--) {
            // Add the current value in diff to the cumulative shift
            shift += diff[i];

            // Adjust the character value using the cumulative shift
            nums[i - 1] = (nums[i - 1] + shift % 26 + 26) % 26;
      }

      // Convert the numerical values back to characters
      return nums.map(n => String.fromCharCode(97 + n)).join('');
}