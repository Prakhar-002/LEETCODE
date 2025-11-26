//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
      vector<int> finalPrices(vector<int>& prices) {
            stack<int> stackIndices;  // Stack to hold indices of prices
            vector<int> ans = prices; // Copy prices for modifying with discounts

            // Loop through all prices
            for (int i = 0; i < (int)prices.size(); i++) {
                  // While stack not empty and current price less or equal price at stack top
                  while (!stackIndices.empty() && prices[stackIndices.top()] >= prices[i]) {
                        ans[stackIndices.top()] -= prices[i];
                        stackIndices.pop();
                  }
                  stackIndices.push(i);
            }

            return ans;
      }
};
