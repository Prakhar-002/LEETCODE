//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3477

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(fruits)

//? 🧺 Space complexity ➺ O(1)

var numOfUnplacedFruits = function (fruits, baskets) {
      let unplacedFruits = 0; // Count of fruits that can't be placed

      for (let fruit of fruits) {
            let unplug = 1; // Assume fruit is unplaced

            for (let i = 0; i < baskets.length; i++) {
                  if (fruit <= baskets[i]) {
                        baskets[i] = 0; // Mark basket as used
                        unplug = 0;     // Fruit placed
                        break;
                  }
            }

            unplacedFruits += unplug; // Add to count if not placed
      }

      return unplacedFruits; // Return final result
}