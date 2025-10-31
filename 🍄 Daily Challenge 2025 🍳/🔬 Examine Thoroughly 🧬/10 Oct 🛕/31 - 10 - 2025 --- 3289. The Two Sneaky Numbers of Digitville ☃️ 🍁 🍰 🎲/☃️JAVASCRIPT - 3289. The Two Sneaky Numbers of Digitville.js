//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3289

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

/**
 * Finds all numbers in the array that appear exactly twice.
 */
function getSneakyNumbers(nums) {
      const sneaky = new Map();    // Map to track counts
      const sneakyNum = [];        // To store numbers appearing twice

      for (const x of nums) {
            sneaky.set(x, (sneaky.get(x) || 0) + 1);

            // Add to result once the count reaches 2
            if (sneaky.get(x) === 2) {
                  sneakyNum.push(x);
            }
      }

      return sneakyNum;
}
