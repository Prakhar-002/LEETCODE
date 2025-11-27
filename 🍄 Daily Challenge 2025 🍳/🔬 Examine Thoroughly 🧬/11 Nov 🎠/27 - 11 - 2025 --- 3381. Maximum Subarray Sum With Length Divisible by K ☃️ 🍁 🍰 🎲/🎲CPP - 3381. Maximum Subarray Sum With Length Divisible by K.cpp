//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

using ll = long long;

class Solution {
public:
      ll maxSubarraySum(vector<int> &nums, int k) {
            // prefSum tracks the prefix sum up to current index i
            ll prefSum = 0;

            // subMax stores maximum subarray sum where length is multiple of k
            ll subMax = LLONG_MIN;

            // minSoFar[k] stores minimum prefix sum for each remainder (i % k)
            // This groups prefixes by their position modulo k
            vector<ll> minSoFar(k, LLONG_MAX / 2);

            // Initialize: consider empty prefix sum = 0 at "virtual" index -1
            // -1 % k = (k-1) % k, so set this position to 0
            minSoFar[(k - 1) % k] = 0;

            // Process each element in the array
            for (int i = 0; i < nums.size(); i++) {
                  // Update running prefix sum: prefSum[i] = prefSum[i-1] + nums[i]
                  prefSum += nums[i];

                  // Calculate max subarray sum ending at i:
                  // Find earliest j where (i-j) % k == 0, i.e., i%k == j%k
                  // Max sum = prefSum[i] - min(prefSum[j]) for all j where j%k == i%k
                  subMax = max(subMax, prefSum - minSoFar[i % k]);

                  // Update minimum prefix sum for this modulo group (i % k)
                  minSoFar[i % k] = min(minSoFar[i % k], prefSum);
            }

            return subMax;
      }
};
