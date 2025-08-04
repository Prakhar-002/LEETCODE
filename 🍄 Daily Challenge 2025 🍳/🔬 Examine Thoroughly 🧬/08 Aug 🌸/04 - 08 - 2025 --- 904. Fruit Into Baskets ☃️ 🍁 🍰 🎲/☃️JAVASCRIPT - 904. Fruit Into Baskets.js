//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

var totalFruit = function (fruits) {
      const bucket = new Map(); // Map to store fruit type and count
      let l = 0;                // Left pointer of window
      let maxFruits = 0;        // Maximum fruits collected

      for (let r = 0; r < fruits.length; r++) {
            // Add or increment the fruit count
            bucket.set(fruits[r], (bucket.get(fruits[r]) || 0) + 1);

            // Shrink the window if more than 2 types of fruits
            while (bucket.size > 2) {
                  bucket.set(fruits[l], bucket.get(fruits[l]) - 1);
                  if (bucket.get(fruits[l]) === 0) {
                        bucket.delete(fruits[l]); // Remove if count is zero
                  }

                  l++; // Move left pointer
            }

            // Update the max window length
            maxFruits = Math.max(maxFruits, r - l + 1);
      }

      return maxFruits;
};
