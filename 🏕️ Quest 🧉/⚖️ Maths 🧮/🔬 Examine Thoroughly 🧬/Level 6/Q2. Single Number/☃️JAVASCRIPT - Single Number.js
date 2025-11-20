//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function singleNumber(nums) {
      let result = 0; // Initialize XOR accumulator

      // Loop through each number
      for (let num of nums) {
            // XOR current number with result
            // Duplicates cancel out, leaving the single number
            result ^= num;
      }

      return result; // Return the single number
}
