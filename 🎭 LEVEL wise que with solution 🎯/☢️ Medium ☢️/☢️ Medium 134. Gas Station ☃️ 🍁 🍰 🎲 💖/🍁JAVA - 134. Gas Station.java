//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int canCompleteCircuit(int[] gas, int[] cost) {
            int totalGas = 0; // Total gas from all stations
            int totalCost = 0; // Total cost to travel all stations
            int tank = 0; // Simulated tank balance
            int start = 0; // Starting station index

            for (int i = 0; i < gas.length; i++) {
                  totalGas += gas[i]; // Accumulate gas
                  totalCost += cost[i]; // Accumulate cost
                  tank += gas[i] - cost[i]; // Update tank status

                  // If tank goes negative, we cannot reach the next station
                  if (tank < 0) {
                        start = i + 1; // Choose next station as new start
                        tank = 0; // Reset tank
                  }
            }

            // Final check: if gas is enough to cover cost
            return totalGas >= totalCost ? start : -1;
      }
}
