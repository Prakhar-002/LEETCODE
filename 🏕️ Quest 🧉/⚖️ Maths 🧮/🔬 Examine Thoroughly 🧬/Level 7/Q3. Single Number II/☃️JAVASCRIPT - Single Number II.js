//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function singleNumber(nums) {
      let ones = 0;  // Bits appeared exactly once
      let twos = 0;  // Bits appeared exactly twice

      for (const num of nums) {
            // Update ones and twos with bitwise logic to track triple occurrences
            ones = (ones ^ (num & ~twos));
            twos = (twos ^ (num & ~ones));
      }
      // Ones holds the single number appearing once
      return ones;
}
