#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 983

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(days)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def mincostTickets(self, days: List[int], costs: List[int]) -> int:
            # Initialize a dictionary to store the minimum cost starting from a specific index.
            # dp[len(days)] is set to 0 because no cost is needed when no more days are left.
            dp = { len(days): 0 }

            # Define a helper function to recursively calculate the minimum cost.
            def dfs(i):
                  # If we have already calculated the minimum cost for index `i`, return it.
                  if i in dp:
                        return dp[i]

                  # Set the initial cost for this index to infinity (representing uncalculated state).
                  dp[i] = float("inf")

                  # `j` will help find the next day index that is outside the current ticket's duration.
                  j = i

                  # Iterate through the available ticket costs and their respective durations.
                  for cost, duration in zip(costs, [1, 7, 30]):
                        # Move `j` to the first day outside the current ticket's duration.
                        while j < len(days) and days[j] < days[i] + duration:
                              j += 1

                        # Update the minimum cost for index `i` by considering the current ticket.
                        dp[i] = min(dp[i], cost + dfs(j))

                  # Return the calculated minimum cost for index `i`.
                  return dp[i]

            # Start the recursion from day 0 (index 0).
            return dfs(0)
