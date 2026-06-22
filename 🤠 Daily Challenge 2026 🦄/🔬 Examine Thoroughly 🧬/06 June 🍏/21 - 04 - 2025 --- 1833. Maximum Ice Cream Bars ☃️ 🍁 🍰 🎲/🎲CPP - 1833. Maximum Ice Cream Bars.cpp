//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1833

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxIceCream(vector<int>& costs, int coins) {
            // Sort so cheapest ice creams are bought first
            sort(costs.begin(), costs.end());

            int res = 0;

            for (int cost : costs) {
                  // Can't afford this one — stop since rest are more expensive
                  if (coins - cost < 0)
                        return res;

                  coins -= cost;
                  res++;
            }

            return res;
      }
};