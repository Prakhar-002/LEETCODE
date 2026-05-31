//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2126

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var asteroidsDestroyed = function(mass, asteroids) {
      // Sort so we always face the smallest asteroid first
      asteroids.sort((a, b) => a - b);

      let currentMass = mass;

      for (const asteroid of asteroids) {
            // Can't destroy asteroid — it's too heavy
            if (currentMass < asteroid)
                  return false;

            // Absorb asteroid and grow
            currentMass += asteroid;
      }

      return true;
};