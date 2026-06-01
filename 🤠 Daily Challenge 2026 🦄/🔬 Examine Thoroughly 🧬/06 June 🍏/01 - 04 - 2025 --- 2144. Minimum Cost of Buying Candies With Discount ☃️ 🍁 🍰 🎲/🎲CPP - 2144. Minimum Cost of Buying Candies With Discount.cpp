//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2144

//? ⌚ Time complexity ➺ O(nlogn) 👉🏻  n = len(cost)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minimumCost(vector<int>& cost) {
            // Sort descending so most expensive items come first
            sort(cost.begin(), cost.end(), greater<int>());
            int ans = 0;

            for (int i = 0; i < (int)cost.size(); i++) {
                  // Every 3rd item (0-indexed position 2, 5, 8...) is free — skip it
                  if (i % 3 != 2)
                        ans += cost[i];
            }

            return ans;
      }
};