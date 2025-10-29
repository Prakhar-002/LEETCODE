//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3370

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

var smallestNumber = function (n) {
      let k = 0;
      // Increment until (2^k - 1) covers n
      while ((1 << k) - 1 < n) {
            k++;
      }

      // Return smallest number with all 1 bits in binary
      return (1 << k) - 1;
};
