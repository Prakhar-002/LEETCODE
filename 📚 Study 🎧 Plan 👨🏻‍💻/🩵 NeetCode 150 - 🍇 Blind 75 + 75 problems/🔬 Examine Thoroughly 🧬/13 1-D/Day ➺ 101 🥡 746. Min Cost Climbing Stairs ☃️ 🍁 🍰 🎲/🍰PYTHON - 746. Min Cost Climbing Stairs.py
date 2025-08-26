#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 746

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def minCostClimbingStairs(self, cost: List[int]) -> int:
            # Loop backwards starting from the third last stair (len(cost)-3)
            # Each index i is updated to store the total minimum cost if you start stepping from cost[i].
            for i in range(len(cost) - 3, -1, -1):
                  # At stair i, the cost includes:
                  # - The cost of stepping on i itself
                  # - Plus the minimum of either stepping on i+1 or i+2
                  cost[i] += min(cost[i + 1], cost[i + 2])

            # Finally, you can start from either step 0 or step 1.
            # So the minimum of those two gives the result.
            return min(cost[0], cost[1])
