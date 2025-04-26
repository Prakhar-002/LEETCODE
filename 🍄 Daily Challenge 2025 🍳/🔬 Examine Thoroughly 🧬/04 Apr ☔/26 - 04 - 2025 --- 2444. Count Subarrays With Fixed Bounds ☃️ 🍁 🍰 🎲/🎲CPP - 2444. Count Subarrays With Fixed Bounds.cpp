//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2444

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      long long countSubarrays(vector<int>& nums, int minK, int maxK) {
            // pMin: last index where nums[i] == minK
            // pMax: last index where nums[i] == maxK
            // bad: last index where nums[i] is out of [minK, maxK] range
            int pMin = -1, pMax = -1, bad = -1;
            long long ans = 0; // To store total count

            // Traverse through array
            for (int i = 0; i < nums.size(); i++) {
                  int num = nums[i];

                  // Update pMin if current element is minK
                  if (num == minK) {
                        pMin = i;
                  }

                  // Update pMax if current element is maxK
                  if (num == maxK) {
                        pMax = i;
                  }

                  // Update bad if current element is invalid
                  if (num < minK || num > maxK) {
                        bad = i;
                  }

                  // If both minK and maxK have been seen
                  if (pMin != -1 && pMax != -1) {
                        // Add number of valid subarrays ending at i
                        ans += max(0, min(pMin, pMax) - bad);
                  }
            }

            // Return total valid subarrays
            return ans;
      }
};
