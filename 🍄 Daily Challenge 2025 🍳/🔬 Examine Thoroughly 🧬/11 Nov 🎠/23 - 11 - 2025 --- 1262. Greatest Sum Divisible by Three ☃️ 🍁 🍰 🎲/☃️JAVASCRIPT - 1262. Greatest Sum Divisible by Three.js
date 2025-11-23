//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1262

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxSumDivThree = function(nums) {
      let total = 0;
      // Track the smallest number with remainder 1 mod 3 encountered so far
      let smallestOne = Infinity;  
      // Track the smallest number with remainder 2 mod 3 encountered so far
      let smallestTwo = Infinity;  

      // Iterate through each number in the array
      for (const n of nums) {
            // Add current number to total sum
            total += n;

            // If the current number leaves remainder 1 when divided by 3
            if (n % 3 === 1) {
                  // Update smallestTwo: minimal sum of current number + smallestOne so far
                  smallestTwo = Math.min(smallestTwo, n + smallestOne);
                  // Update smallestOne if current number is smaller
                  smallestOne = Math.min(smallestOne, n);
            }
            // If the current number leaves remainder 2 when divided by 3
            if (n % 3 === 2) {
                  // Update smallestOne: minimal sum of current number + smallestTwo so far
                  smallestOne = Math.min(smallestOne, n + smallestTwo);
                  // Update smallestTwo if current number is smaller
                  smallestTwo = Math.min(smallestTwo, n);
            }
      }

      // If total sum is divisible by 3, return total
      if (total % 3 === 0) {
            return total;
      // If remainder 1, subtract smallestOne to make sum divisible by 3
      } else if (total % 3 === 1) {
            return total - smallestOne;
      // If remainder 2, subtract smallestTwo to make sum divisible by 3
      } else {
            return total - smallestTwo;
      }
};
