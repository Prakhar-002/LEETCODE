//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3622

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var checkDivisibility = function(n) {
      let digitSum = 0;
      let digitProduct = 1;
      const org = n;

      // Extract each digit and compute sum and product
      while (n > 0) {
            const digit = n % 10;

            digitSum += digit;
            digitProduct *= digit;

            n = Math.floor(n / 10);
      }

      // Check divisibility
      return (org % (digitSum + digitProduct)) === 0;
};