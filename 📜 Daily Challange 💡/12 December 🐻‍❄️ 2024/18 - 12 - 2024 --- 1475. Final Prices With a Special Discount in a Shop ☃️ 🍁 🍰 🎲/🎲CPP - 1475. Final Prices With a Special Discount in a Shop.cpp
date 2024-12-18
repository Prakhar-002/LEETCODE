//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1475

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
      vector<int> finalPrices(vector<int>& prices) {
            stack<int> s;
            int n = prices.size();
            vector<int> ans(n);

            // Traverse the prices array from right to left
            for (int i = n - 1; i >= 0; --i) {
                  // Pop elements from the stack that are greater than the current price
                  while (!s.empty() && s.top() > prices[i]) {
                        s.pop();
                  }

                  // Calculate discounted price
                  ans[i] = s.empty() ? prices[i] : prices[i] - s.top();

                  // Push current price to the stack
                  s.push(prices[i]);
            }

            return ans;
      }
};
