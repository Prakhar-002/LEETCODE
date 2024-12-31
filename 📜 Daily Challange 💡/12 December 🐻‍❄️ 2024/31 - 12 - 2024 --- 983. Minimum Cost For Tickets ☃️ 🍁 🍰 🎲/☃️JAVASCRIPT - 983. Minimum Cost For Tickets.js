//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 983

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(days)

//? 🧺 Space complexity ➺ O(n)

var mincostTickets = function(days, costs) {
      // Map to store the minimum cost for a given day index.
      // dp[days.length] is set to 0 because no cost is needed when no days are left.
      const dp = new Map();
      dp.set(days.length, 0);

      // Define a helper function for recursion.
      const dfs = (i) => {
            // If the minimum cost for index `i` is already calculated, return it.
            if (dp.has(i)) {
                  return dp.get(i);
            }

            // Initialize the minimum cost for this index to Infinity.
            let minCost = Infinity;

            // Iterate through the ticket options.
            for (let k = 0; k < costs.length; k++) {
                  const cost = costs[k];
                  const duration = [1, 7, 30][k]; // Duration based on ticket type.

                  // Move `j` to the first day outside the current ticket's duration.
                  let j = i;
                  while (j < days.length && days[j] < days[i] + duration) {
                        j++;
                  }

                  // Calculate the minimum cost considering the current ticket.
                  minCost = Math.min(minCost, cost + dfs(j));
            }

            // Store the result in the map and return it.
            dp.set(i, minCost);
            return minCost;
      };

      // Start the recursion from index 0.
      return dfs(0);
};
