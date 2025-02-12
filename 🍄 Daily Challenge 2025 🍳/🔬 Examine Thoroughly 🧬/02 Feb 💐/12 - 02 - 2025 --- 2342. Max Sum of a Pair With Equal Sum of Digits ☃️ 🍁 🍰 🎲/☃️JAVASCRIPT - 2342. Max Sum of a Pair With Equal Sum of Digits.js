//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2342

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Function to compute sum of digits of a number
var digitSum = function (num) {
      let digitSum = 0;

      // Extract digits and sum them up
      while (num > 0) {
            digitSum += num % 10;  // Get last digit and add to sum
            num = Math.floor(num / 10);  // Remove last digit
      }

      return digitSum;
}

// Function to find the maximum sum of two numbers with the same digit sum
var maximumSum = function (nums) {
      let digitSumMap = new Map();  // Map to store numbers grouped by digit sum

      for (let n of nums) {
            let dSum = digitSum(n);  // Compute digit sum

            // If key does not exist, initialize an empty array
            if (!digitSumMap.has(dSum)) {
                  digitSumMap.set(dSum, []);
            }

            let digitList = digitSumMap.get(dSum);
            digitList.push(n);  // Add the number to the corresponding digit sum group

            // Maintain only the top two largest numbers
            if (digitList.length > 2) {
                  digitList.sort((a, b) => a - b);
                  digitList.shift();  // Remove the smallest element
            }
      }

      let res = -1;  // Initialize result as -1 (default if no valid pair exists)

      // Iterate through the map values
      for (let lst of digitSumMap.values()) {
            if (lst.length === 2) {  // Consider only pairs of numbers
                  res = Math.max(res, lst[0] + lst[1]);  // Update max sum
            }
      }

      return res;
}