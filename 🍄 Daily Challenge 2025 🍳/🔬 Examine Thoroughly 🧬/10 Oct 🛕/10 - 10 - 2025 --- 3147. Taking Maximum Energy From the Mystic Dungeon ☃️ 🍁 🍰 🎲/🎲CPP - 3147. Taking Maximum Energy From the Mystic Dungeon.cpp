//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(energy)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
      int maximumEnergy(vector<int>& energy, int k) {
            // Initialize answer with lowest possible integer value
            int ans = INT_MIN;
            int n = energy.size();

            // Try starting from each of the last k indices
            for (int i = n - k; i < n; i++) {
                  int total = 0;
                  int j = i;

                  // Jump backwards by k steps, summing energies
                  while (j >= 0) {
                        total += energy[j];
                        ans = max(ans, total);
                        j -= k;
                  }
            }

            // Return the maximum sum found
            return ans;
      }
};
