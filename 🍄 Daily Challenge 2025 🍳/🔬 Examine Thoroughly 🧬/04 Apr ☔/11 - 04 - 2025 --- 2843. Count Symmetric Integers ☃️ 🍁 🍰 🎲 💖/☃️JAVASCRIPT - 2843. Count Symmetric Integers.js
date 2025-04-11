//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2843

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = hight - low + 1

//? 🧺 Space complexity ➺ O(1)

var countSymmetricIntegers = function (low, high) {
      let count = 0; // Counter for symmetric integers

      for (let num = low; num <= high; num++) {
            // Check for 2-digit symmetric numbers divisible by 11
            if (num < 100 && num % 11 === 0) {
                  count++;
            }
            // Check for 4-digit symmetric numbers
            else if (num >= 1000 && num < 10000) {
                  let left = Math.floor(num / 1000) + Math.floor((num % 1000) / 100); // Sum of first 2 digits
                  let right = Math.floor((num % 100) / 10) + (num % 10); // Sum of last 2 digits

                  if (left === right) {
                        count++;
                  }
            }
      }

      return count; // Return final count
};
