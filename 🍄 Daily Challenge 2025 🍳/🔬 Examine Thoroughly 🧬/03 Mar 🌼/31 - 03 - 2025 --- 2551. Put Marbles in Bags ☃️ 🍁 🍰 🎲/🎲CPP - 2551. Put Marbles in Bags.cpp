//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2551

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      long long putMarbles(vector<int>& weights, int k) {
            int n = weights.size();
            
            // Step 1: Compute pair weights (sum of adjacent weights)
            vector<long long> pairWeights(n - 1);
            for (int i = 0; i < n - 1; i++) {
                  pairWeights[i] = (long long)weights[i] + weights[i + 1];
            }

            // Step 2: Sort the pair weights in ascending order
            sort(pairWeights.begin(), pairWeights.end());

            long long score = 0; // Variable to store the final result

            // Step 3: Compute the difference between the largest (k-1) sums and smallest (k-1) sums
            for (int i = 0; i < k - 1; i++) {
                  score += pairWeights[n - 2 - i] - pairWeights[i];
            }

            return score;
      }
};
