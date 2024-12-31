//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 983

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(days)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
      int mincostTickets(vector<int>& days, vector<int>& costs) {
            // Map to store the minimum cost for a given day index.
            // dp[days.size()] is initialized to 0 because no cost is needed when no days are left.
            unordered_map<int, int> dp;
            dp[days.size()] = 0;

            // Start the recursion from index 0.
            return dfs(0, days, costs, dp);
      }

private:
      int dfs(int i, const vector<int>& days, const vector<int>& costs, 
            unordered_map<int, int>& dp) {
            // If the minimum cost for index `i` is already calculated, return it.
            if (dp.find(i) != dp.end()) {
                  return dp[i];
            }

            // Initialize the minimum cost for this index to infinity.
            int minCost = INT_MAX;

            // Iterate through the ticket options.
            for (int k = 0; k < costs.size(); ++k) {
                  int cost = costs[k];
                  int duration = (k == 0) ? 1 : (k == 1) ? 7 : 30; // Duration based on ticket type.

                  // Move `j` to the first day outside the current ticket's duration.
                  int j = i;
                  while (j < days.size() && days[j] < days[i] + duration) {
                        ++j;
                  }

                  // Calculate the minimum cost considering the current ticket.
                  minCost = min(minCost, cost + dfs(j, days, costs, dp));
            }

            // Store the result in the map and return it.
            dp[i] = minCost;
            return minCost;
      }
};
