//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2064

//? ⌚ Time complexity ➺ O(q * log(max(quantities))) 👉🏻  n = len(quantities)

//? 🧺 Space complexity ➺ O(1)

var minimizedMaximum = function (n, quantities) {
      // Helper function to check if we can distribute items with a max of 'x' items per store
      const canDistribute = (x) => {
            let stores = 0;
            for (let q of quantities) {
                  // Calculate required stores for each item quantity with max 'x' per store
                  stores += Math.ceil(q / x);
            }
            return stores <= n;
      };

      // Set binary search boundaries
      let l = 1, r = Math.max(...quantities);
      let max_x = 0;

      while (l <= r) {
            let x = l + Math.floor((r - l) / 2);

            // If distribution is possible with 'x', try smaller values
            if (canDistribute(x)) {
                  max_x = x;
                  r = x - 1;
            } else {
                  // Otherwise, try larger values
                  l = x + 1;
            }
      }

      return max_x;
}; 