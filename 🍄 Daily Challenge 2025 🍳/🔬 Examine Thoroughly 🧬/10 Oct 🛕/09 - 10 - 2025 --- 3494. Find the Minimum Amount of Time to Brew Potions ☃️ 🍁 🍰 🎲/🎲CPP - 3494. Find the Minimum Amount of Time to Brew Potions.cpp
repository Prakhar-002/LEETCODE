//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3494

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// ⌚ Time complexity -> O(n * m)
// 💾 Space complexity -> O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long minTime(vector<int>& skill, vector<int>& mana) {
            int n = skill.size(), m = mana.size();

            // 'done' tracks DP states: done[i] is max result using first i skills so far
            vector<long> done(n + 1, 0);

            // Loop through each mana value
            for (int j = 0; j < m; j++) {
                  // Forward pass: update done for skills left to right
                  for (int i = 0; i < n; i++)
                        done[i + 1] = max(done[i], done[i + 1]) + skill[i] * mana[j];

                  // Backward pass: adjust to remove overlap for next iteration
                  for (int i = n - 1; i > 0; i--)
                        done[i] = done[i + 1] - skill[i] * mana[j];
            }

            // Return accumulated result for all skills
            return done[n];
      }
};
