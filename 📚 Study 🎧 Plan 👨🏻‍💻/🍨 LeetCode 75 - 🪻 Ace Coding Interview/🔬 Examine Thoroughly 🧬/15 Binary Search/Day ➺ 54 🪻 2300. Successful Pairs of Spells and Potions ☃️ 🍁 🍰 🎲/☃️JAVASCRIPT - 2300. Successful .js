//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2300

//? ⌚ Time complexity ➺ O(m log m + n log m) 👉🏻  n = len(spells)

//? 🧺 Space complexity ➺ O(1)  ->  m = n = len(potions)

var successfulPairs = function (spells, potions, success) {
      const n = spells.length;                  // Number of spells
      const m = potions.length;                 // Number of potions
      const result = new Array(n).fill(0);      // Initialize result array

      potions.sort((a, b) => a - b);            // Sort potions for binary search

      for (let i = 0; i < n; i++) {
            const spell = spells[i];
            let left = 0, right = m - 1;

            // Binary search to find the first potion where product >= success
            while (left <= right) {
                  const mid = Math.floor((left + right) / 2);
                  const product = spell * potions[mid];

                  if (product >= success) {
                        right = mid - 1;
                  } else {
                        left = mid + 1;
                  }
            }

            // From index left to end are valid potions
            result[i] = m - left;
      }

      return result;  // Return final result array
};
