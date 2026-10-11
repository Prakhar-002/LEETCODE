//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2333

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = max_diff

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
            int n = nums1.size();
            vector<int> diff(n);
            int maxDiff = 0;

            // Calculate absolute differences and the maximum difference
            for (int i = 0; i < n; ++i) {
                  diff[i] = abs(nums1[i] - nums2[i]);
                  maxDiff = max(maxDiff, diff[i]);
            }

            // countDiff[d] stores how many elements currently have difference d
            vector<int> countDiff(maxDiff + 1, 0);
            for (int d : diff) {
                  countDiff[d]++;
            }

            // Total available reduction budget
            long long K = static_cast<long long>(k1) + k2;

            // Greedily decrement the largest differences
            for (int currDiff = maxDiff; currDiff > 0 && K > 0; --currDiff) {
                  int countOps = min(static_cast<long long>(countDiff[currDiff]), K);

                  countDiff[currDiff] -= countOps;
                  countDiff[currDiff - 1] += countOps;
                  K -= countOps;
            }

            // Calculate the total sum of squared differences
            long long result = 0;
            for (long long d = 1; d <= maxDiff; ++d) {
                  result += static_cast<long long>(countDiff[d]) * d * d;
            }

            return result;
      }
};