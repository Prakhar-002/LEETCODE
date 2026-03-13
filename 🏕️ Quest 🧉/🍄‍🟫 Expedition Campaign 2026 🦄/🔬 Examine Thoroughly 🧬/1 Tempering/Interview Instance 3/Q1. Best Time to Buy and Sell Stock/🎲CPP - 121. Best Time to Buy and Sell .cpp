//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 121

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxProfit(vector<int>& prices) {
            // Initialize profit variable
            int profit = 0;
            // Left and right pointers
            int l = 0, r = 1;

            // Iterate while the right pointer is within bounds
            while (r < prices.size()) {
                  // If we find a profitable transaction
                  if (prices[l] < prices[r]) {
                        int curProfit = prices[r] - prices[l]; // Calculate current profit
                        profit = max(profit, curProfit);       // Update maximum profit
                  } else {
                        l = r;  // Move left pointer to right pointer if no profit possible
                  }

                  r++;  // Move right pointer forward
            }

            return profit;  // Return the maximum profit found
      }
};
