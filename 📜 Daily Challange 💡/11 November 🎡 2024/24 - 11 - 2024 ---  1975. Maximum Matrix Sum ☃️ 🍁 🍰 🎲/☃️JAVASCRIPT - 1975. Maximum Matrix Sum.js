//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1975

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(matrix), 

//? 🧺 Space complexity ➺ O(1) 👉🏻 m = len(matrix[0])

var maxMatrixSum = function (matrix) {
      // maxSum to store the sum of absolute values of the matrix elements,
      let maxSum = 0;
      // minus to count the number of negative elements,
      let minus = 0;
      // minVal to keep track of the smallest absolute value in the matrix.
      let minVal = Infinity;

      // Iterate through each row in the matrix.
      for (const row of matrix) {
            // Iterate through each element in the row.
            for (const n of row) {
                  // Increment the minus counter if the current element is negative.
                  if (n < 0) minus++;
                  // Add the absolute value of the current element to maxSum.
                  maxSum += Math.abs(n);
                  // Update minVal to the smallest absolute value encountered so far.
                  minVal = Math.min(minVal, Math.abs(n));
            }
      }

      // If the count of negative numbers is even, return the total maxSum.
      // Otherwise, subtract twice the smallest absolute value to maximize the matrix sum.
      return (minus % 2 === 0) ? maxSum : maxSum - 2 * minVal;
};