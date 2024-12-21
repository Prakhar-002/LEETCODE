//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 735

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(asteroids)

//? 🧺 Space complexity ➺ O(n)

var asteroidCollision = function (asteroids) {
      // Initialize a result array to store surviving asteroids
      const res = [];

      // Iterate through each asteroid in the input array
      for (let i = 0; i < asteroids.length; i++) {
            const last = res[res.length - 1]; // Get the last asteroid in the result array
            const cur = asteroids[i];        // Get the current asteroid

            // If there are no potential collisions:
            // - The result array is empty
            // - The last asteroid is moving left (negative)
            // - The current asteroid is moving right (positive)
            if (!res.length || last < 0 || cur > 0) {
                  res.push(cur); // Add the current asteroid to the result
            }
            // If the current and last asteroids have equal magnitude but opposite directions
            else if (-cur == last) {
                  res.pop(); // Both asteroids are destroyed
            }
            // If the current asteroid is larger in magnitude and moving left
            else if (-cur > last) {
                  res.pop(); // Destroy the last asteroid
                  i--;       // Reprocess the current asteroid for further collisions
            }
      }

      // Return the resulting array of surviving asteroids
      return res;
};
