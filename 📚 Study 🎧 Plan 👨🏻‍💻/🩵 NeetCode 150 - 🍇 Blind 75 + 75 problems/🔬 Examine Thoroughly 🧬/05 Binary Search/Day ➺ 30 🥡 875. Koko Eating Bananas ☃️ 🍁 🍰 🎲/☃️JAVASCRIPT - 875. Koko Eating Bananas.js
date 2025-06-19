//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 875

//? ⌚ Time complexity ➺ O(n log(max(piles))) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(1)

var minEatingSpeed = function (piles, H) {

      // Initialize left and right bounds
      let left = 1;
      let right = Math.max(...piles);

      // Binary search loop
      while (left < right) {

            // Calculate mid speed
            let mid = Math.floor((left + right) / 2);

            // Compute total hours needed at this speed
            let total = 0;
            for (let pile of piles) {
                  total += Math.ceil(pile / mid);
            }

            // If too many hours, speed is too slow
            if (total > H) {
                  left = mid + 1;
            } else {
                  right = mid;
            }
      }

      // Return minimum valid speed
      return left;
};
