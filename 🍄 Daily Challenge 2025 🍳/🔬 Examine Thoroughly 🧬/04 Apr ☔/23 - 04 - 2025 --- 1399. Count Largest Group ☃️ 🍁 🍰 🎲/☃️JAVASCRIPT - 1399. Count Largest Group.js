//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countLargestGroup = function (n) {
      // Array to count digit sums (index 1 to 36)
      const digitSumCount = new Array(37).fill(0); // index 0 is unused

      // Array to cache digit sums of numbers from 0 to n
      const digitSumCache = new Array(n + 1).fill(0);

      let maxGroupSize = 0;  // To track largest group size

      // Loop through numbers 1 to n
      for (let num = 1; num <= n; num++) {
            // Compute digit sum using last digit and precomputed value
            let digitSum = num % 10 + digitSumCache[Math.floor(num / 10)];

            // Store digit sum in cache
            digitSumCache[num] = digitSum;

            // Increment the count for this digit sum
            digitSumCount[digitSum]++;

            // Update max group size
            maxGroupSize = Math.max(maxGroupSize, digitSumCount[digitSum]);
      }

      let largestGroups = 0;

      // Count how many digit sums reached the max group size
      for (let count of digitSumCount) {
            if (count === maxGroupSize) {
                  largestGroups++;
            }
      }

      return largestGroups;
}
