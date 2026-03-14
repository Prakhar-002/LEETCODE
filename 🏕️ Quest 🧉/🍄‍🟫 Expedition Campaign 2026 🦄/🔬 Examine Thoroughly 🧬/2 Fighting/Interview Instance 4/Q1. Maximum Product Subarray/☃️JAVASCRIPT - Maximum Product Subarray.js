//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 152

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxProduct = function (nums) {

      // 'low'  → minimum product ending at current position
      // 'high' → maximum product ending at current position
      let low = 1, high = 1;

      // Initialize result with maximum element
      let res = Math.max(...nums);

      for (let n of nums) {

            // Agar element 0 hai to reset
            if (n === 0) {
                  low = 1;
                  high = 1;
                  continue;
            }

            let tempLow = low;
            let tempHigh = high;

            // Check 3 possibilities
            low = Math.min(tempHigh * n, tempLow * n, n);
            high = Math.max(tempHigh * n, tempLow * n, n);

            // Update result
            res = Math.max(res, high);
      }

      return res;
}