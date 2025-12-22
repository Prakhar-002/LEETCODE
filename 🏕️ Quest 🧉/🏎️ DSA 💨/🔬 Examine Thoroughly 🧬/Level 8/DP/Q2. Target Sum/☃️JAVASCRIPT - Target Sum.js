
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 494

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = [-sum(numbers), sum(numbers)]

//? 🧺 Space complexity ➺ O(m)    👉🏻 m = sum of absolute values

var findTargetSumWays = function (numbers, targetSum) {
      // Object to store the number of ways to achieve each sum
      let waysToSum = { 0: 1 }; // Base case: one way to achieve sum 0

      // Iterate over each number in the input array
      for (let number of numbers) {
            // Temporary object for the current iteration
            let currentWays = {};

            // Update ways to achieve each possible sum with the current number
            for (let currentSum in waysToSum) {
                  currentSum = parseInt(currentSum);
                  let count = waysToSum[currentSum];

                  currentWays[currentSum + number] = (currentWays[currentSum + number] || 0) + count;
                  currentWays[currentSum - number] = (currentWays[currentSum - number] || 0) + count;
            }

            // Move to the next iteration by replacing the old object
            waysToSum = currentWays;
      }

      // Return the number of ways to achieve the target sum
      return waysToSum[targetSum] || 0;
};
