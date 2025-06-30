//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
            int totalGas = 0;  // Total gas available across all stations
            int totalCost = 0; // Total cost to travel across all stations
            int tank = 0;      // Current gas in tank during simulation
            int start = 0;     // Starting index of the gas station

            for (int i = 0; i < gas.size(); ++i) {
                  totalGas += gas[i];       // Add gas at station i
                  totalCost += cost[i];     // Add cost to travel to next station
                  tank += gas[i] - cost[i]; // Update tank balance

                  // If tank goes negative, we can't reach next station from current start
                  if (tank < 0) {
                        start = i + 1; // Reset starting station to next one
                        tank = 0;      // Reset tank
                  }
            }

            // If total gas is less than total cost, it's impossible to complete circuit
            return totalGas >= totalCost ? start : -1;
      }
};
