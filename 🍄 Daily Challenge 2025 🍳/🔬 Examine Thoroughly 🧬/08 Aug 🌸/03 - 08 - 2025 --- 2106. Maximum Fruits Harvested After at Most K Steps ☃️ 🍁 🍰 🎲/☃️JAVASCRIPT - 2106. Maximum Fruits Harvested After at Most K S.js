//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxTotalFruits = function (fruits, startPos, k) {
      let left = 0;                 // Left pointer of the window
      let sum = 0;                  // Current total fruits in the window
      let ans = 0;                  // Maximum fruits collected

      for (let right = 0; right < fruits.length; right++) {
            sum += fruits[right][1];     // Add fruits at the right end

            // If the steps required exceed k, move the left pointer
            while (left <= right && step(fruits, startPos, left, right) > k) {
                  sum -= fruits[left][1];     // Remove leftmost fruit count
                  left++;                     // Move left forward
            }

            ans = Math.max(ans, sum);    // Update max fruits if greater
      }

      return ans;   // Return the result
};

// Helper function to calculate the minimum steps required
const step = (fruits, startPos, left, right) => {
      return (
            Math.min(
                  Math.abs(startPos - fruits[right][0]),
                  Math.abs(startPos - fruits[left][0])
            ) + (fruits[right][0] - fruits[left][0])
      );
};
