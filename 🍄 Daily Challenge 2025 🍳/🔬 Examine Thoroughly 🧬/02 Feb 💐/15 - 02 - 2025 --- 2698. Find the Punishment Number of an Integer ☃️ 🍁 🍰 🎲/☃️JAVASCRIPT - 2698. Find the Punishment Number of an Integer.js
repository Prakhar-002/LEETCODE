//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2698

//? ⌚ Time complexity ➺ O(n ^ 2)

//? 🧺 Space complexity ➺ O(log n)

/*
* Recursively checks if the number can be partitioned such that the sum of segments equals the target.
* @param i :      Current index in the string s
* @param cur :    Current sum of the partitioned numbers
* @param target : The target sum to achieve
* @param s :      The squared number as a string
* @return       True if a valid partition exists, otherwise False
*/
var partition = function (i, cur, target, s) {
      // Base case: If we have processed the entire string and sum equals target
      if (i === s.length && cur === target) {
            return true;
      }

      // Try different partitions from index i to the end of the string
      for (let j = i; j < s.length; j++) {
            // Recursively check if the remaining part can sum up to target
            if (partition(j + 1, cur + parseInt(s.substring(i, j + 1)), target, s)) {
                  return true;
            }
      }
      return false;
}

var punishmentNumber = function (n) {
      let punishment = 0;

      // Iterate over all numbers from 1 to n
      for (let i = 1; i <= n; i++) {
            // Check if the square of i can be partitioned to sum to i
            if (partition(0, 0, i, String(i * i))) {
                  punishment += i * i; // Add the squared value to punishment
            }
      }
      return punishment;
}
