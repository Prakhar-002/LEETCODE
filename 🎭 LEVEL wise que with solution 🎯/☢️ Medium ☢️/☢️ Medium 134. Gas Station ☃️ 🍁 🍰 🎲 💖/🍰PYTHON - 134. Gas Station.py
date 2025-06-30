#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 134

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
            total_gas = 0     # Total gas available across all stations
            total_cost = 0    # Total cost to travel across all stations
            tank = 0          # Current tank balance while traversing
            start = 0         # Candidate starting station index

            for i in range(len(gas)):
                  total_gas += gas[i]           # Accumulate total gas
                  total_cost += cost[i]         # Accumulate total cost
                  tank += gas[i] - cost[i]      # Update tank after leaving station

                  # If tank is negative, we cannot travel from start to i+1
                  if tank < 0:
                        start = i + 1           # Try next station as start
                        tank = 0                # Reset tank

            # If total gas is less than cost, completing circuit is impossible
            return start if total_gas >= total_cost else -1
