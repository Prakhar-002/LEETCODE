//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      int timeRequiredToBuy(vector<int>& tickets, int k) {
            int T = tickets[k];  // Number of tickets kth person wants
            int total = 0;       // Time accumulator

            // Iterate over all people
            for (int i = 0; i < (int)tickets.size(); i++) {
                  if (i <= k) {
                        // People at or before k buy up to T tickets
                        total += min(tickets[i], T);
                  } else {
                        // People after k buy up to T - 1 tickets
                        total += min(tickets[i], T - 1);
                  }
            }

            return total;
      }
};
