//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2999

//? ⌚ Time complexity ➺ O(log(n)) 👉🏻  n = finish

//? 🧺 Space complexity ➺ O(log(n))

// Function to count the number of powerful integers between `start` and `finish`
// A powerful integer must have a suffix equal to string `s` and all prefix digits ≤ `limit`
var numberOfPowerfulInt = function (start, finish, limit, s) {
      // Convert (start - 1) and finish to strings to work with digit positions
      const start_ = (start - 1).toString();    // We subtract 1 to include the range properly
      const finish_ = finish.toString();

      // Return the count of powerful integers in [1, finish] - [1, start - 1]
      return calculate(finish_, s, limit) - calculate(start_, s, limit);
};

// Helper function to calculate how many numbers ≤ x meet the powerful integer condition
function calculate(x, s, limit) {
      // If the length of x is smaller than the length of the suffix `s`, it's impossible
      if (x.length < s.length) {
            return 0;
      }

      // If lengths are equal, directly check if x is greater than or equal to s
      if (x.length === s.length) {
            return x >= s ? 1 : 0;
      }

      // Get the suffix part of x to compare it with s later
      const suffix = x.slice(-s.length);

      let count = 0;                             // Initialize counter
      const preLen = x.length - s.length;        // Length of the prefix (before suffix)

      // Iterate over each digit in the prefix
      for (let i = 0; i < preLen; i++) {
            const digit = parseInt(x[i]);        // Convert character to number

            // If this digit exceeds the limit, all combinations from here are valid
            if (limit < digit) {
                  count += Math.pow(limit + 1, preLen - i); // Add total possibilities
                  return count;                             // Return immediately
            }

            // Otherwise, add valid combinations based on the digit value
            count += digit * Math.pow(limit + 1, preLen - 1 - i);
      }

      // After prefix, check if suffix of x is >= given suffix `s`
      if (suffix >= s) {
            count++;   // If yes, include this number
      }

      return count;    // Return final count
}
