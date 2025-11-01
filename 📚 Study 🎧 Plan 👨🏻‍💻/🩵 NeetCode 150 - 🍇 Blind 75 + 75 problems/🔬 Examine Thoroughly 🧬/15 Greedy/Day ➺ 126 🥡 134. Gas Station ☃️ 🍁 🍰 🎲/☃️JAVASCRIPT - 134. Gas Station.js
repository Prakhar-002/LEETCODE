//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var canCompleteCircuit = function (gas, cost) {
      let totalGas = 0;     // Total gas from all stations
      let totalCost = 0;    // Total cost to travel through all stations
      let tank = 0;         // Tracks remaining gas in tank during the trip
      let start = 0;        // Index of the station to start from

      for (let i = 0; i < gas.length; i++) {
            totalGas += gas[i];             // Total available gas
            totalCost += cost[i];           // Total required cost
            tank += gas[i] - cost[i];       // Update tank balance

            // If tank drops below 0, current start is invalid
            if (tank < 0) {
                  start = i + 1;              // Try the next station
                  tank = 0;                   // Reset the tank
            }
      }

      // Only possible if total gas ≥ total cost
      return totalGas >= totalCost ? start : -1;
};