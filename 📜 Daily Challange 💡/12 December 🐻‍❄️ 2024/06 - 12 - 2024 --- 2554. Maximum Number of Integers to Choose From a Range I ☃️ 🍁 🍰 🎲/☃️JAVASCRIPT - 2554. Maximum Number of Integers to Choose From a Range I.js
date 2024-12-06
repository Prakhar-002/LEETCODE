//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2554

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = given 

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = len(banned)

var maxCount = function (banned, n, maxSum) {
      // Initialize the current sum of selected numbers to zero
      let curSum = 0;

      // Initialize the counter for how many numbers have been selected
      let count = 0;

      // Convert the banned array into a Set for faster lookup
      const bannedSet = new Set(banned);

      // Iterate through numbers from 1 to n
      for (let num = 1; num <= n; num++) {
            // Check if the current number is not banned and adding it will not exceed maxSum
            if (!bannedSet.has(num) && curSum + num <= maxSum) {
                  // Increment the count of selected numbers
                  count++;

                  // Add the current number to the running total sum
                  curSum += num;
            }
      }

      // Return the count of numbers that meet the conditions
      return count;
}
