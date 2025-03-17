//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2594

//? ⌚ Time complexity ➺ O(n log (r * cars^2)) 👉🏻  n = len(ranks)

//? 🧺 Space complexity ➺ O(1)

var repairCars = function (ranks, cars) {
      // Function to check how many cars can be repaired within the given time
      function carsRepairedWithin(time) {
            let repairedCars = 0;

            // Each mechanic repairs cars based on the given time limit
            for (let rank of ranks) {
                  repairedCars += Math.floor(Math.sqrt(time / rank));
            }

            return repairedCars;
      }

      // Binary search boundaries:
      // Minimum possible time = 1
      // Maximum possible time = worst case scenario (highest rank mechanic does all work)
      let left = 1, right = ranks[0] * cars * cars;
      let minTime = -1;

      // Perform binary search to find the least time required to repair all cars
      while (left <= right) {
            let mid = Math.floor((left + right) / 2); // Midpoint time guess
            let repairedCars = carsRepairedWithin(mid); // Count repaired cars in `mid` time

            if (repairedCars >= cars) {
                  minTime = mid;  // Store the valid time
                  right = mid - 1; // Try to find a smaller time
            } else {
                  left = mid + 1;  // Increase time if not enough cars are repaired
            }
      }

      return minTime; // Return the minimum time required
};
