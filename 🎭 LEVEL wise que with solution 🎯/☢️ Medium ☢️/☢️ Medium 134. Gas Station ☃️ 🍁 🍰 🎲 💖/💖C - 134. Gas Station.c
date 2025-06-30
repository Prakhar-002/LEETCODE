//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

// Function to determine if we can complete the circuit
int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
      int totalGas = 0;     // Total gas across all stations
      int totalCost = 0;    // Total cost to travel through all stations
      int tank = 0;         // Current gas in tank during traversal
      int start = 0;        // Candidate starting station

      for (int i = 0; i < gasSize; ++i) {
            totalGas += gas[i];               // Add gas from current station
            totalCost += cost[i];             // Add cost to reach next station
            tank += gas[i] - cost[i];         // Update tank after leaving station

            // If tank goes negative, we can't reach the next station
            if (tank < 0) {
                  start = i + 1;              // Try the next station as new start
                  tank = 0;                   // Reset tank for new attempt
            }
      }

      // If total gas is at least total cost, return starting index
      return totalGas >= totalCost ? start : -1;
}
