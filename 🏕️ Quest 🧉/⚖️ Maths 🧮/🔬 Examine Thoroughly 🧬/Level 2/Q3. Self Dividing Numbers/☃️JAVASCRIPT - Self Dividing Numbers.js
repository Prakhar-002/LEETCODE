//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = right - left + 1

// ? 🧺 Space complexity ➺ O(1)

function selfDividingNumbers(left, right) {
      const res = [];  // Holds self-dividing numbers

      // Helper function to check divisibility by all digits
      function isDividing(num) {
            let n = num;  // Copy to extract digits

            while (n > 0) {
                  const digit = n % 10;
                  // Return false if digit zero or doesn't divide num
                  if (digit === 0 || num % digit !== 0) {
                        return false;
                  }
                  n = Math.floor(n / 10);  // Remove last digit
            }
            return true;  // All digits divide num evenly
      }

      // Loop through range, add self-dividing numbers to result
      for (let num = left; num <= right; num++) {
            if (isDividing(num)) {
                  res.push(num);
            }
      }
      return res;
}
